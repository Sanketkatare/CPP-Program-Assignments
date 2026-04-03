// declare function and call it by reference 
#include <iostream>
using namespace std;

void modifyValue(int &value) {
    value = 20;
}
int main() {
    int num = 10;
    cout<<"Before function call:"<<num<<endl;
    modifyValue(num);
    cout<<"After function call:"<<num<<endl;
    return 0;
}