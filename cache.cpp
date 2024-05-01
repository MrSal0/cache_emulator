#include "cache.h"
#include "mainmemory.h"

#define DEFAULT_SIZE 16

DirectMappedCache::DirectMappedCache() {
    this->size = DEFAULT_SIZE;
    this->line_count = size / (pow(2, offset) * word_size);
    this->tag_length = PA_length - offset;
    this->total_attempts = 0;
    this->total_hits = 0;

    for (int i = 0; i < line_count; i++){
        vector <string> empty_cache_line = {"0", "-", "-"}; // Valid bit, tag, data
        cache_cells[i] = empty_cache_line;
    }
}

DirectMappedCache::DirectMappedCache(int size){
    this->size = size;
    this->line_count = size / (pow(2, offset) * word_size);
    this->tag_length = PA_length - offset;
    this->total_attempts = 0;
    this->total_hits = 0;


    for (int i = 0; i < line_count; i++){
        vector <string> empty_cache_line = {"0", "-", "-"};
        cache_cells[i] = empty_cache_line;
    }
}

DirectMappedCache::DirectMappedCache(int size, MainMemory MM):MainMemory(MM){
    this->size = size;
    this->line_count = size / (pow(2, offset) * word_size);
    this->tag_length = PA_length - offset;
    this->total_attempts = 0;
    this->total_hits = 0;

    for (int i = 0; i < line_count; i++){
        vector <string> empty_cache_line = {"0", "-", "-"};
        cache_cells[i] = empty_cache_line;
    }
}

int DirectMappedCache::get_size(){
    return this->size;
}

int DirectMappedCache::get_line_count(){
    return this->line_count;
}

int DirectMappedCache::get_tag_length(){
    return this->tag_length;
}

double DirectMappedCache::get_hit_rate(){
    return double(total_hits / total_attempts);
}

unordered_map<int, vector<string>> DirectMappedCache::get_cache_cells(){
    return this->cache_cells;
}

vector<string> DirectMappedCache::get_line(int line_index){
    return this->cache_cells[line_index];
}

int DirectMappedCache::search_cache(string BIN_instr){

    // Breaking down the BIN instruction to its components: index, tag, data
    string index_BIN = BIN_instr.substr(tag_length - (log(line_count) / log(2)), (log(line_count) / log(2)));
    string offset_BIN = BIN_instr.substr(BIN_instr.length() - offset);
    string tag_BIN = BIN_instr.substr(0, tag_length);
    int index_DEC = MainMemory::BIN_to_DEC(index_BIN);

    cout << "BIN\t\t\tindex\t\ttag\t\toffset" << endl
        << BIN_instr << "\t\t"
         << index_BIN << "(" << index_DEC << ")\t\t"
         << tag_BIN << "\t"
         << offset_BIN << endl;

    // Getting cache line by index
    vector <string> cache_line = this->cache_cells[index_DEC];

    // Comparing valid bit and tag
    if (cache_line[0] == "0" || (cache_line[0] == "1" && cache_line[1] != tag_BIN)){
        cout << "Cache miss! " << endl
             << "[Function][search_MM]" << endl;
        string block_data = search_MM(tag_BIN);                     // Searching by tag... or whole isntrustion
        cache_cells[index_DEC] = {"1", tag_BIN, block_data};
    }
    else if (cache_line[0] == "1" && cache_line[1] == tag_BIN){
        cout << "Cache hit!" << endl;
        total_hits++;
    }

    total_attempts++;
    return index_DEC;
}


string DirectMappedCache::search_MM(string BIN_tag){
    string block_data = "INVALID";
    string HEX_tag = MainMemory::BIN_to_HEX(BIN_tag);

    vector <string> memory_keys = get_keys();
    //cout << "Cheking in the MM... " << "Already cheched: ";
    for (int i = 0; i < block_count && block_data == "INVALID"; i++){
        //cout << memory_keys[i] << " ";
        if (HEX_tag == memory_keys[i]){
            //cout << endl << "Found " << HEX_tag << endl;
            block_data = "BLOCK " + HEX_tag + ":";
            for (int i = 0; i < pow(2, offset) && i < 3; i++){
                block_data += " " + memory_cells[HEX_tag][i];
            }
            if (pow(2, offset) > 3)
                block_data += "...";
        }
    }

    return block_data;

}


void DirectMappedCache::show_all_console(){
    cout << endl;
    cout << "Size:\t\t\t"  << size << endl;
    cout << "Number of lines:\t" << line_count << endl;
    cout << "Tag length:\t\t" << tag_length << endl;
    cout << "Offset:\t\t\t" << offset << endl;
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


