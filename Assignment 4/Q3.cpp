// Q3. Book Management System (Class)
#include<iostream>
using namespace std;

class Book {
    int bookId;
    string title;
    string author;
    float price;

public:
    void input() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Title: ";
        getline(cin, title);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    void display() {
        cout << "\nBook ID: " << bookId;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    Book b[4];

    cout << "Enter details of 4 books:\n";
    for(int i = 0; i < 4; i++) {
        cout << "\nBook " << i+1 << ":\n";
        b[i].input();
    }

    cout << "\nDisplaying Book Details:\n";
    for(int i = 0; i < 4; i++) {
        b[i].display();
    }

    return 0;
}