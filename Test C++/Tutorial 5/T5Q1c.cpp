#include <iostream>
#include <cmath>
using namespace std;

class Point{
    private:
    double x, y;
    friend class Line;

    public:
    Point(double a = 0, double b = 0);
};

class Line{
    private:
    Point point1;
    Point point2;

    public:
    Line(Point p1, Point p2);
    double length();
};

Point::Point(double a, double b){
    x = a;
    y = b;
}

Line::Line(Point p1, Point p2){
    point1 = p1;
    point2 = p2;
}

double Line::length() {
    double dx = point2.x - point1.x;
    double dy = point2.y - point1.y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(0, 0);
    Point p2(3, 4);

    Line line1(p1, p2);

    cout << "Length of line: " << line1.length() << endl;

    return 0; 
}
                            
