// Q4. Fibonacci Series
#include<iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Enter N: ";
    cin >> n;

    cout << a << " " << b << " ";

    for(int i = 3; i <= n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}