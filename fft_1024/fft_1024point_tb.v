module fft_1024point_tb;

    parameter WIDTH = 16;

    reg clk;
    reg rst;
    reg [WIDTH*1024-1:0] x_real;
    reg [WIDTH*1024-1:0] x_imag;
    wire [WIDTH*1024-1:0] y_real;
    wire [WIDTH*1024-1:0] y_imag;

    // Instantiate the Unit Under Test (UUT)
    fft_1024point #(WIDTH) uut (
        .clk(clk),
        .rst(rst),
        .x_real(x_real),
        .x_imag(x_imag),
        .y_real(y_real),
        .y_imag(y_imag)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    integer i;
    integer file;

    // Test stimulus
    initial begin
        $dumpfile("dumpfile.vcd");
        $dumpvars(0, fft_1024point_tb);
        // Initialize inputs
        rst = 1;
        for (i = 0; i < 1024; i = i + 1) begin
            x_real[WIDTH*i +: WIDTH] = i;  // Simple ramp function
            x_imag[WIDTH*i +: WIDTH] = 0;  // No imaginary part
        end
            // Print some input values for verification
        $display("Input values:");
        for (i = 0; i < 10; i = i + 1) begin
            $display("x[%4d] = %6d + j%6d", i, $signed(x_real[WIDTH*i +: WIDTH]), $signed(x_imag[WIDTH*i +: WIDTH]));
        end

        // Open file for writing results
        file = $fopen("verilog_output.txt", "w");

        // Release reset
        #100 rst = 0;

        // Wait for FFT computation (adjust timing as needed)
        #100000;

        // Display and save results
        $display("Output values:");
        for (i = 0; i < 1024; i = i + 1) begin
            $display("y[%4d] = %6d + j%6d", i, $signed(y_real[WIDTH*i +: WIDTH]), $signed(y_imag[WIDTH*i +: WIDTH]));
            $fwrite(file, "y[%4d] = %6d + j%6d\n", i, $signed(y_real[WIDTH*i +: WIDTH]), $signed(y_imag[WIDTH*i +: WIDTH]));
        end

        $fclose(file);
        $finish;
end

endmodule
