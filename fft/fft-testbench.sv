module fft_4point_tb;
    reg signed [15:0] x0_real, x0_imag;
    reg signed [15:0] x1_real, x1_imag;
    reg signed [15:0] x2_real, x2_imag;
    reg signed [15:0] x3_real, x3_imag;
    wire signed [15:0] y0_real, y0_imag;
    wire signed [15:0] y1_real, y1_imag;
    wire signed [15:0] y2_real, y2_imag;
    wire signed [15:0] y3_real, y3_imag;

    fft_4point dut (
        .x0_real(x0_real), .x0_imag(x0_imag),
        .x1_real(x1_real), .x1_imag(x1_imag),
        .x2_real(x2_real), .x2_imag(x2_imag),
        .x3_real(x3_real), .x3_imag(x3_imag),
        .y0_real(y0_real), .y0_imag(y0_imag),
        .y1_real(y1_real), .y1_imag(y1_imag),
        .y2_real(y2_real), .y2_imag(y2_imag),
        .y3_real(y3_real), .y3_imag(y3_imag)
    );

    initial begin
        // Initialize Inputs
        x0_real = 16'd1000; x0_imag = 16'd0;
        x1_real = 16'd2000; x1_imag = 16'd0;
        x2_real = 16'd3000; x2_imag = 16'd0;
        x3_real = 16'd4000; x3_imag = 16'd0;
        #100;

        $display("Inputs:");
        $display("x0 = %d + j%d", x0_real, x0_imag);
        $display("x1 = %d + j%d", x1_real, x1_imag);
        $display("x2 = %d + j%d", x2_real, x2_imag);
        $display("x3 = %d + j%d", x3_real, x3_imag);
        #10;

        $display("Outputs:");
        $display("y0 = %d + j%d", y0_real, y0_imag);
        $display("y1 = %d + j%d", y1_real, y1_imag);
        $display("y2 = %d + j%d", y2_real, y2_imag);
        $display("y3 = %d + j%d", y3_real, y3_imag);

        $finish;
    end

endmodule