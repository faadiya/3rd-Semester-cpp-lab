#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
 
    Car() : brand(""), model(""), year(0) {}


    Car(const string& b, const string& m, int y) : brand(b), model(m), year(y) {}

 
    void readData() {
        cout << "Enter brand: ";
     
        getline(cin >> ws, brand);
        cout << "Enter model: ";
        getline(cin, model);
        cout << "Enter year: ";
        cin >> year;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void display() const {
        cout << "Brand: " << brand << "\n"
             << "Model: " << model << "\n"
             << "Year: " << year << "\n";
    }
};

int main() {
    cout << "Create details for 3 cars\n\n";
    Car cars[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Car " << (i+1) << ":\n";
        cars[i].readData();
        cout << '\n';
    }

    cout << "Displaying car details:\n\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Car " << (i+1) << " details:\n";
        cars[i].display();
        cout << "--------------------------\n";
    }

    return 0;
}
