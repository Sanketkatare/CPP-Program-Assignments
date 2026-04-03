// Q3. Menu Driven Program (Bank System)
#include<iostream>
using namespace std;

int main() {
    int choice;
    float balance = 1000, amount;

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Balance = " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient balance\n";
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}