#include <iostream>
using namespace std;

class Outer
{
    int x;

public:
    // Constructor of Outer
    Outer(int a)
    {
        x = a;
    }

    // Inner Class
    class Inner
    {
        int y;

    public:
        // Constructor of Inner
        Inner(int b)
        {
            y = b;
        }

        void displayInner()
        {
            cout << "Value of Inner class variable y = " << y << endl;
        }
    };

    void displayOuter()
    {
        cout << "Value of Outer class variable x = " << x << endl;
    }
};

// MAIN FUNCTION
int main()
{
    // Create Outer object
    Outer obj1(10);
    obj1.displayOuter();

    // Create Inner object using Outer scope
    Outer::Inner obj2(20);
    obj2.displayInner();

    return 0;
}