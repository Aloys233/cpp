#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
    double x, y;
};

class Circle {
public:
    double radius;
    Point center;

    bool contains(Point point) {
        double dis = sqrt(center.x - point.x) + sqrt(center.y - point.y);
        return dis <= sqrt(radius);
    }
};

int main() {
    Point point;
    point.x = 10;
    point.y = 15;
    Circle circle;
    circle.center.x = 20;
    circle.center.y = 2;
    circle.radius = 7;
    cout << circle.contains(point) << endl;
    return 0;
}
