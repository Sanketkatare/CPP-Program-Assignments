#include<iostream>
using namespace std;
class Bank{

        int balance=0,account,option,num,num1;
        public:
        void accept()
        {
            cout<<"Enter the account number \n";
            cin>>account;
            
        }
        void display()
        {
            cout<<"the Account number is:"<<account<<"and balance is"<<balance<<"\n"<<endl;
        }
        void deposite(int amt)
        {
            
            balance=balance+amt;
            display();
            options();
        }
        void withdraw(int amt)
        {
            if(amt<balance)
            {
                
                balance=balance-amt;
            }else{
                cout<<"Your available balance is not suffient to withdraw";
            }
            display();
            options();
        }
        int getBalance(){
            return balance;
        }
        void options()
        {
            cout<<"\n***********select 1 if you want to deposite or 2 if you want to withdraw ***********\n";
            cin>>option;

            switch(option)
            {
                case 1:
                    cout<<"Enter the amount you want to deposite\n";
                    cin>>num;
                    deposite(num);
                    break;
                case 2:
                    cout<<"Enter the amount want to withdraw\n";
                    cin>>num1;
                    withdraw(num1);
                    break;
                case 3:
                    cout<<"Your available balance is "<<getBalance()<<"\n"<<endl;
                    break;
                default:
                    cout<<"Invalid option\n";

                    }
        }
};
int main(){
int num,num1,option;
cout<<"Welcom to XXXXXXXXX \n";
Bank b;
b.accept();
b.display();
b.options();
}