/*
 * Generated by Bluespec Compiler, version 2022.01 (build 066c7a8)
 * 
 * On Sun Oct 16 08:10:54 PDT 2022
 * 
 */
#include "bluesim_primitives.h"
#include "mkTestbench.h"


/* String declarations */
static std::string const __str_literal_5("c2 c == 4", 9u);
static std::string const __str_literal_6("c3 c == 4", 9u);
static std::string const __str_literal_1("counter = %d", 12u);
static std::string const __str_literal_2("creg[1] = %d", 12u);
static std::string const __str_literal_3("creg[3] = %d", 12u);
static std::string const __str_literal_4("init", 4u);


/* Constructor */
MOD_mkTestbench::MOD_mkTestbench(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_c(simHdl, "c", this, 8u, (tUInt8)0u, (tUInt8)0u),
    INST_creg(simHdl, "creg", this, 8u, (tUInt8)0u, (tUInt8)0u),
    INST_init(simHdl, "init", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_m(simHdl, "m", this),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 26u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkTestbench::init_symbols_0()
{
  init_symbol(&symbols[0u], "CAN_FIRE_RL_rl_c0", SYM_DEF, &DEF_CAN_FIRE_RL_rl_c0, 1u);
  init_symbol(&symbols[1u], "CAN_FIRE_RL_rl_c2", SYM_DEF, &DEF_CAN_FIRE_RL_rl_c2, 1u);
  init_symbol(&symbols[2u], "CAN_FIRE_RL_rl_do_once", SYM_DEF, &DEF_CAN_FIRE_RL_rl_do_once, 1u);
  init_symbol(&symbols[3u],
	      "CAN_FIRE_RL_rl_dosomething",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_rl_dosomething,
	      1u);
  init_symbol(&symbols[4u], "CAN_FIRE_RL_rl_increase_c", SYM_DEF, &DEF_CAN_FIRE_RL_rl_increase_c, 1u);
  init_symbol(&symbols[5u],
	      "CAN_FIRE_RL_rl_print_creg1",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_rl_print_creg1,
	      1u);
  init_symbol(&symbols[6u],
	      "CAN_FIRE_RL_rl_print_creg3",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_rl_print_creg3,
	      1u);
  init_symbol(&symbols[7u], "c", SYM_MODULE, &INST_c);
  init_symbol(&symbols[8u], "creg", SYM_MODULE, &INST_creg);
  init_symbol(&symbols[9u], "init", SYM_MODULE, &INST_init);
  init_symbol(&symbols[10u], "m", SYM_MODULE, &INST_m);
  init_symbol(&symbols[11u], "RL_rl_c0", SYM_RULE);
  init_symbol(&symbols[12u], "RL_rl_c2", SYM_RULE);
  init_symbol(&symbols[13u], "RL_rl_do_once", SYM_RULE);
  init_symbol(&symbols[14u], "RL_rl_dosomething", SYM_RULE);
  init_symbol(&symbols[15u], "RL_rl_increase_c", SYM_RULE);
  init_symbol(&symbols[16u], "RL_rl_print_creg1", SYM_RULE);
  init_symbol(&symbols[17u], "RL_rl_print_creg3", SYM_RULE);
  init_symbol(&symbols[18u], "WILL_FIRE_RL_rl_c0", SYM_DEF, &DEF_WILL_FIRE_RL_rl_c0, 1u);
  init_symbol(&symbols[19u], "WILL_FIRE_RL_rl_c2", SYM_DEF, &DEF_WILL_FIRE_RL_rl_c2, 1u);
  init_symbol(&symbols[20u], "WILL_FIRE_RL_rl_do_once", SYM_DEF, &DEF_WILL_FIRE_RL_rl_do_once, 1u);
  init_symbol(&symbols[21u],
	      "WILL_FIRE_RL_rl_dosomething",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_rl_dosomething,
	      1u);
  init_symbol(&symbols[22u],
	      "WILL_FIRE_RL_rl_increase_c",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_rl_increase_c,
	      1u);
  init_symbol(&symbols[23u],
	      "WILL_FIRE_RL_rl_print_creg1",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_rl_print_creg1,
	      1u);
  init_symbol(&symbols[24u],
	      "WILL_FIRE_RL_rl_print_creg3",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_rl_print_creg3,
	      1u);
  init_symbol(&symbols[25u], "x__h566", SYM_DEF, &DEF_x__h566, 8u);
}


/* Rule actions */

void MOD_mkTestbench::RL_rl_dosomething()
{
  tUInt8 DEF_NOT_m_inc_counter_ULE_10___d3;
  tUInt8 DEF_v__h348;
  tUInt8 DEF_AVMeth_m_inc_counter;
  DEF_AVMeth_m_inc_counter = INST_m.METH_inc_counter((tUInt8)1u);
  DEF_v__h348 = DEF_AVMeth_m_inc_counter;
  DEF_NOT_m_inc_counter_ULE_10___d3 = !(DEF_v__h348 <= (tUInt8)10u);
  if (!(PORT_RST_N == (tUInt8)0u))
  {
    dollar_display(sim_hdl, this, "s,8", &__str_literal_1, DEF_v__h348);
    if (DEF_NOT_m_inc_counter_ULE_10___d3)
      dollar_finish(sim_hdl, "32", 1u);
  }
}

void MOD_mkTestbench::RL_rl_print_creg1()
{
  tUInt8 DEF_x_port1__read__h432;
  DEF_x_port1__read__h432 = INST_creg.METH_port1__read();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s,8", &__str_literal_2, DEF_x_port1__read__h432);
}

void MOD_mkTestbench::RL_rl_print_creg3()
{
  tUInt8 DEF_x_port3__read__h452;
  DEF_x_port3__read__h452 = INST_creg.METH_port3__read();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s,8", &__str_literal_3, DEF_x_port3__read__h452);
}

void MOD_mkTestbench::RL_rl_do_once()
{
  INST_init.METH_write((tUInt8)1u);
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_4);
}

void MOD_mkTestbench::RL_rl_increase_c()
{
  tUInt8 DEF_x__h501;
  DEF_x__h566 = INST_c.METH_read();
  DEF_x__h501 = (tUInt8)255u & (DEF_x__h566 + (tUInt8)1u);
  INST_c.METH_write(DEF_x__h501);
}

void MOD_mkTestbench::RL_rl_c2()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_5);
  INST_creg.METH_port2__write((tUInt8)2u);
}

