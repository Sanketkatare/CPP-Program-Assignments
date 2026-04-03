#include <iostream>
using namespace std;

// Abstract Base Class
class Printer
{
public:
    // Pure Virtual Function
    virtual void print() = 0;

    // Virtual Function
    virtual void showType()
    {
        cout << "This is a Printer\n";
    }
};

// Derived Class 1
class InkjetPrinter : public Printer
{
public:
    void print()
    {
        cout << "Printing using Inkjet Printer\n";
    }

    void showType()
    {
        cout << "Type: Inkjet Printer\n";
    }
};

// Derived Class 2
class LaserPrinter : public Printer
{
public:
    void print()
    {
        cout << "Printing using Laser Printer\n";
    }

    void showType()
    {
        cout << "Type: Laser Printer\n";
    }
};

// MAIN FUNCTION
int main()
{
    Printer *p;  // Base class pointer

    InkjetPrinter ink;
    LaserPrinter laser;

    // Inkjet Printer
    p = &ink;
    p->showType();
    p->print();

    cout << endl;

    // Laser Printer
    p = &laser;
    p->showType();
    p->print();

    return 0;
}