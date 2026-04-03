//complete Menu-Driven STL Program in C++ that demonstrates multiple STL components like vector, list, set, and map in one program
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    list<int> l;
    set<int> s;
    map<int, string> m;

    int choice, val, key;
    string name;

    do {
        cout << "\n===== STL MENU =====\n";
        cout << "1. Vector Operations\n";
        cout << "2. List Operations\n";
        cout << "3. Set Operations\n";
        cout << "4. Map Operations\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "\n--- VECTOR ---\n";
            cout << "1. Add\n2. Display\n3. Sort\n";
            cin >> val;

            if(val == 1) {
                int x;
                cout << "Enter value: ";
                cin >> x;
                v.push_back(x);
            }
            else if(val == 2) {
                for(int i : v)
                    cout << i << " ";
            }
            else if(val == 3) {
                sort(v.begin(), v.end());
                cout << "Sorted!\n";
            }
            break;

        case 2:
            cout << "\n--- LIST ---\n";
            cout << "1. Add\n2. Display\n";
            cin >> val;

            if(val == 1) {
                int x;
                cout << "Enter value: ";
                cin >> x;
                l.push_back(x);
            }
            else if(val == 2) {
                for(int i : l)
                    cout << i << " ";
            }
            break;

        case 3:
            cout << "\n--- SET ---\n";
            cout << "1. Add\n2. Display\n";
            cin >> val;

            if(val == 1) {
                int x;
                cout << "Enter value: ";
                cin >> x;
                s.insert(x);
            }
            else if(val == 2) {
                for(int i : s)
                    cout << i << " ";
            }
            break;

        case 4:
            cout << "\n--- MAP ---\n";
            cout << "1. Add\n2. Display\n";
            cin >> val;

            if(val == 1) {
                cout << "Enter key and name: ";
                cin >> key >> name;
                m[key] = name;
            }
            else if(val == 2) {
                for(auto x : m)
                    cout << x.first << " : " << x.second << endl;
            }
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while(choice != 5);

    return 0;
}