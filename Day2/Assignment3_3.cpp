#include<iostream>
using namespace std;
string companyName;
class employees{
    public:

    int empId,salary;
    string name;
    static int total_employess;
    public :
    employees(int a,string b, int c, string d)
    {
        empId=a;
        salary=c;
        name=b;
        companyName=d;
        total_employess++;
    }
    void display()
    {
        cout<<companyName;
    }
    static void showTotalEmployees();

};
void employees::showTotalEmployees()
{
    cout<<total_employess<<endl;
}


int main()
{
    employees e(100,"sanket",10000,"sanek");
    employees e1(200,"santosh",20000, "sanket");
    employees e2(300,"shreyas", 50000,"TCS");
    employees e3(400,"prathems",30000,"capgemini");
    employees e4(500, "nitin",60000,"dsk");
        e.display();
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    employees showTotalEmployees();
}