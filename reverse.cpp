#include <iostream>
using namespace std;

int main() 
{
    int sum=0;
    int num,org,rem;
    cout<< "Enter the number";
    cin>>num;
    org=num;
    while(num!=0)
    {
      rem=num%10;
      sum = sum*10 +rem;
      num=num/10;
    }
    cout<<sum;
}