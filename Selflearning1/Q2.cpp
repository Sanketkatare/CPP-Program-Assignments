// pass pointer in function
#include <iostream>
using namespace std;
void modifyValue(int *value) {
    *value = 20;
}
int main(){
    int num = 10;
    cout<<"Before function call:"<<num<<endl;
    modifyValue(&num);  
    cout<<"After function call:"<<num<<endl;
    cout<<"after call ";
    return 0;
}