
#ifndef BOE_GAME_FILEIO_H
#define BOE_GAME_FILEIO_H

#include <boost/filesystem/path.hpp>
#include "location.h"
#include "simpletypes.h"

namespace fs = boost::filesystem; // TODO: Centralize this alias!

//void load_file();
//void save_file(short mode);
void finish_load_party();
void change_rect_terrain(RECT r,ter_num_t terrain_type,short probability,bool hollow);
void swap_val(unsigned char *val,short a,short b);
void change_val_4 (unsigned char *val,short a,short b,short c,short d);
void change_val (unsigned char *val,short a,short b);
void form_template_terrain() ;
//void load_town(short town_num,short mode,short extra,char *str);
void shift_universe_left();
void shift_universe_right();
void shift_universe_up();
void shift_universe_down();
void position_party(short out_x,short out_y,short pc_pos_x,short pc_pos_y);
void build_outdoors();
void save_outdoor_maps();
void add_outdoor_maps();
void fix_boats();
//void load_outdoors(short to_create_x, short to_create_y, short targ_x, short targ_y, short mode,short extra,char *str);
//	long get_reg_data();
long do_waterfall(long flag);
short init_data(short flag);
void import_template_terrain();
void import_anim_terrain(short mode);
void start_data_dump();
void end_data_dump();
//void oops_error(short error);
//void set_up_ter_pics();
//bool load_scenario();
short onm(char x_sector,char y_sector);
void build_scen_headers();
bool load_scenario_header(fs::path filename/*,short header_entry*/);
//void load_spec_graphics();
//bool check_p (short pword);
//void build_scen_file_name (Str255 file_n);
//short town_s(short flag);
//short out_s(short flag);
//short str_size_1(short flag);
//short str_size_2(short flag);
//short str_size_3(short flag);
//short get_buf_ptr(short flag);
//bool check_p (short pword);

__declspec(deprecated) void init_town();

//void port_talk_nodes();
//void port_town();
//void port_t_d();
//void port_scenario();
//void port_item_list();
//void port_out(outdoor_record_type *out);
//void flip_spec_node(cSpecial *spec);
//void flip_short(short *s);
//void flip_rect(RECT *s);

  void alter_rect(RECT *r);

#endif
