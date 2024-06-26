#include <array>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <iostream>
#include <cstring>
#include <cmath>

#ifndef MAINMEMORY_H
#define MAINMEMORY_H

using namespace std;

class MainMemory
{
protected:
    int memory_size;
    int word_size;          // number of bits per 1 word
    int offset;             // number of bits for... words per block (?)
    int block_count;        // number of blocks in the memory

    int PA_length;
    unordered_map <string, vector<string>> memory_cells;        // HEX, [word1, word2, ... word N]


public:
    MainMemory();
    MainMemory(int memory_size, int word_size, int offset);

    void set_memory_size(int size);
    void set_word_size(int word_size);
    void set_offset(int offset);

    int get_size();
    int get_word_size();
    int get_block_count();
    int get_words_block();
    unordered_map <string, vector<string>> get_cells();
    int get_offset();
    vector <string> get_keys();
    int get_PA_length();

    void fill_cells();
    void show_console();

    static string BIN_addSpaces(string BIN_number);
    static string DEC_to_HEX(int DEC_number);
    static string DEC_to_BIN(int DEC_number);
    static string HEX_to_BIN(string HEX_number);
    static int BIN_to_DEC(string BIN_number);
    static string BIN_to_HEX(string BIN_number);

    //MainMemory& operator=(MainMemory new_MM);

};

#endif // MAINMEMORY_H
