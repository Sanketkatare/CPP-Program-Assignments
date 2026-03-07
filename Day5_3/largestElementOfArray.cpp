#include<iostream>
using namespace std;
int main()
{
    int max;
    int array[4]={10,40,46,8};
    // for(int i=0;i<=2;i++)
    // {
    //     cout<<"enter the"<<i<<"Array value"<<endl;
    //     cin>>array[i];
    // }
    // if(array[0]>array[1] && array[0]>>array[2])
    // {
    //     cout<<"the "<<array[0]<<"is greater"<<endl;
    // }else if(array[0]<array[1] && array[1]>array[2])
    // {
    //     cout<<"the "<<array[1]<<"is the greater"<<endl;
    // }else{
    //     cout<<"the "<<array[2]<<"is the greater"<<endl;
    // }
    max = array[0];// 10,11,36,8
    for(int i=0;i<=3;i++)
    {
       if( array[i] > max)
       {
        max=array[i];
       }
    }
    cout<<"largest number is ="<<max<<endl;

}