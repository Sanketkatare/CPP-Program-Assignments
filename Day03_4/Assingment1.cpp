

#include<iostream>
using namespace std;

int swap(int , int);
int main()
{
	int a,b,z;
	cout<<"enter value of a and b\n";
	cin>>a>>b;
	cout<<"before swapping value of a and b\n";
	cout<<"value of a = "<<a<<"  "<<"value of b = "<<b<<endl; 
	z=swap(a,b);//function calling
	cout<<"value of x is  "<<z<<endl;
	cout<<"after calling swap () value of a and b\n";
	cout<<"value of a = "<<a<<"  "<<"value of b = "<<b<<endl;
}
int  swap(int p, int q){
    int x=100,y=200;
    int temp;
    temp = p;
    p = q;
    q = temp;
    cout<<"after the swapping the value of p and q is"<<endl;
    cout<<"the value of p is"<<p<<"value of q is"<<q<<endl;
    return x;
}
