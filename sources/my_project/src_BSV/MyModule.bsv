package MyModule;

// interface Test_IFC;
//     method Bool test;
//     method Bool test2;
// endinterface

interface MyModule_IFC;
    method Bit#(8) get_a;
    method ActionValue#(Bit#(8)) inc_counter(Bit#(8) x);
    //interface Test_IFC test;
endinterface

(* synthesize *)
module mkMyModule(MyModule_IFC);
    Reg #(Bit#(8)) a <- mkReg(77);
    Reg #(Bit#(8)) counter <- mkReg(0);

    method Bit#(8) get_a;
        return a;
    endmethod

    method ActionValue#(Bit#(8)) inc_counter(Bit#(8) x);
        counter <= counter + x;
        return counter;
    endmethod
endmodule

endpackage