#ifndef TABLE_HPP
#define TABLE_HPP
#define DEBUG

#include <string>
#include <utility>

struct Date {
    int day;
    int month;
    int year;
};

class Person {
    std::string full_name; // Ф.И.О. студента
    Date birth_date; // дата рождения
    int admission_year; // год поступления в институт
    std::string faculty; // факультет (институт)
    std::string department; // кафедра
    std::string group; // группа
    std::string record_book_number; // номер зачетной книжки
    std::pair<std::string, int> *subjects_and_marks; // названия предметов и оценки по каждому предмету в каждой сессии
    std::string assignment; // конкретное задание, вариант которого определяется 2-мя последними цифрами зачетной книжки (шифр)
};




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
    Table(Input);
    #endif
};

#endif