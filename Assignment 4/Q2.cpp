// Q2. 0–1 Pattern
#include<iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        int val = (i % 2 == 0) ? 0 : 1;

        for(int j = 1; j <= i; j++) {
            cout << val;
            val = 1 - val; // toggle between 0 and 1
        }
        cout << endl;
    }

    return 0;
}