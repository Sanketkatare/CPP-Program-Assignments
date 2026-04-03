#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,6,4,2,3};
    int arr1[5];

    for(int a=0;a<5;a++)
    {
        for(int b =0; b<5;b++)
        {
            if(arr[a] != arr[b+1])
            {
                arr1[a]=arr[a];
            }
        }            
    }
    for(int a=0;a<5;a++){
        cout<<arr1[a];
    }
    
}