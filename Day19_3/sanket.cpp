#include <iostream>
using namespace std;
class Employee
{
    int id;

public:
    Employee();
    Employee(int);
    virtual void display();
    virtual int findsalry()
    {
        return 0;
    }
};
Employee::Employee()
{
    id = 0;
    cout << "it default of EMP" << endl;
    
}
Employee::Employee(int i)

{
    this->id = i;
    cout << "it para constructor of EMP" << endl;
}
void Employee::display()
{
    cout << "it is from EMP and id is: " << id << endl;
}

class WegEmployee : public Employee
{
    int hrs, rate;

public:
    WegEmployee();
    WegEmployee(int, int, int);
    void display();
    int findsalry();
}; 

WegEmployee::WegEmployee()
{
    cout << "from WEMP" << endl;
    hrs = 0;
    rate = 0;
}
WegEmployee::WegEmployee(int i, int j, int r) : Employee(i)
{
    Employee::display();
    cout << "para constructor from WEMP" << endl;
    hrs = j;
    rate = r;
}
void WegEmployee::display()
{
    cout << "the hours:" << hrs << "and the rate is:" << rate << endl;
}
int WegEmployee::findsalry()
{
    return hrs * rate;
}

int main()
{
    Employee * ptr;
    WegEmployee wel(100, 23, 10000);
    ptr = &wel;
    cout << "salary is " << ptr->findsalry();
    ptr->display();
    // Employee * ptr=new WegEmployee(101,5,500);
	// cout<<"salary is "<<ptr->findsalry();
    // ptr->display();
 }

 // bind -- function body operation 
