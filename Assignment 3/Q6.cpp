// Write overloaded functions to find area of:
// -Square
// -Rectangle

// Example

// area(int side)
// area(int length, int breadth)
#include <iostream>
using namespace std;
int area(int side)
{
    return side * side;
}

int area(int l, int b)
{
    return l * b;
}

int main()
{
    cout << "Area of square: " << area(5) << endl;
    cout << "Area of rectangle: " << area(10, 20) << endl;
    return 0;
}