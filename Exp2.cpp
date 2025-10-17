#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int BookID;
    string BookName;
    float BookPrice;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cin.ignore(); 
        cout << "Enter Book Name: ";
        getline(cin, BookName);
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }

    void display() const {
        cout << "\nBook ID: " << BookID
             << "\nBook Name: " << BookName
             << "\nBook Price: Rs." << BookPrice;
    }

    float total_cost(int copies) const {
        return BookPrice * copies;
    }
};

int main() {
    Book books[3];
    int copies;

    cout << "Enter details for 3 books:\n";

    for (int i = 0; i < 3; ++i) {
        cout << "\n--- Book " << (i + 1) << " ---\n";
        books[i].input();
    }

    cout << "\n--- Displaying Book Details and Total Cost ---\n";
    for (int i = 0; i < 3; ++i) {
        cout << "\nBook " << (i + 1) << " details:";
        books[i].display();
        cout << "\nEnter number of copies to buy: ";
        cin >> copies;
        cout << "Total cost: Rs." << books[i].total_cost(copies) << "\n";
    }

    return 0;
}
