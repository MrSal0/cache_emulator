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
    this->PA_length = log(memory_size)/log(2);
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
    this->PA_length = log(memory_size)/log(2);
    this->fill_cells();
}

int MainMemory::get_size(){
    return this->memory_size;
}
int MainMemory::get_block_count(){
    return this->block_count;
}
int MainMemory::get_words_block(){
    return pow(2, this->offset);
}
unordered_map <string, vector<string>> MainMemory::get_cells(){
    return this->memory_cells;

}
int MainMemory::get_offset(){
    return this->offset;
}
vector <string> MainMemory::get_keys(){
    vector <string> cell_keys;
    for (auto key: memory_cells){
        cell_keys.push_back(key.first);
    }
    return cell_keys;
}

void MainMemory::fill_cells(){

    for (int i = 0; i < block_count; i++){
        string key = MainMemory::DEC_to_HEX(i);
        vector <string> cell_value;
        for (int j = 0; j < pow(2, offset); j++){
            cell_value.push_back(to_string(rand() % 10));
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
    cout << "PA length:\t\t" << PA_length << endl;
    cout << "Memory cells:\t\t" << endl;

    for (auto a: memory_cells){
        cout << a.first << ":\t";
        for (auto b: a.second){
            cout << b <<"\t";
        }
        cout << endl;
    }

}

// Wow. There is no static word here.
// "Golden Rule: The static keyword is only used with the declaration of a static member, inside the class definition, but not with the definition of that static member."
string MainMemory::DEC_to_HEX(int decimal_number){
    string result_HEX = "";
    char HEX_digits[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    if (decimal_number == 0)
        result_HEX = "0";
    while (decimal_number > 0){
        int reminer = decimal_number % 16;
        result_HEX = HEX_digits[reminer] + result_HEX;
        decimal_number /= 16;
    }
    return result_HEX;
}

string MainMemory::HEX_to_BIN(string HEX_number){
    string result_BIN = "";
    map<char, string> BIN_digits = {{'0', "0000"},
                                        {'1', "0001"},
                                        {'2', "0010"},
                                        {'3', "0011"},
                                       {'4', "0100"},
                                       {'5', "0101"},
                                       {'6', "0110"},
                                       {'7', "0111"},
                                       {'8', "1000"},
                                       {'9', "1001"},
                                       {'A', "1010"},
                                       {'B', "1011"},
                                       {'C', "1100"},
                                       {'D', "1101"},
                                       {'E', "1110"},
                                       {'F', "1111"}};

    for (int i = 0; i < HEX_number.length(); i++){
        char temp = HEX_number[i];
        result_BIN = result_BIN + BIN_digits[temp];
    }
    return result_BIN;
}
