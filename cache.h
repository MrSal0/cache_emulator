#include <vector>
#include <map>
#include <cmath>
#include "mainmemory.h"

#ifndef CACHE_H
#define CACHE_H

using namespace std;

class DirectMappedCache: public MainMemory
{
protected:
    int size;                           // Bits for cache
    int line_count;                    // Number of blocks

    int tag_length;
    unordered_map<int, vector<string>> cache_cells;      // index: valid_bit, tag, data

    int total_hits;
    int total_attempts;

public:
    DirectMappedCache();
    DirectMappedCache(int size);
    DirectMappedCache(int size, MainMemory MM);

    int get_size();
    int get_line_count();
    int get_tag_length();
    unordered_map<int, vector<string>> get_cache_cells();
    vector<string> get_line(int line_index);

    string search_MM(string BIN_tag);
    void search_cache(string BIN_instr);

    void show_all_console();
    void show_cells_console();


};

#endif // CACHE_H
