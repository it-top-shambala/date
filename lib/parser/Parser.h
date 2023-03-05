#pragma once

#include <string>
#include <vector>

using namespace std;

struct Parser {
private:
    static bool Parsing(string& str, char delimiter, string& result);

public:
    static vector<string> ParserString(string str, char delimiter);
};