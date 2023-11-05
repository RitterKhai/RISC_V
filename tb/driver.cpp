#define MAX_SIM 40000
/*
void set_random(Vtop *dut, vluint64_t sim_unit) {
        if (sim_unit == 1 ) {
	        dut -> rst_ni = 0; 
	        dut -> wr_en_d  = 0; 
	        dut -> addr_a  = 0; 
                dut -> addr_b = 0;
                dut -> addr_d  = 0;
	        dut -> data_d = 0; 
        }
        if (sim_unit == 2 ) {
                dut -> rst_ni = 1;
                dut -> wr_en_d  = 1;
                dut -> addr_a  = 1;
                dut -> addr_b = 2;
                dut -> addr_d  = 5;
	        dut -> data_d = 5;
        }
        if (sim_unit == 3 ) {
                dut -> rst_ni = 1;
                dut -> wr_en_d  = 1;
                dut -> addr_a  = 1;
                dut -> addr_b = 1;
                dut -> addr_d  = 6;
	        dut -> data_d = 7;
        }
        if (sim_unit == 4 ) {
                dut -> rst_ni = 1;
                dut -> wr_en_d  = 0;
                dut -> addr_a  = 5;
                dut -> addr_b = 6;
                dut -> addr_d  = 1;
	        dut -> data_d = 8;
        } 
}
*/
/*
void set_random(Vtop *dut, vluint64_t sim_unit) { 

	//world
        //input
        if (sim_unit == 1 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 0;
	        dut -> st_en   = 0;
                dut -> st_data = 0;
	        dut -> sel_mod = 0;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 2 ) {
                dut -> rst_ni  = 1;
                dut -> addr    = 4;
                dut -> st_en   = 1;
                dut -> st_data = 4294967295;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 2304;
        }
        if (sim_unit == 3 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 2304;
                dut -> st_en   = 0;
                dut -> st_data = 0;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 2304;
        }
        //mem
        if (sim_unit == 5 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 0;
                dut -> st_en   = 0;
                dut -> st_data = 0;
                dut -> sel_mod = 0;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 6 ) {
                dut -> rst_ni  = 1;
                dut -> addr    = 0;
                dut -> st_en   = 1;
                dut -> st_data = 4294967295;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 7 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 0;
                dut -> st_en   = 0;
                dut -> st_data = 900;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 9 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 0;
                dut -> st_en   = 0;
                dut -> st_data = 0;
                dut -> sel_mod = 0;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 10) {
                dut -> rst_ni  = 1;
                dut -> addr    = 512;
                dut -> st_en   = 1;
                dut -> st_data = 4294967295;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 11) {
                dut -> rst_ni  = 0;
                dut -> addr    = 512;
                dut -> st_en   = 0;
                dut -> st_data = 900;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
        }

        //out
        if (sim_unit == 1 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 0;
                dut -> st_en   = 0;
                dut -> st_data = 0;
                dut -> sel_mod = 0;
                dut -> io_sw_i = 0;
		dut -> unsigned_en_mem = 0;
        }
        if (sim_unit == 2 ) {
                dut -> rst_ni  = 1;
                dut -> addr    = 2048/2;
                dut -> st_en   = 1;
                dut -> st_data = 4294967295;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
		dut -> unsigned_en_mem = 0;
        }
        if (sim_unit == 3 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 2048/2;
                dut -> st_en   = 0;
                dut -> st_data = 900;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
		dut -> unsigned_en_mem = 0;
        }
        if (sim_unit == 4 ) {
                dut -> rst_ni  = 0;
                dut -> addr    = 0;
                dut -> st_en   = 0;
                dut -> st_data = 0;
                dut -> sel_mod = 0;
                dut -> io_sw_i = 0;
		dut -> unsigned_en_mem = 0;
        }
        if (sim_unit == 5) {
                dut -> rst_ni  = 1;
                dut -> addr    = 2064/2;
                dut -> st_en   = 1;
                dut -> st_data = 4294967295;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
		dut -> unsigned_en_mem = 0;
        }
        if (sim_unit == 6) {
                dut -> rst_ni  = 0;
                dut -> addr    = 2064/2;
                dut -> st_en   = 0;
                dut -> st_data = 900;
                dut -> sel_mod = 2;
                dut -> io_sw_i = 0;
		dut -> unsigned_en_mem = 0;
        }
}
*/
int con_hex_01;
int con_hex_23;
int con_hex_45;
int con_hex_67;
int con_gr;
int con_lcd;
char string[100];

void print_welcome () {
   printf("------REPORT FILE-------\n");
}

void print_bye () {
   printf("--------END FILE--------\n");
}

void print_passed () {
   printf("---------PASSED---------\n");
} 

void print_failed () {
   printf("---------FAILED---------\n");
}

void print_test (char *string) {
   printf("CHECK:%s:\n", string);
}

