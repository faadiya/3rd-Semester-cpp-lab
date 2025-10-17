#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void displayTime() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    friend Time sumTime(Time t1, Time t2);
};

Time sumTime(Time t1, Time t2) {
    Time t3;
    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t1.minutes + t2.minutes + t3.seconds / 60;
    t3.seconds %= 60;
    t3.hours = t1.hours + t2.hours + t3.minutes / 60;
    t3.minutes %= 60;
    return t3;
}

int main() {
    Time t1, t2, t3;

    cout << "Enter Time 1:\n";
    t1.inputTime();

    cout << "\nEnter Time 2:\n";
    t2.inputTime();

    t3 = sumTime(t1, t2);

    cout << "\nSum of Time 1 and Time 2: ";
    t3.displayTime();

    return 0;
}
