#include <iostream>
using namespace std;
class login
{
    int userName,password;
public:
        login() { //Usin the function
        cout<<"**************   Login Page    *****************"<<endl;
        cout<<"\n"<<endl;
        cout<<"\n"<<endl;
        cout<<"Enter the User Name\n"<<endl;
        cin>>userName;
        cout<<"Enter the password\n";
        cin>>password;
    }
    void display()
    {
        cout<<"your user name :"<<userName<<"password"<<password<<endl;
    }
};
int main()
{
    cout<<"Welcome to Myntra clone";
    login l;   //Object declaration

}