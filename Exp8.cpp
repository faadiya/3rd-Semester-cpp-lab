#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() {
        count = 0;
    }

    Counter(int c) {
        count = c;
    }

    void display() {
        cout << "Count = " << count << endl;
    }

    void operator++() {  // Prefix version
        ++count;
    }

    void operator++(int) {  // Postfix version
        count++;
    }
};

int main() {
    Counter c1(5);

    cout << "Initial value:\n";
    c1.display();

    // Prefix increment
    ++c1;
    cout << "After prefix ++:\n";
    c1.display();

    // Postfix increment
    c1++;
    cout << "After postfix ++:\n";
    c1.display();

    return 0;
}
