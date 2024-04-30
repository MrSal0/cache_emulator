#include "cache.h"
#include "mainmemory.h"

#define DEFAULT_SIZE 16

DirectMappedCache::DirectMappedCache() {
    this->size = DEFAULT_SIZE;
    this->block_count = size / (pow(2, offset) * word_size);
    this->tag_length = PA_length - offset;

    for (int i = 0; i < block_count; i++){
        vector <string> empty_cache_line = {"0", "", ""};
        cache_cells[i] = empty_cache_line;
    }
}

DirectMappedCache::DirectMappedCache(int size){
    this->size = size;
    this->block_count = size / (pow(2, offset) * word_size);
    this->tag_length = PA_length - offset;

    for (int i = 0; i < block_count; i++){
        vector <string> empty_cache_line = {"0", "", ""};
        cache_cells[i] = empty_cache_line;
    }
}

DirectMappedCache::DirectMappedCache(int size, MainMemory MM):MainMemory(MM){
    this->size = size;
    this->block_count = size / (pow(2, offset) * word_size);
    this->tag_length = PA_length - offset;

    for (int i = 0; i < block_count; i++){
        vector <string> empty_cache_line = {"0", "", ""};
        cache_cells[i] = empty_cache_line;
    }
}
void DirectMappedCache::show_all_console(){
    cout << endl;
    cout << "Size\t\t\t"  << size << endl;
    cout << "Number of lines\t\t" << block_count << endl;
    cout << "Tag length\t\t" << tag_length << endl;
    cout << "Offset\t\t\t" << offset << endl;
    show_cells_console();
}

void DirectMappedCache::show_cells_console(){
    cout << "----------------------------------------------------------------" << endl;
    for (auto a: cache_cells){
        cout << a.first << ":\t";
        for (auto b: a.second){
            cout << b << "\t";
        }
        cout << endl;
    }
}


