#include "headers.hpp"

int main (int argc, char **argv){
    SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
    std::cout << "Система поиска студента в базе данных" << std::endl;
    std::cout << "Ввод базы данных" << std::endl;
    Table table(Table::Input::FILE);
}