#include <array>
#include <unordered_map>
#include <string>

#ifndef MAINMEMORY_H
#define MAINMEMORY_H

using namespace std;

class MainMemory
{
protected:
    int memory_size;
    int word_size;          // number of bits per 1 word
    int block_size;         // number of words in 1 block
    int block_count;        // number of blocks in the memory
    unordered_map <string, vector<int>> memory_cells;


public:
    MainMemory();
    MainMemory(int memory_size, int word_size, int block_size);

    string DEC_to_HEX(int decimal_number);
};

#endif // MAINMEMORY_H
