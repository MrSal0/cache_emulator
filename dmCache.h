#include <vector>
#include <map>
#include <cmath>
#include "cache.h"

#ifndef DMCACHE_H
#define DMCACHE_H

using namespace std;

class DirectMappedCache: public Cache
{
protected:
    int tag_length;
    int total_hits;
    int total_attempts;
    unordered_map<int, vector<string>> cache_cells;      // index: valid_bit, tag, data

public:
    DirectMappedCache();
    DirectMappedCache(Cache cache);

    int get_tag_length();
    double get_hit_rate();
    unordered_map<int, vector<string>> get_cache_cells();
    vector<string> get_line(int line_index);
    string search_MM(string BIN_tag);
    int search_cache(string BIN_instr);

    void show_all_console();
    void show_cells_console();


};

#endif // DMCACHE_H
