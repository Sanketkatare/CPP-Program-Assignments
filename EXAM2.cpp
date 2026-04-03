#include <stdio.h>
using namespace std;
int main() {
    int n = 6;  // total rows
    int num = 1;
    char ch = 'a';

    for (int i = 1; i <= n; i++) {
        
        for(int x = 1;x<=n-i;x++){
            printf(" \t");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            
            if (i % 2 != 0) {
                // odd row → alphabets
                printf("%c \t", ch);
                ch++;
            } else {
                // even row → numbers
                printf("%d \t", num);
                num++;
            }
        }
        
        printf("\n");
    }

   
}