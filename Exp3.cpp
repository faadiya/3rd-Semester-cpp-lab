#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:

    Rectangle() {
        length = 0;
        width = 0;
        cout << "Default constructor called.\n";
    }

    // Parameterized constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called.\n";
    }

    void display() const {
        cout << "Length: " << length << "\nWidth: " << width << endl;
    }

    ~Rectangle() {
        cout << "Destructor called for Rectangle (" << length << ", " << width << ")\n";
    }
};

int main() {
    cout << "--- Creating first rectangle using default constructor ---\n";
    Rectangle rect1; // Default constructor called

    cout << "\n--- Creating second rectangle using parameterized constructor ---\n";
    Rectangle rect2(10.5, 6.2); // Parameterized constructor called

    cout << "\nDisplaying Rectangle details:\n";
    cout << "Rectangle 1:\n";
    rect1.display();
    cout << "\nRectangle 2:\n";
    rect2.display();

    cout << "\nEnd of program. Destructors will be called automatically.\n";
    return 0;
}