void check_L_S (Vtop *dut) {
   strcpy(string, "SW, SH, SB, LW, LH, LHU, LB, LBU");
   con_hex_01  = (dut->io_hex0_o == 0x45ABCDEF) && (dut->io_hex1_o == 0x000045AB);
   con_hex_23  = (dut->io_hex2_o == 0x0000CDEF) && (dut->io_hex3_o == 0x45ABCDEF);
   con_hex_45  = (dut->io_hex4_o == 0x000000AB) && (dut->io_hex5_o == 0x000000CD);
   con_hex_67  = (dut->io_hex6_o == 0xFFFFCDEF) && (dut->io_hex7_o == 0x0000CDEF);
   con_gr      = (dut->io_ledg_o == 0xFFFFFFAB) && (dut->io_ledr_o == 0x000045AB);
   con_lcd     = (dut->io_lcd_o  == 0x00000045);
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_LUI_AUIPC (Vtop *dut) {
   strcpy(string, "LUI, AUIPC");
   con_hex_01  = (dut->io_hex0_o == 0x008A5000) && (dut->io_hex1_o == 0xB3C08000);
   con_hex_23  = (dut->io_hex2_o == 0x00000138) && (dut->io_hex3_o == 0x00005140);
   con_hex_45  = (dut->io_hex4_o == 0xFFFFC144) && (dut->io_hex5_o == 0x00000000);
   con_hex_67  = 1;
   con_gr      = 1;
   con_lcd     = 1;
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_AND_OR_XOR (Vtop *dut) {
   strcpy(string, "AND, OR, XOR, ANDI, ORI, XORI");
   con_hex_01  = (dut->io_hex0_o == 0x00000084) && (dut->io_hex1_o == 0x00000087);
   con_hex_23  = (dut->io_hex2_o == 0xFFFFFCBF) && (dut->io_hex3_o == 0x00000000);
   con_hex_45  = 1;
   con_hex_67  = 1;
   con_gr      = 1;
   con_lcd     = 1;
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_ADD_SUB (Vtop *dut) {
   strcpy(string, "ADD, SUB, ADDI");
   con_hex_01  = (dut->io_hex0_o == 0x000008DF) && (dut->io_hex1_o == 0x00000962);
   con_hex_23  = (dut->io_hex2_o == 0x00015B8F) && (dut->io_hex3_o == 0x000045AB);
   con_hex_45  = 1;
   con_hex_67  = 1;
   con_gr      = 1;
   con_lcd     = 1;
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_SLL_SRL_SRA (Vtop *dut) {
   strcpy(string, "SLL, SRL, SLA, SLLI, SRLI, SRAI");
   con_hex_01  = (dut->io_hex0_o == 0x00012000) && (dut->io_hex1_o == 0x00000120);
   con_hex_23  = (dut->io_hex2_o == 0xFFC14400) && (dut->io_hex3_o == 0xFFFFFFC1);
   con_hex_45  = (dut->io_hex4_o == 0x00020000) && (dut->io_hex5_o == 0x000015B8);
   con_hex_67  = (dut->io_hex6_o == 0x0000015B) && (dut->io_hex7_o == 0x0FFFFC14);
   con_gr      = 1;
   con_lcd     = (dut->io_lcd_o  == 0xFFFFFC14);
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_SLT_SLTU (Vtop *dut) {
   strcpy(string, "SLT, SLTU, SLI, SLTIU");
   con_hex_01  = (dut->io_hex0_o == 0x00000000) && (dut->io_hex1_o == 0x00000000);
   con_hex_23  = (dut->io_hex2_o == 0x00000001) && (dut->io_hex3_o == 0x00000001);
   con_hex_45  = (dut->io_hex4_o == 0x00000001) && (dut->io_hex5_o == 0x00000001);
   con_hex_67  = (dut->io_hex6_o == 0x00000000) && (dut->io_hex7_o == 0x00000000);
   con_gr      = (dut->io_ledg_o == 0x00000001) && (dut->io_ledr_o == 0x00000001);
   con_lcd     = (dut->io_lcd_o  == 0x00000001);
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_BEQ_BNE (Vtop *dut) {
   strcpy(string, "BEQ, BNE");
   con_hex_01  = (dut->io_hex0_o == 0x00000014) && (dut->io_hex1_o == 0x0000002D);
   con_hex_23  = 1;
   con_hex_45  = 1;
   con_hex_67  = 1;
   con_gr      = 1;
   con_lcd     = 1;
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_BLT_BGE (Vtop *dut) {
   strcpy(string, "BLT, BGE, BLTU, BGEU");
   con_hex_01  = (dut->io_hex0_o == 0x00000024) && (dut->io_hex1_o == 0x00000084);
   con_hex_23  = (dut->io_hex2_o == 0x00000024) && (dut->io_hex3_o == 0x00000036);
   con_hex_45  = 1;
   con_hex_67  = 1;
   con_gr      = 1;
   con_lcd     = 1;
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void check_J (Vtop *dut) {
   strcpy(string, "JAL, JALR");
   con_hex_01  = (dut->io_hex0_o == 0x000003CC) && (dut->io_hex1_o == 0x000003E0);
   con_hex_23  = (dut->io_hex2_o == 0x00001100) && (dut->io_hex3_o == 0x00000019);
   con_hex_45  = 1;
   con_hex_67  = 1;
   con_gr      = 1;
   con_lcd     = 1;
   print_test(string);
   if (con_hex_01 && con_hex_23 && con_hex_45 && con_hex_67 && con_gr && con_lcd) print_passed();
   else print_failed();
}

void set_random(Vtop *dut, vluint64_t sim_unit) { 
        //input
        if (sim_unit == 1 ) {
		print_welcome();
                dut -> rst_ni  = 0;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 2 ) {
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 8 ) {
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 1168887279;
        }	
        if (sim_unit == 80) {
		check_L_S(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 98) {
                check_LUI_AUIPC(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 111) {
                check_AND_OR_XOR(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 130) {
                check_ADD_SUB(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 163) {
                check_SLT_SLTU(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 190) {
                check_SLL_SRL_SRA(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 235) {
                check_BEQ_BNE(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
        if (sim_unit == 380) {
                check_BLT_BGE(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }	
        if (sim_unit == 420) {
                check_J(dut);
                dut -> rst_ni  = 1;
                dut -> io_sw_i = 0;
        }
}

