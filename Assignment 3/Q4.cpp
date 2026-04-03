// Write a program to reverse the array elements.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element want in array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"the reverse of array is :";
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
     return 0;


}