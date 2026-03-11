#include<iostream>
#include<math.h>
using namespace std;

class Solution {
    bool count= true;
public:
    bool isPalindrome(int x) {
  
      int temp = x;
      int reminder,revers=0;
      

      for(int i=0; i<=x; i++)
      {
            reminder = x%10;
            revers = revers*10+reminder;
            x = x/10;
      }

        if(revers != temp)
        {
            count = false;
        }
        
        cout<<"hello"<<count;
        return count;
    }        
    
};


int main()
{
    // int a = 10;
    // int b = -18;
    // cout<<"the absolute value is :"<<abs(a)<<endl;
    Solution s;
    s.isPalindrome(121);

}