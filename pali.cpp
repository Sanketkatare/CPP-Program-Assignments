#include <iostream>
using namespace std;

int main() 
{
    int rev=0,num,org,rem;
   
    cout<<"enter the number";
    cin>>num;
     org=num;
    while(num!=0)
    {
      rem=num%10;
      rev=rev*10+rem;
      num=num/10;
    }
    if(rev == org)
    {
      cout<<"the given number is a palindrom";
    }else{
      cout<<"the given number is not a palindrom";
    }
}