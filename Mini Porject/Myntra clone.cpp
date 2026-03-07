#include <iostream>
#include <string>
#include <limits>
using namespace std;
class login
{
    string userName, password;
    int option;
public:
        login() { //Usin the constructor
        cout<<"**************   Login Page    *****************"<<endl;
        cout<<"\n"<<endl;
        cout<<"\n"<<endl;
        cout<<"Enter the User Name\n"<<endl;
        cin>>userName;
        cout<<"Enter the password\n";
        cin>>password;
        options();
    }
    void setPassword(const string &newPassword)
    {
        cout<<"Enter the new password\n";
        password = newPassword;
    }
    void options()
    {
        string vPassword;
        cout<<"enter the username to login\n";
        cin>>vPassword;
        if(password == vPassword)
        {
            cout<<"Enter the option that you want (1 or 2)\n";
            cin>>option;
            switch(option){
                case 1:
                    // simply loop back to options if user wants to repeat
                    options();
                    break;
                case 2: {
                    string a;
                    cout<<"Enter the new password"<<endl;
                    cin>>a;
                    setPassword(a);
                    options();
                    break;
                }
                default :
                    cout<<"Enter the correct option"<<endl;
            }
        }
        else {
            cout<<"Username does not match\n";
        }
    }
    string getUserName() const {
        return userName;
    }
    
};
int main()
{
    cout<<"Welcome to Myntra clone"<<endl;
    login l;   //Object declaration
    l.options();
    cout<<"Press enter to exit...";
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // cin.get();
    return 0;
}