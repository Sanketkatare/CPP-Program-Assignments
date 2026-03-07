#include<iostream>
using namespace std;
int main()
{
    int sum =0;
    int array[5];
    for(int i=0;i<=4;i++)
    {
        cout<<"enter the"<<i<<"Array value"<<endl;
        cin>>array[i];
        sum+=array[i];
    }
    cout<<"the sumation of the given array is "<<sum<<endl;


}