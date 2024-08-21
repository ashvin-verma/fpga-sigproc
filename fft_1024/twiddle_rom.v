module twiddle_rom #(
    parameter WIDTH = 16
)(
    input wire [9:0] addr,
    output reg [WIDTH-1:0] real_out,
    output reg [WIDTH-1:0] imag_out
);

    // ROM contents (you'll need to fill this with precalculated twiddle factors)
    reg [2*WIDTH-1:0] rom [0:511];

    initial begin
        $readmemh("twiddle_factors.mem", rom);
    end

    always @(*) begin
        {real_out, imag_out} = rom[addr];
    end

endmodule
