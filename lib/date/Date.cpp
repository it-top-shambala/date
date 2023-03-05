#include <string>

#include "Date.h"
#include "../parser/Parser.h"

using namespace std;

Date::Date() {}
Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}
Date::Date(string date) {
    vector<string> temp = Parser::ParserString(date, '.');
    this->day = stoi(temp[0]);
    this->month = stoi(temp[1]);
    this->year = stoi(temp[2]);
}
Date::Date(string date, char format) {
    switch (format) {
        case 'M': //основной формат - dd.mm.yyyy
            vector<string> temp = Parser::ParserString(date, '.');
            this->day = stoi(temp[0]);
            this->month = stoi(temp[1]);
            this->year = stoi(temp[2]);
            break;
        case 'S': //обратный формат - yyyy.mm.dd
            vector<string> temp = Parser::ParserString(date, '.');
            this->day = stoi(temp[2]);
            this->month = stoi(temp[1]);
            this->year = stoi(temp[0]);
            break;
    }
}