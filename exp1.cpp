#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int acc_no;
    string acc_type;
    float balance;

public:
    void assignValues(string n, int a, string type, float bal) {
        name = n;
        acc_no = a;
        acc_type = type;
        balance = bal;
    }

    // Function to deposit amount
    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }
    void withdraw(float amount) {
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;

    acc.assignValues("Dinesh", 12345, "Saving", 5000);

    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();

    return 0;
}
