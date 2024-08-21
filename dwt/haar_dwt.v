`timescale 1ns/1ps
module haar_dwt #(
    parameter DATA_WIDTH = 8,
    parameter SIGNAL_LENGTH = 8
)(
    input clk,
    input rst,
    input [DATA_WIDTH-1:0] din,
    input start,
    output reg [DATA_WIDTH-1:0] dout_a,
    output reg [DATA_WIDTH-1:0] dout_d,
    output reg done
);
/* verilator lint_off WIDTHTRUNC */
reg [DATA_WIDTH-1:0] signal[SIGNAL_LENGTH-1:0];
reg [DATA_WIDTH-1:0] temp[SIGNAL_LENGTH/2-1:0];
integer i, j;

always @(posedge clk or posedge rst) begin
    if (rst) begin
        for (i = 0; i < SIGNAL_LENGTH; i = i + 1) begin
            signal[i] <= 0;
        end
        dout_a <= 0;
        dout_d <= 0;
        done <= 0;
    end
    else if (start) begin
        signal[0] <= din;
        for (i = 1; i < SIGNAL_LENGTH; i = i + 1) begin
            signal[i] <= signal[i-1];
        end
        for (j = 0; j < SIGNAL_LENGTH/2; j = j + 1) begin
            temp[j] <= (signal[2*j] + signal[2*j+1]) >>> 1;
            dout_d[j] <= $signed(signal[2*j] - signal[2*j+1]) >> 1;

        end
        for (i = 0; i < SIGNAL_LENGTH/2; i = i + 1) begin
            signal[i] <= temp[i];
        end
        dout_a <= signal[0];
        done <= 1;
    end
    else begin
        done <= 0;
    end
end

endmodule