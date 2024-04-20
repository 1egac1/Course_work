#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map> 
#include <cstdlib>
#include "./Table.hpp"

#define DEBUG


class Table {
    std::map<std::string, Person> records;
    std::pair<std::string, int> **subjects_and_marks_list;
    public:
    enum Input {
        TERMINAL,
        FILE
    };
    #ifdef DEBUG
    bool GenSMList = false; 
    #endif
    Table(Input iway) {
        switch (iway)
        {
        case Input::FILE:
        {
            break;
        }
        case Input::TERMINAL:
        {
            break;
        }
        default:
        {
            break;
        }
        }
    }
}


int main (int argc, char **argv){
    std::cout << "Hello world!" << std::endl;
    return 0;
}