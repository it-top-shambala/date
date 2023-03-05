#include <string>

#include "Date.h"
#include "../parser/Parser.h"

using namespace std;

Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}
Date::Date(string date) {
    InitM(date);
}
Date::Date(string date, char format) {
    switch (format) {
        case 'M': //основной формат - dd.mm.yyyy
            InitM(date);
            break;
        case 'S': //обратный формат - yyyy.mm.dd
            InitS(date);
            break;
    }
}

void Date::InitM(string date) {
    vector<string> temp = Parser::ParserString(date, '.');
    this->day = stoi(temp[0]);
    this->month = stoi(temp[1]);
    this->year = stoi(temp[2]);
}
void Date::InitS(string date) {
    vector<string> temp = Parser::ParserString(date, '.');
    this->day = stoi(temp[2]);
    this->month = stoi(temp[1]);
    this->year = stoi(temp[0]);
}

string Date::ToString(char format) {
    switch (format) {
        case 'M':
            return ToStringM();
        case 'S':
            return ToStringS();
    }
}
string Date::ToString() {
    return ToStringM();
}

string Date::ToStringM() { //основной формат - dd.mm.yyyy
    return to_string(this->day) + "." + to_string(this->month) + "." + to_string(this->year);
}
string Date::ToStringS() { //обратный формат - yyyy.mm.dd
    return to_string(this->year) + "." + to_string(this->month) + "." + to_string(this->day);
}