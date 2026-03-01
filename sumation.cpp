#include <iostream>
using namespace std;

int main() 
{
    int sum=0;
    int num,org,rem;
    cout<< "Enter the number";
    cin>>num;
    
    while(num!=0)
    {
      rem=num%10;
      sum = sum +rem;
      num=num/10;
    }
    cout<<sum;
}