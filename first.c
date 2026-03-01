#include <stdio.h>

int main() {
    int rem;
    int count = 0;
    
    for(int i = 0; i <= 999; i++)
    {
        int org = i;
        int sum = 0;
        int temp = i;  // Use a separate variable for the while loop
        
        while(temp != 0)
        {   
            rem = temp % 10;
            temp = temp / 10;
            sum = sum + rem*rem*rem;  // Works correctly for 3-digit numbers
        }
        
        if(sum == org)
        {
            printf("the given number is armstrong number %d\n", org);
            count++;
        }
    }
    printf("the total armstrong number is %d\n", count);
    
    return 0;
}