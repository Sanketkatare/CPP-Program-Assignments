// implement all operators uranary, binary, assignment, logical, bitwise etc.
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    cout << "Unary operator: " << -a << endl;
    cout << "Binary operator: " << a + b << endl;
    a += 5;
    cout << "Assignment operator: " << a << endl;
    cout << "Logical operator (a > b): " << (a > b) << endl;
    cout << "Bitwise operator (a & b): " << (a & b) << endl;
    return 0;
}