#include <array>
#include <unordered_map>
#include <unordered_map>
#include <string>
#include <iostream>
#include <cstring>

#ifndef MAINMEMORY_H
#define MAINMEMORY_H

using namespace std;

class MainMemory
{
protected:
    int memory_size;
    int word_size;          // number of bits per 1 word
    int offset;         // number of bits for... words per block (?)
    int block_count;        // number of blocks in the memory

    int PA_length;
    unordered_map <string, vector<int>> memory_cells;


public:
    MainMemory();
    MainMemory(int memory_size, int word_size, int offset);

    int get_block_count();
    int get_words_block();
    int get_offset();
    vector <string> get_keys();
    unordered_map <string, vector<int>> get_cells();

    string DEC_to_HEX(int decimal_number);
    void fill_cells();
    void show_console();
};

#endif // MAINMEMORY_H
