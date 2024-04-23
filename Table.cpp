#include "headers.hpp"
Table::Table(Input iway) {
    switch (iway)
    {
    case Input::FILE: // Reading form file impltmentation
    {
        file_input();
        break;
    }
    case Input::TERMINAL: // reading from command line implementation
    {
        break;
    }
    default:
    {
        break;
    }
    }
}

void Table::file_input(char* path_to_file) {
        std::ofstream datafile;
        datafile.open(path_to_file, std::ios::in);
        if (datafile.is_open()) {
            
        }
        datafile.close();
}

void Table::file_input() {
    file_input("./data/data.csv");
}

void Table::cmd_input() {
    // TODO
}