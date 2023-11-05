/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
module alu (
   input  logic [32-1:0] in_alu_a,
   input  logic [32-1:0] in_alu_b,
   input  logic [3:0]   alu_op,
   input  logic         branch_unsigned,

   output logic [32-1:0] out_alu
);
//declare
parameter W = 32;
logic [W-1:0]   alu_add;
logic [W-1:0]   alu_sub;
logic [W-1:0]   alu_xor;
logic [W-1:0]   alu_and;
logic [W-1:0]   alu_or;
logic [W-1:0]   alu_sll;
logic [W-1:0]   alu_srl;
logic [W*2-1:0] alu_sra;
logic [5:0]     shift;
logic           eq;
logic           lt;

parameter ADD   = 4'b0000;
parameter MINUS = 4'b0001;
parameter XOR   = 4'b0010;
parameter AND   = 4'b0011;
parameter OR    = 4'b0100;
parameter SLL   = 4'b0101;
parameter SRL   = 4'b0110;
parameter SRA   = 4'b0111;
parameter SLT   = 4'b1000;
parameter SLTU  = 4'b1001;
parameter LUI   = 4'b1010;

//add
assign alu_add = in_alu_a + in_alu_b;
//sub
assign alu_sub = in_alu_a + ~in_alu_b + 1;
//xor
assign alu_xor = in_alu_a ^ in_alu_b;
//and
assign alu_and = in_alu_a & in_alu_b;
//or
assign alu_or  = in_alu_a | in_alu_b;
//shift left logical
assign shift   = in_alu_b[4:0];
assign alu_sll = in_alu_a << shift;
//shift right logical
assign alu_srl = in_alu_a >> shift;
//shift right arithmetic

always_comb begin
if(!in_alu_a[31]) begin
       alu_sra =  in_alu_a >> shift;
end else begin
       alu_sra =  {32'hFFFFFFFF,in_alu_a} >> shift;
end
end
//SLT + SLTU check
/* verilator lint_off PINCONNECTEMPTY */
//compare_32bit   compare_sltu (.a(in_alu_a), .b(in_alu_b), .eq(), .gt(), .lt(check_sltu));
//compare_32bit_s compare_slt  (.a(in_alu_a), .b(in_alu_b), .eq(), .gt(), .lt(check_slt));
branch_compare compare_u_s (.data_in_a(in_alu_a), .data_in_b(in_alu_b), .branch_unsigned(branch_unsigned), .equal(eq), .lessthan(lt));
always @(*) begin
   case (alu_op) 
      ADD:
         assign out_alu = alu_add;
      MINUS:
         assign out_alu = alu_sub;
      XOR:
         assign out_alu = alu_xor;
      AND:
         assign out_alu = alu_and;
      OR:
         assign out_alu = alu_or;
      SLL:
         assign out_alu = alu_sll;
      SRL:
         assign out_alu = alu_srl;
      SRA:
         assign out_alu = alu_sra[31:0];
      SLT:
         assign out_alu = (lt)?  32'd1 : 32'd0;
      SLTU:
         assign out_alu = (lt)?  32'd1 : 32'd0;
      LUI:
         assign out_alu = in_alu_b;
      default:
         assign out_alu = 'd0;
   endcase
end
endmodule
