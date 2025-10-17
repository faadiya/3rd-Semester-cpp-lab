#include <iostream>
using namespace std;

class Student {
protected:
    string Name;
    int Rollno;
    string Course;

public:
    void inputStudent() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "Enter Roll Number: ";
        cin >> Rollno;
        cin.ignore();
        cout << "Enter Course: ";
        getline(cin, Course);
    }

    void displayStudent() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << Name << endl;
        cout << "Roll Number: " << Rollno << endl;
        cout << "Course: " << Course << endl;
    }
};

class Test : virtual public Student {
protected:
    int marks[3];

public:
    void inputMarks() {
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    int totalMarks() {
        return marks[0] + marks[1] + marks[2];
    }

    void displayMarks() {
        cout << "Marks in 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";
        cout << endl;
    }
};

class GraceMarks : virtual public Student {
protected:
    int BonusMark;

public:
    void inputBonus() {
        cout << "Enter Bonus Marks: ";
        cin >> BonusMark;
    }

    int getBonus() {
        return BonusMark;
    }
};

class Result : public Test, public GraceMarks {
private:
    int Total;

public:
    void calculateTotal() {
        Total = totalMarks() + getBonus();
    }

    void displayResult() {
        displayStudent();
        displayMarks();
        cout << "Bonus Marks: " << getBonus() << endl;
        cout << "Total Marks: " << Total << endl;
    }
};

int main() {
    Result r;

    cout << "Enter Student Details:\n";
    r.inputStudent();

    cout << "\nEnter Test Marks:\n";
    r.inputMarks();

    cout << "\nEnter Bonus Marks:\n";
    r.inputBonus();

    r.calculateTotal();

    cout << "\n------ Result ------\n";
    r.displayResult();

    return 0;
}
