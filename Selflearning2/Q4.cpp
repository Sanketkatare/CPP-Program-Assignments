#include <iostream>
using namespace std;

// Forward declaration
class AllInOne;

// Friend Function
void showDetails(AllInOne);

// Base Class 1
class Printer
{
protected:
    int printSpeed;

public:
    Printer(int p)
    {
        printSpeed = p;
    }

    void print()
    {
        cout << "Printing at speed: " << printSpeed << " ppm\n";
    }
};

// Base Class 2
class Scanner
{
protected:
    int scanResolution;

public:
    Scanner(int s)
    {
        scanResolution = s;
    }

    void scan()
    {
        cout << "Scanning at resolution: " << scanResolution << " dpi\n";
    }
};

// Friend Class
class Service
{
public:
    void servicePrinter(AllInOne &a);
};

// Derived Class (Multiple Inheritance)
class AllInOne : public Printer, public Scanner
{
    int copies;

public:
    AllInOne(int p, int s, int c) : Printer(p), Scanner(s)
    {
        copies = c;
    }

    void display()
    {
        cout << "Copies: " << copies << endl;
    }

    // Friend Function
    friend void showDetails(AllInOne);

    // Friend Class
    friend class Service;
};

// Friend Function Definition
void showDetails(AllInOne a)
{
    cout << "\n--- Printer Details ---\n";
    cout << "Print Speed: " << a.printSpeed << endl;
    cout << "Scan Resolution: " << a.scanResolution << endl;
    cout << "Copies: " << a.copies << endl;
}

// Friend Class Function Definition
void Service::servicePrinter(AllInOne &a)
{
    cout << "\n--- Service Report ---\n";
    cout << "Accessing private data...\n";
    cout << "Copies Printed: " << a.copies << endl;
}

int main()
{
    AllInOne obj(30, 600, 10);

    obj.print();
    obj.scan();
    obj.display();

    showDetails(obj);

    Service s;
    s.servicePrinter(obj);

    return 0;
}