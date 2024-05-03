#include "Vultra96v2_wrapper.h"
#include <verilated_vcd_c.h>

#define MAX_TIME 500000

int main(int argc, char **argv, char **env)
{
	printf("TESTBENCH.cc: Built with %s %s.\n", Verilated::productName(), Verilated::productVersion());
	printf("TESTBENCH.cc: Recommended: Verilator 4.0 or later.\n");

	Verilated::commandArgs(argc, argv);
	Vultra96v2_wrapper* top = new Vultra96v2_wrapper;

	// Tracing (vcd)
	VerilatedVcdC* tfp = NULL;
	const char* flag_vcd = Verilated::commandArgsPlusMatch("vcd");
	if (flag_vcd && 0 == strcmp(flag_vcd, "+vcd")) {
		printf("TESTBENCH.cc: Here with flag_vcd!!\n");
		Verilated::traceEverOn(true);
		tfp = new VerilatedVcdC;
		top->trace (tfp, 99);
		tfp->open("out_log/ultra96v2_tb.vcd");
	}

	top->clk = 0;
	int t = 0;
	while (t < MAX_TIME) {
		top->clk = !top->clk;
		top->eval();
		if (tfp) tfp->dump (t);
		t += 5;
	}
	if (tfp) tfp->close();
	delete top;
	exit(0);
}
