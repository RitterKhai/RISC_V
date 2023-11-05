/*module top(
	//input
   input logic [W-1:0] data_d,
   input logic [nu_reg-1:0] addr_a,
   input logic [nu_reg-1:0] addr_b,
   input logic [nu_reg-1:0] addr_d,
   input logic clk_i,
   input logic rst_ni,
   input logic wr_en_d,	
	//output
   output logic [W-1:0] data_a,
   output logic [W-1:0] data_b
);
parameter W = 32;
parameter nu_reg = 5;

	reg_32 dut(
		.clk_i	   (clk_i),
		.rst_ni    (rst_ni),
		.addr_a    (addr_a),
		.addr_b    (addr_b),
		.addr_d    (addr_d),
		.wr_en_d   (wr_en_d),
		.data_d    (data_d),
		.data_a    (data_a),
		.data_b    (data_b)
	);

endmodule

module top(
        //input
   input logic [W-1:0] a,
   input logic [W-1:0] b,
        //output
   output logic eq,
   output logic gt,
   output logic lt
);
parameter W = 32;

        compare_32bit dut(
                .a     (a),
                .b     (b),
                .eq    (eq),
                .gt    (gt),
                .lt    (lt)
        );

endmodule
*/
/*
module top(
        //input
   input logic rst_ni,
   input logic clk_i,
   input logic [W-1:0] addr,
   input logic st_en,
   input logic [W-1:0] st_data,
//   input logic [3:0] addr_sel,
   input logic [1:0] sel_mod,
   input logic       unsigned_en_mem,
   input logic [31:0] io_sw_i,

        //output
   output logic [W-1:0]  ld_data,
   output logic [W-1:0]  io_lcd_o,
   output logic [W-1:0]  io_ledg_o,
   output logic [W-1:0]  io_ledr_o,
   output logic [W-1:0]  io_hex0_o,
   output logic [W-1:0]  io_hex1_o,
   output logic [W-1:0]  io_hex2_o,
   output logic [W-1:0]  io_hex3_o,
   output logic [W-1:0]  io_hex4_o,
   output logic [W-1:0]  io_hex5_o,
   output logic [W-1:0]  io_hex6_o,
   output logic [W-1:0]  io_hex7_o
);

parameter W = 32;

        dmem  dut(
                .clk_i      (clk_i),
                .rst_ni     (rst_ni),
                .st_en      (st_en),
                .addr       (addr),
		.unsigned_en_mem (unsigned_en_mem),
		.st_data    (st_data),
//		.addr_sel   (addr_sel),
		.sel_mod    (sel_mod),
		.io_sw_i    (io_sw_i),
		.io_lcd_o   (io_lcd_o),
		.io_ledg_o  (io_ledg_o),
		.io_ledr_o  (io_ledr_o),
		.ld_data    (ld_data),
		.io_hex0_o  (io_hex0_o),
		.io_hex1_o  (io_hex1_o),
		.io_hex2_o  (io_hex2_o),
		.io_hex3_o  (io_hex3_o),
		.io_hex4_o  (io_hex4_o),
		.io_hex5_o  (io_hex5_o),
		.io_hex6_o  (io_hex6_o),
		.io_hex7_o  (io_hex7_o)
        );
endmodule
*/

module top(
//input
   input logic rst_ni,
   input logic clk_i,
   input logic [31:0] io_sw_i,

//output
   output logic [W-1:0]  io_lcd_o,
   output logic [W-1:0]  io_ledg_o,
   output logic [W-1:0]  io_ledr_o,
   output logic [W-1:0]  io_hex0_o,
   output logic [W-1:0]  io_hex1_o,
   output logic [W-1:0]  io_hex2_o,
   output logic [W-1:0]  io_hex3_o,
   output logic [W-1:0]  io_hex4_o,
   output logic [W-1:0]  io_hex5_o,
   output logic [W-1:0]  io_hex6_o,
   output logic [W-1:0]  io_hex7_o,
   output logic [W-1:0]  pc_debug_o
);

parameter W = 32;
        single_cycle  dut(
                .clk_i      (clk_i),
                .rst_ni     (rst_ni),
		.io_sw_i    (io_sw_i),

		.io_lcd_o   (io_lcd_o),
		.io_ledg_o  (io_ledg_o),
		.io_ledr_o  (io_ledr_o),
		.io_hex0_o  (io_hex0_o),
		.io_hex1_o  (io_hex1_o),
		.io_hex2_o  (io_hex2_o),
		.io_hex3_o  (io_hex3_o),
		.io_hex4_o  (io_hex4_o),
		.io_hex5_o  (io_hex5_o),
		.io_hex6_o  (io_hex6_o),
		.io_hex7_o  (io_hex7_o),
		.pc_debug_o (pc_debug_o)
        );
endmodule

