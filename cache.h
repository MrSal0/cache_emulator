#include <vector>
#include <map>
#include <cmath>
#include "mainmemory.h"

#ifndef CACHE_H
#define CACHE_H

using namespace std;

class DirectMappedCache: public MainMemory
{
    int size;                           // Bits for cache
    int block_count;                    // Number of blocks

    int tag_length;                     //
    map<int, vector<string>> cache_cells;      // index: valid_bit, tag, memory_data

    double hit_rate;
    double miss_rate;

public:
    DirectMappedCache();
    DirectMappedCache(int size);
    DirectMappedCache(int size, MainMemory MM);


    void show_all_console();
    void show_cells_console();


};

#endif // CACHE_H
