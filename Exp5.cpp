#include <iostream>
using namespace std;

float area(float radius) {
    return 3.14159 * radius * radius;
}

float area(int side) {
    return side * side;
}

float area(float length, float width) {
    return length * width;
}

float area(float base, float height, char type) {
    return 0.5 * base * height;
}

int main() {
    float r, l, w, b, h;
    int s;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle: " << area(r) << endl;

    cout << "\nEnter side of square: ";
    cin >> s;
    cout << "Area of Square: " << area(s) << endl;

    cout << "\nEnter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of Rectangle: " << area(l, w) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of Triangle: " << area(b, h, 'T') << endl;

    return 0;
}
