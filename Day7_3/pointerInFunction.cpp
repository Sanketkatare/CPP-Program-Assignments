//pass pointer in fuction
#include<iostream>
using namespace std;
void function(int *num){
    *num = *num + 10;   // modifying the original value
}

int main()
{
    int x = 5;

    printf("Before function call: %d\n", x);

    function(&x);   // passing address of x

    printf("After function call: %d\n", x);

    return 0;
}