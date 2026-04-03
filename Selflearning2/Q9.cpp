#include <iostream>
using namespace std;

// Custom Exception Class
class InvalidAge
{
public:
    void show()
    {
        cout << "Exception: Age must be 18 or above\n";
    }
};

int main()
{
    int a, b, age;

    try
    {
        // Division Example
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (b == 0)
            throw b;   // Throw integer exception

        cout << "Division = " << a / b << endl;

        // Age Example
        cout << "Enter age: ";
        cin >> age;

        if (age < 18)
            throw InvalidAge();   // Throw custom exception

        cout << "Access Granted\n";
    }

    catch (int x)
    {
        cout << "Exception: Division by zero is not allowed\n";
    }

    catch (InvalidAge e)
    {
        e.show();
    }

    catch (...)
    {
        cout << "Unknown Exception occurred\n";
    }

    cout << "Program continues safely...\n";

    return 0;
}