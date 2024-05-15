#include "headers.hpp"
Table::Table(Input iway) {
    switch (iway)
    {
    case Input::FILE: // Reading form file impltmentation
    {
        std::string filename;
        std::cout << "Enter the name of the CSV file: ";
        std::getline(std::cin, filename);
        file_input(filename);
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

void Table::file_input(std::string& filename) {
    csv::CSVReader in(filename);
    for (csv::CSVRow& row: in) { // Input iterator
        std::string record_book_number = row[8];
        records[record_book_number].full_name = row[0];
        records[record_book_number].birth_date.day = std::stoi(row[1]);
        records[record_book_number].birth_date.month = std::stoi(row[2]);
        records[record_book_number].birth_date.year = std::stoi(row[3]);
        records[record_book_number].admission_year = std::stoi(row[4]);
        records[record_book_number].faculty = row[5];
        records[record_book_number].department = row[6];
        records[record_book_number].group = row[7];
        records[record_book_number].record_book_number = row[8];
        records[record_book_number].assignment = record_book_number.substr(record_book_number.length() - 2);
    }
}

void Table::cmd_input() {
    // TODO
}