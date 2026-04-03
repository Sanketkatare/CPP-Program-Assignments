// Q6. Shopping Cart System (Vector + Exception)
#include<iostream>
#include<vector>
using namespace std;

class Item {
public:
    int itemId;
    string itemName;
    float price;
};

int main() {
    vector<Item> cart;
    int choice;

    do {
        cout << "\n1.Add Item\n2.Display\n3.Total Bill\n4.Exit\nEnter choice: ";
        cin >> choice;

        try {
            switch(choice) {
                case 1: {
                    Item it;
                    cout << "Enter ID: ";
                    cin >> it.itemId;
                    cout << "Enter Name: ";
                    cin >> it.itemName;
                    cout << "Enter Price: ";
                    cin >> it.price;

                    if(it.price < 0)
                        throw "Invalid Price!";

                    cart.push_back(it);
                    break;
                }

                case 2:
                    for(auto it : cart) {
                        cout << it.itemId << " " << it.itemName << " " << it.price << endl;
                    }
                    break;

                case 3: {
                    float total = 0;
                    for(auto it : cart) {
                        total += it.price;
                    }
                    cout << "Total Bill = " << total << endl;
                    break;
                }

                case 4:
                    cout << "Exit\n";
                    break;

                default:
                    cout << "Invalid choice\n";
            }
        }
        catch(const char* msg) {
            cout << msg << endl;
        }

    } while(choice != 4);

    return 0;
}