#include<iostream>
using namespace std;

int main()
{
    string str = "GGGGP";
    int a= str.length();
    char arr[a];
    
    if(a%2!=0)
    {
        for(int i=0;i<=a;i++)
        {
            arr[i]=str[a];

            cout<<arr[i];
        }
    }else {
        cout<<"YES";
    }
}