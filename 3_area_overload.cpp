// 3. Overloaded function area() for:
// (i) circle  (ii) rectangle  (iii) triangle (Heron's formula)

#include <iostream>
#include <cmath>
using namespace std;

// Circle
double area(double radius) {
    return 3.14159 * radius * radius;
}

// Rectangle
double area(double length, double breadth) {
    return length * breadth;
}

// Triangle - Heron's formula
double area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    cout << "Circle area: " << area(5.0) << endl;
    cout << "Rectangle area: " << area(4.0, 6.0) << endl;
    cout << "Triangle area: " << area(3.0, 4.0, 5.0) << endl;
    return 0;
}
