module butterfly(
    input wire signed [15:0] a_real, a_imag,
    input wire signed [15:0] b_real, b_imag,
    input wire signed [15:0] twiddle_real, twiddle_imag,
    output wire signed [15:0] y_real, y_imag,
    output wire signed [15:0] z_real, z_imag
);
    wire signed [31:0] mult1_real, mult1_imag;
    wire signed [31:0] mult2_real, mult2_imag;

    assign mult1_real = b_real * twiddle_real - b_imag * twiddle_imag;
    assign mult1_imag = b_real * twiddle_imag + b_imag * twiddle_real;

    // truncate and round 
    wire signed [15:0] b_twiddle_real = mult1_real[30:15] + mult1_real[14];
    wire signed [15:0] b_twiddle_imag = mult1_imag[30:15] + mult1_imag[14];

    // y = a + b*twiddle
    assign y_real = a_real + b_twiddle_real;
    assign y_imag = a_imag + b_twiddle_imag;

    // z = a - b*twiddle
    assign z_real = a_real - b_twiddle_real;
    assign z_imag = a_imag - b_twiddle_imag;

endmodule