#include "mainmemory.h"

#ifndef CACHE_H
#define CACHE_H

class Cache: public MainMemory
{
protected:
    int size;
    int line_count;
    int list_instr_size;
    vector <string> list_of_instr;      // L-0x3D, R-0x54, where L - load, record, R - read
public:
    Cache();
    Cache(MainMemory MM);
    Cache(int size, MainMemory MM);
    void set_cache_size(int size);
    void set_list_instr_size(int size);

    int get_list_instr_size();
    int get_cache_size();
    int get_line_count();
    string get_instr(int num_instr);
    vector <string> get_list_instr();

    void generate_list_Binstr();     // B - both: load, record
    void generate_list_Rinstr();
    void generate_list_Linstr();

};

#endif // CACHE_H
