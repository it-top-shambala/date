#include <iostream>
#include <string>

#include "./lib/date/Date.h"

using namespace std;

int main() {
    Date date1(2023, 3, 5);
    cout << date1.ToString() << endl;
    cout << date1.ToString('M') << endl;
    cout << date1.ToString('S') << endl;

    Date date2("5.3.2023");
    cout << date2.ToString() << endl;
    cout << date2.ToString('M') << endl;
    cout << date2.ToString('S') << endl;

    Date date3("2023.3.5", 'S');
    cout << date3.ToString() << endl;
    cout << date3.ToString('M') << endl;
    cout << date3.ToString('S') << endl;

    Date date4("2023.3.5", 'M');
    cout << date4.ToString() << endl;
    cout << date4.ToString('M') << endl;
    cout << date4.ToString('S') << endl;

    return 0;
}
