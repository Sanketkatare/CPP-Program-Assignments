
// Write a program to find the sum of all elements of an array.
// Example
// Input: 1 2 3 4 5
// Output: Sum = 15#include <iostream>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element want in array";
    cin>>n;

    int arr[n];
    cout<<"enter the elements of the array";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum = "<<sum;
}