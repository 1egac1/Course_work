#ifndef TABLE_HPP
#define TABLE_HPP
#define DEBUG

#include "headers.hpp"

/*
 * Структура для удобного хранения даты
 */
struct Date {
    uint16_t day;
    uint16_t month;
    uint16_t year;
};

/*
 * Строка для хранения данных об ученике
 * Оценки хранятся в массиве типа std::pair<std::string, uint_8>
 */
class Person {
    std::string full_name; // Ф.И.О. студента
    Date birth_date; // дата рождения
    uint16_t admission_year; // год поступления в институт
    std::string faculty; // факультет (институт)
    std::string department; // кафедра
    std::string group; // группа
    std::string record_book_number; // номер зачетной книжки
    std::pair<std::string, uint8_t> *subjects_and_marks; // названия предметов и оценки по каждому предмету в каждой сессии
    std::string assignment; // конкретное задание, вариант которого определяется 2-мя последними цифрами зачетной книжки (шифр)
};

/*
 * Класс для хранения таблицы
 */
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
    Table(Input);
};

#endif