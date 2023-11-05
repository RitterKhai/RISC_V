module reg_32 (
   input  logic [W-1:0] data_d,
   input  logic [nu_reg-1:0] addr_a,
   input  logic [nu_reg-1:0] addr_b,
   input  logic [nu_reg-1:0] addr_d,
   input  logic clk_i,
   input  logic rst_ni,
   input  logic wr_en_d,

   output logic [W-1:0] data_a,
   output logic [W-1:0] data_b
);
parameter W = 32;
parameter nu_reg = 5;
logic [W-1:0] mem [2**nu_reg-1:0];

always @(posedge clk_i, negedge rst_ni) begin
   if(!rst_ni) begin
      mem[0]  <= 'd0;
      mem[1]  <= 'd0;
      mem[2]  <= 'd0;
      mem[3]  <= 'd0;
      mem[4]  <= 'd0;
      mem[5]  <= 'd0;
      mem[6]  <= 'd0;
      mem[7]  <= 'd0;
      mem[8]  <= 'd0;
      mem[9]  <= 'd0;
      mem[10] <= 'd0;
      mem[11] <= 'd0;
      mem[12] <= 'd0;
      mem[13] <= 'd0;
      mem[14] <= 'd0;
      mem[15] <= 'd0;
      mem[16] <= 'd0;
      mem[17] <= 'd0;
      mem[18] <= 'd0;
      mem[19] <= 'd0;
      mem[20] <= 'd0;
      mem[21] <= 'd0;
      mem[22] <= 'd0;
      mem[23] <= 'd0;
      mem[24] <= 'd0;
      mem[25] <= 'd0;
      mem[26] <= 'd0;
      mem[27] <= 'd0;
      mem[28] <= 'd0;
      mem[29] <= 'd0;
      mem[30] <= 'd0;
      mem[31] <= 'd0;
   end else begin
      if ((wr_en_d == 1) && (addr_d != 0)) begin
         mem[addr_d] <= data_d;
      end	 
   end
end
assign data_a = mem[addr_a];
assign data_b = mem[addr_b];
endmodule
