#include<iostream>
using namespace std;
string companyName;
class employee
{
    public:
    int emId;
    string name;
    int salary;
    static int totalEmployees;
    employee(int e, string n, int s, string cmp)
    {
        emId=e;
        name=n;
        salary=s;
        companyName=cmp;
        totalEmployees++;
    }
    void Display()
    {
        cout<< emId<< name<< salary<<endl;
        cout<<companyName<<endl;
    }
    static void showTotalEmployees(){
        cout<<totalEmployees<<endl;
    }
};
int employee::totalEmployees;
int main()
{
    employee e1(5,"shreyas",300,"TCS");
    e1.Display();
    employee e2(4,"vikrant",100,"TCS");
    e2.Display();
    employee e3(55,"sahil",300,"TCS");
    e3.Display();
    employee e4(1,"arohi",300,"TCS");
    e4.Display();
    employee e5(2,"sayali",300,"TCS");
    e5.Display();


    employee::showTotalEmployees();
}