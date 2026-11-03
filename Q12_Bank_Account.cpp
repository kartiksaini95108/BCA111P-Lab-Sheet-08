#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    explicit BankAccount(double openingBalance = 0.0) {
        balance = openingBalance >= 0 ? openingBalance : 0.0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Deposit amount must be positive.\n";
            return;
        }
        balance += amount;
        cout << "Deposit successful.\n";
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive.\n";
        } else if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        }
    }

    void displayBalance() const {
        cout << "Current balance: " << balance << '\n';
    }
};

int main() {
    double openingBalance;
    cout << "Enter opening balance: ";
    cin >> openingBalance;

    BankAccount account(openingBalance);
    int choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display balance\n0. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displayBalance();
                break;
            case 0:
                cout << "Thank you.\n";
                break;
            default:
                cout << "Invalid option.\n";
        }
    } while (choice != 0);

    return 0;
}
