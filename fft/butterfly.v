module butterfly #(
    parameter WIDTH = 16,
    parameter w_r = 0,
    parameter w_i = 0
)(
    input wire [WIDTH-1:0] in1_r,
    input wire [WIDTH-1:0] in1_i,
    input wire [WIDTH-1:0] in2_r,
    input wire [WIDTH-1:0] in2_i,
    output wire [WIDTH-1:0] out1_r,
    output wire [WIDTH-1:0] out1_i,
    output wire [WIDTH-1:0] out2_r,
    output wire [WIDTH-1:0] out2_i
);
    // Internal logic
    assign out1_r = in1_r + in2_r;
    assign out1_i = in1_i + in2_i;

    // Internal wire

    wire [WIDTH-1:0] z1_r;
    wire [WIDTH-1:0] z1_i;
    wire [WIDTH-1:0] out_r;
    wire [WIDTH-1:0] out_i;

    z1_r = (in1_r - in2_r);
    z2_i = (in1_i - in2_i);

    // Instantiate the child module
    CompMult #(
        .WIDTH(WIDTH),
        .w_r(w_r),
        .w_i(w_i)
    ) comp (
        .z1_r(z1_r),
        .z1_i(z1_i),
        .o_r(out_r),
        .o_i(out_i)
    );

    // Use the output of the child module
    assign out2_r = out_r;
    assign out2_i = out_i;

endmodule

module CompMult #(
    parameter WIDTH = 16,
    parameter w_r = 0,
    parameter w_i = 0
) (
    input wire [WIDTH-1:0] z1_r,
    input wire [WIDTH-1:0] z1_i,
    output wire [WIDTH-1:0] o_r,
    output wire [WIDTH-1:0] o_i,
);

    assign o_r = (z1_r * w_r) - (z1_i * w_i);
    assign o_i = (z1_r * w_i) + (z1_i * w_r);
    
    
endmodule
