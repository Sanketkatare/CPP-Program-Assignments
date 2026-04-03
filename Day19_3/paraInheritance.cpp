#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int p)
    {
        a = p;
        cout << "in default of A" << endl;
    }
    void display()
    {
        cout << a << endl;
    }
};
class B : public A
{
    int x = 0;

public:
    B(int p, int q):A(p)
    {
        cout << "in the parameter of B" << endl;
        x = p + q;
        cout << x << endl;
    }
    void display()
    {
        A::display();
    }
};
int main()
{
    B bobj(10, 20);
    bobj.display();
}