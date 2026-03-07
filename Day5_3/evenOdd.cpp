#include<iostream>
using namespace std;
int main()
{
    int array[5];
    
    for(int i=0;i<=4;i++)
    {
        cout<<"enter the numer"<<endl;
        cin>>array[i];
        if(array[i]%2==0)
        {
            cout<<"the number is :"<<array[i]<<"even"<<endl;
        }else{
            cout<<"the number is :"<<array[i]<<"odd"<<endl;
        }
    }

}