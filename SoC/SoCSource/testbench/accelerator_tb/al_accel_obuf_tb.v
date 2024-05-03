`timescale 1 ns / 1 ps

`define TIME_TO_REPEAT 1

module al_accel_obuf_tb;
    // Ctrl Signal Setting
    reg clk;
	always #5 clk = (clk === 1'b0); 

    reg resetn;
    initial begin
        resetn = 1'b0;
        #50 
        resetn = 1'b1;
    end

    reg enb;
    initial begin   
        // enb = 1'b0;
        // #111;
        // enb = 1'b1;
        // #30;
        // enb = 1'b0;
        // #20;
        enb = 1'b1;
    end 

    // Input Signal Setting
    reg [31: 0] obuf_di;
    reg         obuf_ld_wrn;
    initial begin
        #50 
        obuf_di     = 32'h5876063e;
        obuf_ld_wrn = 1'd1;
        #20
        obuf_ld_wrn = 1'd0;
        #20
        obuf_di     = 32'haabb7788;
        obuf_ld_wrn = 1'd1;
        #20
        obuf_ld_wrn = 1'd0;
    end

    wire [31:0] obuf_do;

    al_accel_obuf uut (
        .obuf_di    (obuf_di),
        .obuf_init  (32'd0),
        .obuf_do    (obuf_do),
        .obuf_ld_wrn(obuf_ld_wrn),

        .enb    (enb),
        .clk    (clk),
        .resetn (resetn)
    );

    // Debug Info
    initial begin
        $dumpfile("out_log/al_accel_obuf_tb.vcd");
        $dumpvars(0, al_accel_obuf_tb);

        repeat (`TIME_TO_REPEAT) begin
			repeat (1000) @(posedge clk);
		end
		$finish;
    end

    // always @(ifm_cor_x, ifm_cor_y) begin
	// 	#1 $display("x = %d, y = %d", ifm_cor_x, ifm_cor_y);
	// end

endmodule