void MOD_mkTestbench::RL_rl_c0()
{
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s", &__str_literal_6);
  INST_creg.METH_port0__write((tUInt8)1u);
}


/* Methods */


/* Reset routines */

void MOD_mkTestbench::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_m.reset_RST_N(ARG_rst_in);
  INST_init.reset_RST(ARG_rst_in);
  INST_creg.reset_RST(ARG_rst_in);
  INST_c.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkTestbench::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkTestbench::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_c.dump_state(indent + 2u);
  INST_creg.dump_state(indent + 2u);
  INST_init.dump_state(indent + 2u);
  INST_m.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkTestbench::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 19u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_rl_c0", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_rl_c2", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_rl_do_once", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_rl_dosomething", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_rl_increase_c", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_rl_print_creg1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_rl_print_creg3", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_rl_c0", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_rl_c2", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_rl_do_once", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_rl_dosomething", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_rl_increase_c", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_rl_print_creg1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_rl_print_creg3", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h566", 8u);
  num = INST_c.dump_VCD_defs(num);
  num = INST_creg.dump_VCD_defs(num);
  num = INST_init.dump_VCD_defs(num);
  if (levels != 1u)
  {
    unsigned int l = levels == 0u ? 0u : levels - 1u;
    num = INST_m.dump_VCD_defs(l);
  }
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkTestbench::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkTestbench &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
  if (levels != 1u)
    vcd_submodules(dt, levels - 1u, backing);
}

