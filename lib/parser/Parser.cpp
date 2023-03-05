#include <string>
#include <vector>

#include "Parser.h"

using namespace std;

bool Parser::Parsing(string &str, char delimiter, string &result) {
    int pos = str.find(delimiter);
    if (pos == -1) {
        result = str;
        return false;
    }
    result = str.substr(0, pos);
    str = str.substr(pos + 1);
    return true;
}

vector<string> Parser::ParserString(string str, char delimiter) {
    vector<string> temp;
    string result;

    while (Parsing(str, delimiter, result)) {
        temp.push_back(result);
    }
    temp.push_back(result);

    return temp;
}