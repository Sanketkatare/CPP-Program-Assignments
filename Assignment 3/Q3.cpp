// Write a C++ program to count even and odd numbers in an array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the numbers of element want in array";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    cout<<"this is the number of even = "<<even<<endl;
    cout<<"this is the number of odd = "<<odd<<endl;
}