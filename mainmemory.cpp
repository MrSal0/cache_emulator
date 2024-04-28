#include <iostream>
#include <random>
#include <cmath>
#include <stdlib.h>
#include "mainmemory.h"


#define DEFAULT_MEMORY_SIZE 16
#define DEFAULT_WORD_SIZE 4
#define DEFAULT_BLOCK_SIZE 1

using namespace std;

MainMemory::MainMemory() {
    this->memory_size = DEFAULT_MEMORY_SIZE;
    this->word_size = DEFAULT_WORD_SIZE;
    this->offset = DEFAULT_BLOCK_SIZE;
    this->block_count = (memory_size / (word_size * (pow(2, offset))));

    this->fill_cells();
}

MainMemory::MainMemory(int memory_size, int word_size, int offset){
    this->memory_size = DEFAULT_MEMORY_SIZE;
    this->word_size = DEFAULT_WORD_SIZE;
    this->offset = DEFAULT_BLOCK_SIZE;

    if (memory_size % 2 != 0){
        cout << "[MainMemory] Invalid memory size" << endl;
    }
    else if (word_size % 2 != 0){
        cout << "[MinaMemory] Invalid word size" << endl;
    }
    else if (memory_size % (int)(word_size * (pow(2, offset))) != 0){
        cout << "[MainMemory] Invalid block size" << endl;
    }
    else {
        this->memory_size = memory_size;
        this->word_size = word_size;
        this->offset = offset;
    }

    this->block_count = (memory_size / (word_size * (pow(2, offset))));
    this->fill_cells();
}

int MainMemory::get_block_count(){
    return this->block_count;
}
int MainMemory::get_words_block(){
    return pow(2, this->offset);
}
unordered_map <string, vector<int>> MainMemory::get_cells(){
    return memory_cells;

}
int MainMemory::get_offset(){
    return this->offset;
}

string MainMemory::DEC_to_HEX(int decimal_number){
    string result_HEX = "";
    char hex_digits[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    if (decimal_number == 0)
        result_HEX = "0";
    while (decimal_number > 0){
        int reminer = decimal_number % 16;
        result_HEX = hex_digits[reminer] + result_HEX;
        decimal_number /= 16;
    }
    return result_HEX;

}

void MainMemory::fill_cells(){

    for (int i = 0; i < block_count; i++){
        string key = DEC_to_HEX(i);
        vector <int> cell_value;
        for (int j = 0; j < pow(2, offset); j++){
            cell_value.push_back(rand() % 10);
        }
        memory_cells.insert({key, cell_value});
        //cout << "key: " << key << endl;
        cell_value.clear();
    }

}

void MainMemory::show_console(){
    cout << endl;
    cout << "Main memory size:\t" << memory_size << " bits"<< endl;
    cout << "Word size:\t\t" << word_size << " bits"<< endl;
    cout << "Bits for offset:\t" << offset << endl;
    cout << "Number of blocks:\t" << block_count << endl;
    cout << "Memory cells:\t\t" << endl;

    for (auto a: memory_cells){
        cout << a.first << ":\t";
        for (auto b: a.second){
            cout << b <<"\t";
        }
        cout << endl;
    }

}