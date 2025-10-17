// Program4_InlineArea.cpp
#include <iostream>
#include <cmath>   // for M_PI (π)
using namespace std;

// Inline function for area of circle
inline float areaCircle(float r) {
    return M_PI * r * r;
}

// Inline function for area of square
inline float areaSquare(float side) {
    return side * side;
}

// Inline function for area of rectangle
inline float areaRectangle(float length, float width) {
    return length * width;
}

// Inline function for area of triangle
inline float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float r, side, l, w, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Enter base and height of triangle: ";
    cin >> b >> h;

    cout << "\n--- Area Calculations ---\n";
    cout << "Area of Circle: " << areaCircle(r) << endl;
    cout << "Area of Square: " << areaSquare(side) << endl;
    cout << "Area of Rectangle: " << areaRectangle(l, w) << endl;
    cout << "Area of Triangle: " << areaTriangle(b, h) << endl;

    return 0;
}
