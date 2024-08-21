`timescale 1ns/1ps

module haar_dwt_tb;

parameter DATA_WIDTH = 8;
parameter SIGNAL_LENGTH = 8;

reg clk;
reg rst;
reg [DATA_WIDTH-1:0] din;
reg start;
wire [DATA_WIDTH-1:0] dout_a;
wire [DATA_WIDTH-1:0] dout_d;
wire done;

integer i;

haar_dwt #(
    .DATA_WIDTH(DATA_WIDTH),
    .SIGNAL_LENGTH(SIGNAL_LENGTH)
) DUT (
    .clk(clk),
    .rst(rst),
    .din(din),
    .start(start),
    .dout_a(dout_a),
    .dout_d(dout_d),
    .done(done)
);

initial begin
    clk = 0;
    rst = 1;
    din = 0;
    start = 0;
    #100 rst = 0;
end

always #10 clk = ~clk;

initial begin
    @(negedge rst);
    for (i = 0; i < SIGNAL_LENGTH; i = i + 1) begin
        din = (8'b0 | i[7:0]);
        @(posedge clk);
    end
    start = 1;
    @(posedge clk);
    start = 0;
    @(posedge done);
    $display("Approximation coefficients: %d", dout_a);
    $display("Detail coefficients: %d", dout_d);
    $finish;
end

endmodule