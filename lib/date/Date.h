#pragma once

#include <string>
#include <vector>

using namespace std;

struct Date {
public:
    int year;
    int month;
    int day;

    Date();
    Date(int year, int month, int day);
    Date(string date);
    Date(string date, char format);
};
