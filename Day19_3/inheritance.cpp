// #include <iostream>
// using namespace std;
// class A
// {
//     int a;

// public:
//     A()
//     {
//         cout << "in default of A\n";
//         a = 10;
//     }
//     void display()
//     {
//         cout << a << endl;
//     }
// };

// class B : public A
// {
//     int b;

// public:
//     B()
//     {
//         cout << "in default of B\n";
//         b = 20;
//     }
//     void display()
//     {
//         A::display();
//         cout << b << endl;
//     }
// };

// int main()
// {
//         B bobj;
//         bobj.display();

// }

#include <iostream>
using namespace std;
class Employees
{
    int sal, id;

public:
    Employees(int a)
    {
        sal = a;
       
    }
    void display()
    {
        cout << "from Employess display function" << endl;
    }
};
class SalesPerson : public Employees
{
    int comm = 10, total;

public:
    vlid total_Sal(int sal)
    {
        total = sal + comm;
        cout<< total << endl;
    }
    void display()
    {
        cout << "from SalesPerson display function" << endl;
    }
};

int main()
{

}
