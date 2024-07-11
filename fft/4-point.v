module fft_4point(
    input wire signed [15:0] x0_real, x0_imag,
    input wire signed [15:0] x1_real, x1_imag,
    input wire signed [15:0] x2_real, x2_imag,
    input wire signed [15:0] x3_real, x3_imag,
    output wire signed [15:0] y0_real, y0_imag,
    output wire signed [15:0] y1_real, y1_imag,
    output wire signed [15:0] y2_real, y2_imag,
    output wire signed [15:0] y3_real, y3_imag
);

    wire signed [15:0] s0_real, s0_imag, s1_real, s1_imag;
    wire signed [15:0] s2_real, s2_imag, s3_real, s3_imag;

    localparam signed [15:0] W0_REAL = 16'h7fff;  // cos(0) = 1
    localparam signed [15:0] W0_IMAG = 16'h0000;  // sin(0) = 0
    localparam signed [15:0] W1_REAL = 16'h0000;  // cos(pi/2) = 0
    localparam signed [15:0] W1_IMAG = 16'h8000;  // sin(pi/2) = -1 

    butterfly bf1 (
        .a_real(x0_real), .a_imag(x0_imag),
        .b_real(x2_real), .b_imag(x2_imag),
        .twiddle_real(W0_REAL), .twiddle_imag(W0_IMAG),
        .y_real(s0_real), .y_imag(s0_imag),
        .z_real(s2_real), .z_imag(s2_imag)
    );

    butterfly bf2 (
        .a_real(x1_real), .a_imag(x1_imag),
        .b_real(x3_real), .b_imag(x3_imag),
        .twiddle_real(W0_REAL), .twiddle_imag(W0_IMAG),
        .y_real(s1_real), .y_imag(s1_imag),
        .z_real(s3_real), .z_imag(s3_imag)
    );

    butterfly bf3 (
        .a_real(s0_real), .a_imag(s0_imag),
        .b_real(s1_real), .b_imag(s1_imag),
        .twiddle_real(W0_REAL), .twiddle_imag(W0_IMAG),
        .y_real(y0_real), .y_imag(y0_imag),
        .z_real(y2_real), .z_imag(y2_imag)
    );

    butterfly bf4 (
        .a_real(s2_real), .a_imag(s2_imag),
        .b_real(s3_real), .b_imag(s3_imag),
        .twiddle_real(W1_REAL), .twiddle_imag(W1_IMAG),
        .y_real(y1_real), .y_imag(y1_imag),
        .z_real(y3_real), .z_imag(y3_imag)
    );

endmodule