void MOD_mkTestbench::vcd_defs(tVCDDumpType dt, MOD_mkTestbench &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 8u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_rl_c0) != DEF_CAN_FIRE_RL_rl_c0)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_rl_c0, 1u);
	backing.DEF_CAN_FIRE_RL_rl_c0 = DEF_CAN_FIRE_RL_rl_c0;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_rl_c2) != DEF_CAN_FIRE_RL_rl_c2)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_rl_c2, 1u);
	backing.DEF_CAN_FIRE_RL_rl_c2 = DEF_CAN_FIRE_RL_rl_c2;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_rl_do_once) != DEF_CAN_FIRE_RL_rl_do_once)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_rl_do_once, 1u);
	backing.DEF_CAN_FIRE_RL_rl_do_once = DEF_CAN_FIRE_RL_rl_do_once;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_rl_dosomething) != DEF_CAN_FIRE_RL_rl_dosomething)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_rl_dosomething, 1u);
	backing.DEF_CAN_FIRE_RL_rl_dosomething = DEF_CAN_FIRE_RL_rl_dosomething;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_rl_increase_c) != DEF_CAN_FIRE_RL_rl_increase_c)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_rl_increase_c, 1u);
	backing.DEF_CAN_FIRE_RL_rl_increase_c = DEF_CAN_FIRE_RL_rl_increase_c;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_rl_print_creg1) != DEF_CAN_FIRE_RL_rl_print_creg1)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_rl_print_creg1, 1u);
	backing.DEF_CAN_FIRE_RL_rl_print_creg1 = DEF_CAN_FIRE_RL_rl_print_creg1;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_rl_print_creg3) != DEF_CAN_FIRE_RL_rl_print_creg3)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_rl_print_creg3, 1u);
	backing.DEF_CAN_FIRE_RL_rl_print_creg3 = DEF_CAN_FIRE_RL_rl_print_creg3;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_rl_c0) != DEF_WILL_FIRE_RL_rl_c0)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_rl_c0, 1u);
	backing.DEF_WILL_FIRE_RL_rl_c0 = DEF_WILL_FIRE_RL_rl_c0;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_rl_c2) != DEF_WILL_FIRE_RL_rl_c2)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_rl_c2, 1u);
	backing.DEF_WILL_FIRE_RL_rl_c2 = DEF_WILL_FIRE_RL_rl_c2;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_rl_do_once) != DEF_WILL_FIRE_RL_rl_do_once)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_rl_do_once, 1u);
	backing.DEF_WILL_FIRE_RL_rl_do_once = DEF_WILL_FIRE_RL_rl_do_once;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_rl_dosomething) != DEF_WILL_FIRE_RL_rl_dosomething)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_rl_dosomething, 1u);
	backing.DEF_WILL_FIRE_RL_rl_dosomething = DEF_WILL_FIRE_RL_rl_dosomething;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_rl_increase_c) != DEF_WILL_FIRE_RL_rl_increase_c)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_rl_increase_c, 1u);
	backing.DEF_WILL_FIRE_RL_rl_increase_c = DEF_WILL_FIRE_RL_rl_increase_c;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_rl_print_creg1) != DEF_WILL_FIRE_RL_rl_print_creg1)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_rl_print_creg1, 1u);
	backing.DEF_WILL_FIRE_RL_rl_print_creg1 = DEF_WILL_FIRE_RL_rl_print_creg1;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_rl_print_creg3) != DEF_WILL_FIRE_RL_rl_print_creg3)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_rl_print_creg3, 1u);
	backing.DEF_WILL_FIRE_RL_rl_print_creg3 = DEF_WILL_FIRE_RL_rl_print_creg3;
      }
      ++num;
      if ((backing.DEF_x__h566) != DEF_x__h566)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h566, 8u);
	backing.DEF_x__h566 = DEF_x__h566;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_rl_c0, 1u);
      backing.DEF_CAN_FIRE_RL_rl_c0 = DEF_CAN_FIRE_RL_rl_c0;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_rl_c2, 1u);
      backing.DEF_CAN_FIRE_RL_rl_c2 = DEF_CAN_FIRE_RL_rl_c2;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_rl_do_once, 1u);
      backing.DEF_CAN_FIRE_RL_rl_do_once = DEF_CAN_FIRE_RL_rl_do_once;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_rl_dosomething, 1u);
      backing.DEF_CAN_FIRE_RL_rl_dosomething = DEF_CAN_FIRE_RL_rl_dosomething;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_rl_increase_c, 1u);
      backing.DEF_CAN_FIRE_RL_rl_increase_c = DEF_CAN_FIRE_RL_rl_increase_c;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_rl_print_creg1, 1u);
      backing.DEF_CAN_FIRE_RL_rl_print_creg1 = DEF_CAN_FIRE_RL_rl_print_creg1;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_rl_print_creg3, 1u);
      backing.DEF_CAN_FIRE_RL_rl_print_creg3 = DEF_CAN_FIRE_RL_rl_print_creg3;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_rl_c0, 1u);
      backing.DEF_WILL_FIRE_RL_rl_c0 = DEF_WILL_FIRE_RL_rl_c0;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_rl_c2, 1u);
      backing.DEF_WILL_FIRE_RL_rl_c2 = DEF_WILL_FIRE_RL_rl_c2;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_rl_do_once, 1u);
      backing.DEF_WILL_FIRE_RL_rl_do_once = DEF_WILL_FIRE_RL_rl_do_once;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_rl_dosomething, 1u);
      backing.DEF_WILL_FIRE_RL_rl_dosomething = DEF_WILL_FIRE_RL_rl_dosomething;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_rl_increase_c, 1u);
      backing.DEF_WILL_FIRE_RL_rl_increase_c = DEF_WILL_FIRE_RL_rl_increase_c;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_rl_print_creg1, 1u);
      backing.DEF_WILL_FIRE_RL_rl_print_creg1 = DEF_WILL_FIRE_RL_rl_print_creg1;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_rl_print_creg3, 1u);
      backing.DEF_WILL_FIRE_RL_rl_print_creg3 = DEF_WILL_FIRE_RL_rl_print_creg3;
      vcd_write_val(sim_hdl, num++, DEF_x__h566, 8u);
      backing.DEF_x__h566 = DEF_x__h566;
    }
}

void MOD_mkTestbench::vcd_prims(tVCDDumpType dt, MOD_mkTestbench &backing)
{
  INST_c.dump_VCD(dt, backing.INST_c);
  INST_creg.dump_VCD(dt, backing.INST_creg);
  INST_init.dump_VCD(dt, backing.INST_init);
}

void MOD_mkTestbench::vcd_submodules(tVCDDumpType dt, unsigned int levels, MOD_mkTestbench &backing)
{
  INST_m.dump_VCD(dt, levels, backing.INST_m);
}
