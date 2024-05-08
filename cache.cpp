#include "cache.h"

#define INSTR_LIST_SIZE 10
#define DEFAULT_CACHE_SIZE 4

using namespace std;

Cache::Cache(): MainMemory(){
    this->size = DEFAULT_CACHE_SIZE;
    this->line_count = size / (word_size * (pow(2, offset)));
    this->list_instr_size = INSTR_LIST_SIZE;
    vector<string> list_of_instr = {};
}

Cache::Cache(MainMemory MM): MainMemory(MM){
    this->size = DEFAULT_CACHE_SIZE;
    this->line_count = size / (word_size * (pow(2, offset)));
    this->list_instr_size = INSTR_LIST_SIZE;
    vector<string> list_of_instr = {};
}

Cache::Cache(int size, MainMemory MM): MainMemory(MM){
    this->size = size;
    this->line_count = size / (word_size * (pow(2, offset)));
    this->list_instr_size = INSTR_LIST_SIZE;
    vector<string> list_of_instr = {};
}
void Cache::set_cache_size(int size){
    this->size = size;
    this->line_count = size / (word_size * (pow(2, offset)));
}

void Cache::set_list_instr_size(int size){
    this->list_instr_size = size;
}

int Cache::get_list_instr_size(){
    return this->list_instr_size;
}

int Cache::get_cache_size(){
    return this->size;
}

int Cache::get_line_count(){
    return this->line_count;
}

string Cache::get_instr(int num_instr){
    cout << "ok" << endl;
    cout << list_of_instr.size();
    cout << list_of_instr[num_instr] << endl;
    return list_of_instr[num_instr];
}

vector <string> Cache::get_list_instr(){
    return list_of_instr;
}

void Cache::generate_list_Binstr(){
    list_of_instr.clear();
    for (int i = 0; i < this->list_instr_size; i++){
        int random_cell_DEC = rand() % MainMemory::get_size() - 1;
        int random_instr = rand() % 2;                              // 0 for read, 1 for load (record)
        string random_cell_HEX = MainMemory::DEC_to_HEX(random_cell_DEC);
        if (random_instr == 0)
            random_cell_HEX = "R-" + random_cell_HEX;
        else
            random_cell_HEX = "L-" + random_cell_HEX;

        list_of_instr.push_back(random_cell_HEX);

    }
}

void Cache::generate_list_Rinstr(){
        list_of_instr.clear();
    for (int i = 0; i < this->list_instr_size; i++){
        int random_cell_DEC = rand() % MainMemory::get_size() - 1;                           // 0 for read, 1 for load (record)
        string random_cell_HEX = MainMemory::DEC_to_HEX(random_cell_DEC);
        random_cell_HEX = "R-" + random_cell_HEX;

        list_of_instr.push_back(random_cell_HEX);

    }
}

void Cache::generate_list_Linstr(){
        list_of_instr.clear();
    for (int i = 0; i < this->list_instr_size; i++){
        int random_cell_DEC = rand() % MainMemory::get_size() - 1;                           // 0 for read, 1 for load (record)
        string random_cell_HEX = MainMemory::DEC_to_HEX(random_cell_DEC);
        random_cell_HEX = "L-" + random_cell_HEX;

        list_of_instr.push_back(random_cell_HEX);

    }
}
