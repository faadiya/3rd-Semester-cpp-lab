#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
private:
    int roll_number;

public:
    void inputStudent() {
        cout << "Enter roll number: ";
        cin >> roll_number;
    }

    void showDetails() {
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;

   
    cout << "Enter Student Details:\n";
    s.inputPerson();

   
    s.inputStudent();

  
    cout << "\nStudent Information:\n";
    s.display();   
    s.showDetails();  

    return 0;
}
