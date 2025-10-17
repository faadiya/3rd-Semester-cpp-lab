#include <iostream>
using namespace std;

class TelephoneBill {
private:
    string Name;
    string Address;
    string TelNo;
    int noOfCalls;

public:
    void inputDetails() {
        cout << "Enter Name: ";
        getline(cin, Name);
        cout << "Enter Address: ";
        getline(cin, Address);
        cout << "Enter Telephone Number: ";
        getline(cin, TelNo);
        cout << "Enter Number of Calls: ";
        cin >> noOfCalls;
    }

    friend void calculateAmount(TelephoneBill t);
};

void calculateAmount(TelephoneBill t) {
    float chargesPerCall = 2.0;  // Rs. 2 per call
    float totalAmount = t.noOfCalls * chargesPerCall;

    cout << "\n------ Telephone Bill ------\n";
    cout << "Name: " << t.Name << endl;
    cout << "Address: " << t.Address << endl;
    cout << "Telephone No.: " << t.TelNo << endl;
    cout << "Number of Calls: " << t.noOfCalls << endl;
    cout << "Total Amount to be Paid: Rs. " << totalAmount << endl;
}

int main() {
    TelephoneBill customer;

    cout << "Enter Customer Details:\n";
    customer.inputDetails();

    calculateAmount(customer);

    return 0;
}
