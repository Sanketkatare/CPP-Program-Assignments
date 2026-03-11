#include <iostream>
using namespace std;
 class Sample {
    int id;
 
public:
    Sample(int x)
    {
    	cout<<"constructor is called\n";
    	id=x;
	}
    void display()
	{
	  cout << endl << "ID=" << id; 
	}
};
int main()
{
   Sample obj1(10);
   obj1.display();
   //classname newobject(old object)
   Sample obj2(obj1);//copy constructor
   obj2.display();
}