module converter(
	input  logic [31:0] result,
	output logic [3:0]  digit9, digit8, digit7, digit6, digit5, digit4, digit3, digit2, digit1, digit0						
);

logic [31:0] temp;

always @* begin
    // Initialize the registers
    digit0  = 4'b0;
    digit1  = 4'b0;
    digit2  = 4'b0;
    digit3  = 4'b0;
    digit4  = 4'b0;
    digit5  = 4'b0;
    digit6  = 4'b0;
    digit7  = 4'b0;
    digit8  = 4'b0;
    digit9  = 4'b0;

    // Temporary variable to hold the current value of decimal
    temp = result;
/* verilator lint_off WIDTH */
    // Extract each digit using repeated division and modulo
    digit0 	= temp % 10;
    temp 	= temp / 10;
    digit1 	= temp % 10;
    temp 	= temp / 10;
    digit2 	= temp % 10;
    temp 	= temp / 10;
    digit3 	= temp % 10;
    temp 	= temp / 10;
    digit4 	= temp % 10;
    temp 	= temp / 10;
    digit5 	= temp % 10;
    temp 	= temp / 10;
    digit6 	= temp % 10;
    temp 	= temp / 10;
    digit7 	= temp % 10;
    temp 	= temp / 10;
    digit8 	= temp % 10;
    temp 	= temp / 10;	 
    digit9 	= temp % 10;
end

endmodule
