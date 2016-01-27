#include "eecs230.h"

//struct Date {
//    int year;
//    int month;
//    int day;
//    bool isAD;
//    Date(int y, int m, int d, bool AD)
//    {
//        year = y;
//        month = m;
//        day = d;
//        isAD = AD;
//    };
//};
//
//int main()
//try
//{
//    Date today(2016,1,27,true);
//    cout << today.day;
//}
//
//catch (runtime_error& e) {
//    cerr << "Caught in main: " << e.what() << "\n";
//    exit(1);
//}

struct Point2D {
    double x;
    double y;
};

struct LineSegment2D {
    Point2D p1;
    Point2D p2;
};

Point2D point_addition(double x, double y) {
    LineSegment2D v;
    v.x = p1.x + p2.x;
    v.y = p1.y + p2.y;
    return v;
}


int main()
try
{

    cout << point_addition(Point2D(1,2), Point2D(2,3));
}

catch (runtime_error& e) {
    cerr << "Caught in main: " << e.what() << "\n";
    exit(1);
}