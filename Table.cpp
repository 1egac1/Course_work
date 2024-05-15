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

void Table::file_input(char path_to_datafile[], char path_to_marksfile[]) {
        // Opening files
        std::ifstream datafile, marksfile;
        datafile.open(path_to_datafile, std::ios::in);
        marksfile.open(path_to_marksfile, std::ios::in);

        if (datafile.is_open() and marksfile.is_open()) {
            boost::char_separator<char> separator(",");
            while(!datafile.eof()) {
                std::string line;
                std::getline(datafile, line);
                boost::tokenizer<boost::char_separator<char>> tok(line, separator);
            }
        }
        datafile.close();
}

void Table::file_input() {
    file_input("./data/data.csv", "./data/data_marks.csv");
}

void Table::cmd_input() {
    // TODO
}