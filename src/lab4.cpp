#include "eecs230.h"

struct Date {
    int year;
    int month;
    int day;
    bool isAD;
    Date(int y, int m, int d, bool AD)
    {
        year = y;
        month = m;
        day = d;
        isAD = AD;
    };
};

int main()
try
{
    Date today(2016,1,27,true);
    cout << today.day;
}

catch (runtime_error& e) {
    cerr << "Caught in main: " << e.what() << "\n";
    exit(1);
}
