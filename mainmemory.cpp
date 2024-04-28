#include <iostream>
#include "mainmemory.h"


#define DEFAULT_MEMORY_SIZE 16
#define DEFAULT_WORD_SIZE 4
#define DEFAULT_BLOCK_SIZE 1

using namespace std;

MainMemory::MainMemory() {
    this->memory_size = DEFAULT_MEMORY_SIZE;
    this->word_size = DEFAULT_WORD_SIZE;
    this->block_size = DEFAULT_BLOCK_SIZE;
    this->block_count = (memory_size / (word_size * block_size));
}

MainMemory::MainMemory(int memory_size, int word_size, int block_size){
    this->memory_size = DEFAULT_MEMORY_SIZE;
    this->word_size = DEFAULT_WORD_SIZE;
    this->block_size = DEFAULT_BLOCK_SIZE;

    if (memory_size % 2 != 0){
        cout << "[MainMemory] Invalid memory size" << endl;
    }
    else if (word_size % 2 != 0){
        cout << "[MinaMemory] Invalid word size" << endl;
    }
    else if ((word_size * block_size) % memory_size != 0){
        cout << "[MainMemory] Invalid block size" << endl;
    }
    else {
        this->memory_size = memory_size;
        this->word_size = word_size;
        this->block_size = block_size;
    }

    this->block_count = (memory_size / (word_size * block_size));

    for (int i = 0; i < block_count; i++){
        string key = DEC_to_HEX(i);
        memory_cells[key] = i;

    }
}

MainMemory::DEC_to_HEX(int decimal_number){
    string HEX = "";

    while (decimal_number != 0) {

        int rem = 0;
        char ch;

        rem = n % 16;
        if (rem < 10) {
            ch = rem + 48;
        }
        else {
            ch = rem + 55;
        }
        HEX += ch;
        decimal_number /= 16;
    }

    // reversing the ans string to get the final result
    int i = 0, j = HEX.size() - 1;
    while(i <= j)
    {
        swap(HEX[i], HEX[j]);
        i++;
        j--;
    }
    return HEX;
}
