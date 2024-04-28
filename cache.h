#include <vector>
#include "MainMemory.h"

#ifndef CACHE_H
#define CACHE_H

using namespace std;

class Cache: public MainMemory
{
    int size;
    int accosiativity;
    double hit_rate;
    double miss_rate;
    //vector <int, vector<int>> cache_cells;



public:
    Cache();

};

#endif // CACHE_H
