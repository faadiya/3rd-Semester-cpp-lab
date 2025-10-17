#include <iostream>
using namespace std;

class c_polygon {
public:
    
    virtual float area() {
        return 0;
    }
};

class c_rectangle : public c_polygon {
private:
    float length, width;

public:
    void input() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

  
    float area() override {
        return length * width;
    }
};

class c_triangle : public c_polygon {
private:
    float base, height;

public:
    void input() {
        cout << "Enter base of triangle: ";
        cin >> base;
        cout << "Enter height of triangle: ";
        cin >> height;
    }

    float area() override {
        return 0.5 * base * height;
    }
};

int main() {
    c_polygon* poly; 

    c_rectangle rect;
    rect.input();
    poly = &rect;
    cout << "Area of Rectangle: " << poly->area() << endl;

    // Triangle
    c_triangle tri;
    tri.input();
    poly = &tri; 
    cout << "Area of Triangle: " << poly->area() << endl;

    return 0;
}
