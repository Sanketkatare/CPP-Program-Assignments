#include<stdio.h>
int main(){
    int num,i=2;
    printf("Enter the number:");
    scanf("%d",&num);

    while(i<num)
    {
        if(num%i==0)
        {
            printf("the number is not prime");
            break;
        }
        i++;
    }
    if(i==num)
    {
        printf("the number is prime");
    }
}