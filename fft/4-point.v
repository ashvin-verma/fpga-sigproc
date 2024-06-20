module 4-point-fft #(
    parameter WIDTH = 16,
)(
    input wire [WIDTH-1:0] x0_r,
    input wire [WIDTH-1:0] x0_i,
    input wire [WIDTH-1:0] x1_r,
    input wire [WIDTH-1:0] x1_i,
    input wire [WIDTH-1:0] x2_r,
    input wire [WIDTH-1:0] x2_i,
    input wire [WIDTH-1:0] x3_r,
    input wire [WIDTH-1:0] x3_i,
    output wire [WIDTH-1:0] y0_r, 
    output wire [WIDTH-1:0] y0_i,
    output wire [WIDTH-1:0] y1_r,
    output wire [WIDTH-1:0] y1_i,
    output wire [WIDTH-1:0] y2_r,
    output wire [WIDTH-1:0] y2_i,
    output wire [WIDTH-1:0] y3_r,
    output wire [WIDTH-1:0] y3_i,
);

// Internal wiring

wire [WIDTH-1:0] y0_r_internal;
wire [WIDTH-1:0] y0_i_internal;
wire [WIDTH-1:0] y1_r_internal;
wire [WIDTH-1:0] y1_i_internal;
wire [WIDTH-1:0] y2_r_internal;
wire [WIDTH-1:0] y2_i_internal;
wire [WIDTH-1:0] y3_r_internal;
wire [WIDTH-1:0] y3_i_internal;

// Generate internal wires out*_1_*
wire [WIDTH-1:0] int1_r;
wire [WIDTH-1:0] int1_i;
wire [WIDTH-1:0] int2_r;
wire [WIDTH-1:0] int2_i;
wire [WIDTH-1:0] int3_r;
wire [WIDTH-1:0] int3_i;
wire [WIDTH-1:0] int4_r;
wire [WIDTH-1:0] int4_i;

// actual circuit

butterfly b1_1(
        .WIDTH(WIDTH),
        .w_r(16'h0001),
        .w_i(16'h0000)
    ) uut (
        .in1_r(x0_r),
        .in1_i(x0_i),
        .in2_r(x2_r),
        .in2_i(x2_i),
        .out1_r(int1_r),
        .out1_i(int1_i),
        .out2_r(int2_r),
        .out2_i(int2_i)
        );

butterfly b1_2(
        .WIDTH(WIDTH),
        .w_r(16'hFFFF),
        .w_i(16'h0000)
    ) uut2 (
        .in1_r(x1_r),
        .in1_i(x1_i),
        .in2_r(x3_r),
        .in2_i(x3_i),
        .out1_r(int3_r),
        .out1_i(int3_i),
        .out2_r(int4_r),
        .out2_i(int4_i)
);

butterfly b2_1(
        .WIDTH(WIDTH),
        .w_r(16'h0001),
        .w_i(16'h0000)
    ) uut3 (
        .in1_r(int1_r),
        .in1_i(int1_i),
        .in2_r(int3_r),
        .in2_i(int3_i),
        .out1_r(y0_r_internal),
        .out1_i(y0_i_internal),
        .out2_r(y2_r_internal),
        .out2_i(y2_i_internal)
);

butterfly b2_2(
    .WIDTH(WIDTH),
    .w_r(16'h0000),
    .w_i(16'hFFFF)
    ) uut4 (
    .in1_r(int2_r),
    .in1_i(int2_i),
    .in2_r(int4_r),
    .in2_i(int4_i),
    .out1_r(y1_r_internal),
    .out1_i(y1_i_internal),
    .out2_r(y3_r_internal),
    .out2_i(y3_i_internal)
);

assign y0_r = y0_r_internal;
assign y0_i = y0_i_internal;
assign y1_r = y1_r_internal;
assign y1_i = y1_i_internal;
assign y2_r = y2_r_internal;
assign y2_i = y2_i_internal;
assign y3_r = y3_r_internal;
assign y3_i = y3_i_internal;

endmodule
