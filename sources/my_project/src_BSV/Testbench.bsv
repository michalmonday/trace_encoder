package Testbench;

import MyModule :: *;

module mkTestbench (Empty);
    MyModule_IFC m <- mkMyModule;
    Reg #(Bool) init <- mkReg(False);
    //Ehr #(2, Bool) ehr <- mkEhr(False);
    Reg #(Bit#(8)) creg[4] <- mkCReg(4, 0);
    // Reg #(Bit#(1)) normal_reg <- mkReg(0);
    Reg #(Bit#(8)) c <- mkReg(0);

    rule rl_dosomething;
        let a = m.get_a;
        let counter <- m.inc_counter(1);
        $display("counter = %d", counter);
        // $display("a = %d, counter = %d, creg[3] = %d", a, counter, creg[3]);
        // c <= counter;
        if (counter > 10) begin
            $finish;
        end
    endrule

    rule rl_print_creg1;
        $display("creg[1] = %d", creg[1]);
    endrule

    rule rl_print_creg3;
        $display("creg[3] = %d", creg[3]);
    endrule

    rule rl_do_once if (!init);
        init <= True;
        $display("init");
    endrule

    rule rl_increase_c;
        c <= c + 1;
    endrule

    rule rl_c2 if (c == 4) ;
        $display("c2 c == 4");
        creg[2] <= 2;
    endrule

    rule rl_c0 if (c == 4) ;
        $display("c3 c == 4");
        creg[0] <= 1;
    endrule
endmodule

endpackage