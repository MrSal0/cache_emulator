#include <iostream>
#include <random>
#include <stdlib.h>
#include <string>
#include "mainmemory.h"


#define DEFAULT_MEMORY_SIZE 16
#define DEFAULT_WORD_SIZE 1
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

MainMemory::MainMemory(int memory_size, int word_size, int offset){             // ????????????????
    // this->memory_size = DEFAULT_MEMORY_SIZE;
    // this->word_size = DEFAULT_WORD_SIZE;
    // this->offset = DEFAULT_BLOCK_SIZE;

    //if (memory_size % 2 != 0){
    //    cout << "[MainMemory] Invalid memory size" << endl;
    //}
    //else if (word_size % 2 != 0){
    //    cout << "[MinaMemory] Invalid word size" << endl;
    //}
    //else if (memory_size % (int)(word_size * (pow(2, offset))) != 0){
    //    cout << "[MainMemory] Invalid block size" << endl;
    //}
    //else {
        this->memory_size = memory_size;
        this->word_size = word_size;
        this->offset = offset;
    //}

    this->block_count = (memory_size / (word_size * (pow(2, offset))));
    this->PA_length = log(memory_size)/log(2);
    this->fill_cells();
}

void MainMemory::set_memory_size(int size){
    this->memory_size = size;

    this->block_count = (memory_size / (word_size * (pow(2, offset))));
    this->PA_length = log(memory_size)/log(2);
    this->fill_cells();
}

void MainMemory::set_word_size(int word_size){
    this->word_size = word_size;

    this->block_count = (memory_size / (word_size * (pow(2, offset))));
    this->fill_cells();
}

void MainMemory::set_offset(int offset){
    this->offset = offset;

    this->block_count = (memory_size / (word_size * (pow(2, offset))));
    this->fill_cells();
}


int MainMemory::get_size(){
    return this->memory_size;
}

int MainMemory::get_word_size(){
    return this->word_size;
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

int MainMemory::get_PA_length(){
    return this->PA_length;
}

void MainMemory::fill_cells(){
    srand(0);

    memory_cells.clear();
    for (int i = 0; i < block_count; i++){
        string key = MainMemory::DEC_to_HEX(i);
        vector <string> cell_value;
        for (int j = 0; j < pow(2, offset); j++){
            string random_value = to_string(rand() % 10);
            cell_value.push_back(random_value);
        }
        memory_cells.insert({key, cell_value});
        cell_value.clear();
    }

}

void MainMemory::show_console(){
    cout << endl;
    cout << "Main memory size:\t" << memory_size << " bits"<< endl;
    cout << "Word size:\t\t" << word_size << " bits"<< endl;
    cout << "Bits for offset:\t" << offset << endl;
    cout << "Words in 1 block:\t" << pow(2, offset) << endl;
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


string MainMemory::BIN_addSpaces(string BIN_number){
    string BIN_result = BIN_number;
    for(int i = BIN_result.length() - 4; i > 0; i -= 4){
        BIN_result.insert(i, " ");
    }
    return BIN_result;
}
// Wow. There is no static word here.
// "Golden Rule: The static keyword is only used with the declaration of a static member, inside the class definition, but not with the definition of that static member."
string MainMemory::DEC_to_HEX(int DEC_number){
    string HEX_result = "";
    char HEX_digits[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    if (DEC_number == 0)
        HEX_result = "0";
    while (DEC_number > 0){
        int reminer = DEC_number % 16;
        HEX_result = HEX_digits[reminer] + HEX_result;
        DEC_number /= 16;
    }
    return "0x" + HEX_result;
}

string MainMemory::DEC_to_BIN(int DEC_number){
    string BIN_result = "";

    if (DEC_number == 0)
        BIN_result = "0000";

    while(DEC_number != 0){
        BIN_result = to_string(DEC_number % 2) + BIN_result;
        DEC_number /= 2;
    }

    while(BIN_result.length() % 4 != 0){
        BIN_result = "0" + BIN_result;
    }

    return BIN_result;
}

string MainMemory::HEX_to_BIN(string HEX_number){
    string BIN_result = "";
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

    for (int i = 2; i < HEX_number.length(); i++){
        char temp = HEX_number[i];
        BIN_result = BIN_result + BIN_digits[temp];
    }

    return BIN_result;
}

int MainMemory::BIN_to_DEC(string BIN_number){
    int DEC_result = 0;

    for (int i = BIN_number.length() - 1, j = 0; i >= 0; i--, j++){                 // ??????????????? >= or >
        if (BIN_number[i] == '0')
            DEC_result += 0 * pow(2, j);
        else {
            DEC_result += 1 * pow(2, j);
        }
    }
    return DEC_result;

}

string MainMemory::BIN_to_HEX(string BIN_number){
    string HEX_result = "";
    map<string, char> HEX_digits = {{"0000", '0'},
                                    {"0001", '1'},
                                    {"0010", '2'},
                                    {"0011", '3'},
                                    {"0100", '4'},
                                    {"0101", '5'},
                                    {"0110", '6'},
                                    {"0111", '7'},
                                    {"1000", '8'},
                                    {"1001", '9'},
                                    {"1010", 'A'},
                                    {"1011", 'B'},
                                    {"1100", 'C'},
                                    {"1101", 'D'},
                                    {"1110", 'E'},
                                    {"1111", 'F'}};

    for (int i = BIN_number.length(); i > 4; i -= 4){                     // ????????????????? >= or >
        HEX_result += HEX_digits[BIN_number.substr(i - 4, 4)];

    }
    return "0x" + HEX_result;
}

//MainMemory& MainMemory::operator=(MainMemory new_mm){
//    this->memory_size = new_mm.memory_size;
//    this->word_size = new_mm.word_size;
    // this->offset = new_mm.offset;
    // this->block_count = new_mm.offset;
    // this->PA_length = new_mm.PA_length;
    // this->memory_cells.clear();
    // memory_cells = new_mm.memory_cells;

// }

