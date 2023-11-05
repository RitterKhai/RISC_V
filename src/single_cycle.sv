/* verilator lint_off UNUSED */
module single_cycle (
    input   logic            clk_i,
    input   logic            rst_ni,	
    input   logic   [W-1:0]  io_sw_i,

    output  logic   [W-1:0]  io_lcd_o,
    output  logic   [W-1:0]  io_ledg_o,
    output  logic   [W-1:0]  io_ledr_o,
    output  logic   [W-1:0]  io_hex0_o,
    output  logic   [W-1:0]  io_hex1_o,
    output  logic   [W-1:0]  io_hex2_o,
    output  logic   [W-1:0]  io_hex3_o,
    output  logic   [W-1:0]  io_hex4_o,
    output  logic   [W-1:0]  io_hex5_o,
    output  logic   [W-1:0]  io_hex6_o,
    output  logic   [W-1:0]  io_hex7_o,
    output  logic   [W-1:0]  pc_debug_o
);
parameter W = 32;
logic [W-1:0]  instr;
logic          br_eq;    
logic          br_lt; 
logic [2:0]    imm_gen_sel;
logic [3:0]    alu_op;
logic          reg_wr_en;
logic          PC_sel;
logic          branch_u;
logic          dmem_wr;
logic          op_a_sel;
logic          op_b_sel;
logic [1:0]    wb_sel;
logic [W-1:0]  pc;
logic [W-1:0]  pc_four;
logic [W-1:0]  alu_data;
logic [W-1:0]  rs1_data;
logic [W-1:0]  rs2_data;
logic [W-1:0]  wb_data;
logic [W-1:0]  imm; 
logic [W-1:0]  operand_a;
logic [W-1:0]  operand_b;
logic [W-1:0]  ld_data;
logic [3:0]    digit9, digit8, digit7, digit6, digit5, digit4, digit3, digit2, digit1, digit0;
logic [3:0]    digit_sel;
logic [W-1:0]  digit_out;

assign pc_debug_o = pc;

control_unit ctr_unit_block(
    .instr            (instr),
    .br_eq            (br_eq),
    .br_lt            (br_lt),

    .imm_gen_sel      (imm_gen_sel),
    .alu_op           (alu_op),
    .reg_wr_en        (reg_wr_en),
    .PC_sel           (PC_sel),
    .branch_u         (branch_u),
    .dmem_wr          (dmem_wr),
    .op_a_sel         (op_a_sel),
    .op_b_sel         (op_b_sel),
    .wb_sel           (wb_sel)
);

PC PC_block(
    .clk_i            (clk_i),
    .rst_ni           (rst_ni),
    .sel              (PC_sel),
    .pc_imm           (alu_data),

    .pc_out           (pc),
    .pc_4             (pc_four)
);

imem imem_block(
    .clk_i            (clk_i),
    .rst_ni           (rst_ni),
    .address          (pc[13:0]),

    .data             (instr)
);

reg_32 regfile_block( 
    .clk_i            (clk_i),
    .rst_ni           (rst_ni),
    .addr_a           (instr[19:15]),
    .addr_b           (instr[24:20]),
    .addr_d           (instr[11:7]),
    .data_d           (wb_data),
    .wr_en_d          (reg_wr_en),

    .data_a           (rs1_data),
    .data_b           (rs2_data)
);

branch_compare br_compare (
    .data_in_a        (rs1_data),
    .data_in_b        (rs2_data),
    .branch_unsigned  (branch_u),
    .equal            (br_eq),
    .lessthan         (br_lt)
);

imm_gen immgen_block(
    .instr            (instr),      
    .imm_sel          (imm_gen_sel),

    .imm              (imm)
);

mux_32bit mux_operand_a(
    .a               (rs1_data),        
    .b               (pc),
    .sel             (op_a_sel),

    .out             (operand_a)
);

mux_32bit mux_operand_b(
    .a               (rs2_data),        
    .b               (imm),
    .sel             (op_b_sel),

    .out             (operand_b)
);

alu alu_block( 
    .in_alu_a        (operand_a),
    .in_alu_b        (operand_b),
    .alu_op          (alu_op),
    .branch_unsigned (branch_u),

    .out_alu         (alu_data)
);

converter hex_to_dec (
    .result(rs1_data),
    .digit0(digit0),
    .digit1(digit1),
    .digit2(digit2),
    .digit3(digit3),
    .digit4(digit4),
    .digit5(digit5),
    .digit6(digit6),    
    .digit7(digit7),
    .digit8(digit8),
    .digit9(digit9)
);

dmem lsu_block(
    .clk_i           (clk_i),        
    .rst_ni          (rst_ni),
    .st_en           (dmem_wr),
    .addr            (alu_data),    
    .unsigned_en_mem (instr[14]),
//    .addr_sel       (alu_data[11:8]),
    .st_data         (rs2_data),    
    .sel_mod         (instr[13:12]),    
    .io_sw_i         (io_sw_i), 
    
    .ld_data         (ld_data),    
    .io_lcd_o        (io_lcd_o),    
    .io_ledg_o       (io_ledg_o),    
    .io_ledr_o       (io_ledr_o),    
    .io_hex0_o       (io_hex0_o),
    .io_hex1_o       (io_hex1_o),
    .io_hex2_o       (io_hex2_o),
    .io_hex3_o       (io_hex3_o),
    .io_hex4_o       (io_hex4_o),
    .io_hex5_o       (io_hex5_o),
    .io_hex6_o       (io_hex6_o),
    .io_hex7_o       (io_hex7_o)
    
);

mux_32bit_16x1 digit_sel_block(
    .a               ({(28'b0),digit0}),
    .b               ({(28'b0),digit1}),
    .c               ({(28'b0),digit2}),
    .d               ({(28'b0),digit3}),
    .e               ({(28'b0),digit4}),
    .f               ({(28'b0),digit5}),
    .g               ({(28'b0),digit6}),
    .h               ({(28'b0),digit7}),
    .j               ({(28'b0),digit8}),
    .k               ({(28'b0),digit9}),
    .l               (32'b0),
    .m               (32'b0),
    .n               (32'b0),
    .q               (32'b0),
    .r               (32'b0),
    .s               (32'b0),
    .sel             (instr[31:28]),

    .out             (digit_out)
);

mux_32bit_4x1 wb_sel_block(
    .a               (alu_data),
    .b               (ld_data),
    .c               (pc_four),
    .d               (digit_out),
    .sel             (wb_sel),

    .out             (wb_data)
);
endmodule
