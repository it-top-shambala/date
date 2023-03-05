#pragma once

#include <string>
#include <vector>

using namespace std;

struct Date {
public:
    int year;
    int month;
    int day;

    Date(int year, int month, int day);
    Date(string date);
    Date(string date, char format);

    string ToString(char format);
    string ToString();

private:
    void InitM(string date); //основной формат - dd.mm.yyyy
    void InitS(string date); //обратный формат - yyyy.mm.dd

    string ToStringM();
    string ToStringS();
};
