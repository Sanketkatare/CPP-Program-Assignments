// Q3. Decimal to Binary (Class)
#include<iostream>
using namespace std;

class DecimalToBinary {
    int num;
    int binary[32], i;

public:
    void input() {
        cout << "Enter decimal number: ";
        cin >> num;
    }

    void convert() {
        i = 0;
        while(num > 0) {
            binary[i++] = num % 2;
            num /= 2;
        }
    }

    void display() {
        cout << "Binary = ";
        for(int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
    }
};

int main() {
    DecimalToBinary d;
    d.input();
    d.convert();
    d.display();
    return 0;
}