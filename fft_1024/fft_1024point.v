module fft_1024point #(
    parameter WIDTH = 16
)(
    input wire clk,
    input wire rst,
    input wire [WIDTH*1024-1:0] x_real,
    input wire [WIDTH*1024-1:0] x_imag,
    output reg [WIDTH*1024-1:0] y_real,
    output reg [WIDTH*1024-1:0] y_imag
);

    // Declare intermediate stage signals
    wire [WIDTH-1:0] stage_real [0:10][0:1023];
    wire [WIDTH-1:0] stage_imag [0:10][0:1023];

    // Twiddle factor ROM
    reg [WIDTH-1:0] twiddle_factors_real [0:511];
    reg [WIDTH-1:0] twiddle_factors_imag [0:511];

    integer k;

    initial begin
        $readmemh("twiddle_factors_real.mem", twiddle_factors_real);
        $readmemh("twiddle_factors_imag.mem", twiddle_factors_imag);
    end

    // Input assignment
    genvar m;
    generate
        for (m = 0; m < 1024; m = m + 1) begin : input_assign
            assign stage_real[0][m] = x_real[WIDTH*m +: WIDTH];
            assign stage_imag[0][m] = x_imag[WIDTH*m +: WIDTH];
        end
    endgenerate

    // FFT stages
    genvar i, j;
    generate
        for (i = 0; i < 10; i = i + 1) begin : stages
            wire [WIDTH-1:0] next_stage_real [0:1023];
            wire [WIDTH-1:0] next_stage_imag [0:1023];

            for (j = 0; j < 1024; j = j + 1) begin : butterflies
                wire [WIDTH-1:0] a_real, a_imag, b_real, b_imag;
                wire [WIDTH-1:0] y_real_out, y_imag_out, z_real_out, z_imag_out;
                wire [8:0] twiddle_addr;

                assign a_real = stage_real[i][j];
                assign a_imag = stage_imag[i][j];
                assign b_real = stage_real[i][j ^ (1 << (9-i))];
                assign b_imag = stage_imag[i][j ^ (1 << (9-i))];
                assign twiddle_addr = (j & ((1 << (10-i)) - 1)) << (i-1);

                butterfly #(WIDTH) bf (
                    .clk(clk),
                    .rst(rst),
                    .a_real(a_real),
                    .a_imag(a_imag),
                    .b_real(b_real),
                    .b_imag(b_imag),
                    .twiddle_real(twiddle_factors_real[twiddle_addr]),
                    .twiddle_imag(twiddle_factors_imag[twiddle_addr]),
                    .y_real(y_real_out),
                    .y_imag(y_imag_out),
                    .z_real(z_real_out),
                    .z_imag(z_imag_out)
                );

                assign next_stage_real[j] = y_real_out;
                assign next_stage_imag[j] = y_imag_out;
                assign next_stage_real[j ^ (1 << (9-i))] = z_real_out;
                assign next_stage_imag[j ^ (1 << (9-i))] = z_imag_out;
            end

            for (j = 0; j < 1024; j = j + 1) begin : stage_assign
                assign stage_real[i+1][j] = next_stage_real[j];
                assign stage_imag[i+1][j] = next_stage_imag[j];
            end
        end
    endgenerate

    // Output assignment
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            y_real <= 0;
            y_imag <= 0;
        end else begin
            for (k = 0; k < 1024; k = k + 1) begin
                y_real[WIDTH*k +: WIDTH] <= stage_real[10][k];
                y_imag[WIDTH*k +: WIDTH] <= stage_imag[10][k];
            end
        end
    end

endmodule
