#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // Write C++ code here
    int row = 5;
    for(int i=0; i<=row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==0 || i==row || j == 0 || j==i) 
            {
                cout<<"* ";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}