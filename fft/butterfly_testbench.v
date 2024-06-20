module butterfly_tb;

    parameter WIDTH = 16;
    parameter w_r = 2;
    parameter w_i = 3;

    reg [WIDTH-1:0] in1_r;
    reg [WIDTH-1:0] in1_i;
    reg [WIDTH-1:0] in2_r;
    reg [WIDTH-1:0] in2_i;
    wire [WIDTH-1:0] out1_r;
    wire [WIDTH-1:0] out1_i;
    wire [WIDTH-1:0] out2_r;
    wire [WIDTH-1:0] out2_i;

    // Instantiate the butterfly module
    butterfly #(
        .WIDTH(WIDTH),
        .w_r(w_r),
        .w_i(w_i)
    ) uut (
        .in1_r(in1_r),
        .in1_i(in1_i),
        .in2_r(in2_r),
        .in2_i(in2_i),
        .out1_r(out1_r),
        .out1_i(out1_i),
        .out2_r(out2_r),
        .out2_i(out2_i)
    );

    initial begin
        // Initialize inputs
        in1_r = 16'd10;
        in1_i = 16'd5;
        in2_r = 16'd3;
        in2_i = 16'd2;

        // Wait for changes to propagate
        #10;

        // Display results
        $display("out1_r: %d, out1_i: %d, out2_r: %d, out2_i: %d", out1_r, out1_i, out2_r, out2_i);
        
        // Add more test cases if needed

        // Finish simulation
        $finish;
    end

endmodule