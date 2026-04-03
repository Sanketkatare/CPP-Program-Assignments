// Write a C++ program to find the largest element in an array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the numbers of element want in array";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

    }
    cout<<arr[n]<<endl;
    int max = arr[0];
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max )
        {
       
            max=arr[i];
        }
        
    }
    cout<<"this is the largest number = "<<max;
}