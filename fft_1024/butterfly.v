module butterfly #(
    parameter WIDTH = 16
)(
    input wire clk,
    input wire rst,
    input wire signed [WIDTH-1:0] a_real, a_imag,
    input wire signed [WIDTH-1:0] b_real, b_imag,
    input wire signed [WIDTH-1:0] twiddle_real, twiddle_imag,
    output reg signed [WIDTH-1:0] y_real, y_imag,
    output reg signed [WIDTH-1:0] z_real, z_imag
);

    reg signed [2*WIDTH-1:0] mult1_real, mult1_imag;
    reg signed [WIDTH-1:0] b_twiddle_real, b_twiddle_imag;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            mult1_real <= 0;
            mult1_imag <= 0;
            b_twiddle_real <= 0;
            b_twiddle_imag <= 0;
            y_real <= 0;
            y_imag <= 0;
            z_real <= 0;
            z_imag <= 0;
        end else begin
            // Multiply b by twiddle factor
            mult1_real <= b_real * twiddle_real - b_imag * twiddle_imag;
            mult1_imag <= b_real * twiddle_imag + b_imag * twiddle_real;

            // Truncate and round the multiplication results
            b_twiddle_real <= mult1_real[2*WIDTH-2:WIDTH-1] + mult1_real[WIDTH-2];
            b_twiddle_imag <= mult1_imag[2*WIDTH-2:WIDTH-1] + mult1_imag[WIDTH-2];

            // Compute y = a + b*twiddle
            y_real <= a_real + b_twiddle_real;
            y_imag <= a_imag + b_twiddle_imag;

            // Compute z = a - b*twiddle
            z_real <= a_real - b_twiddle_real;
            z_imag <= a_imag - b_twiddle_imag;
        end
    end

endmodule
