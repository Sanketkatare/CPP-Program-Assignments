#include <iostream>
using namespace std;

class Device
{
public:
    void show()
    {
        cout << "This is a Device\n";
    }
};

// Virtual Inheritance
class Printer : virtual public Device {};
class Scanner : virtual public Device {};

class AllInOne : public Printer, public Scanner {};

int main()
{
    AllInOne obj;

    obj.show();  // ✅ No ambiguity

    return 0;
}