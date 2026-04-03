#include <iostream>
using namespace std;

class MyString
{
    char *str;

public:
    // Constructor
    MyString()
    {
        str = new char[100];
        cout << "Constructor called (Memory Allocated)\n";
    }

    // Destructor
    ~MyString()
    {
        delete[] str;
        cout << "Destructor called (Memory Freed)\n";
    }

    // Input function
    void input()
    {
        cin.getline(str, 100);
    }

    // Display function
    void display()
    {
        cout << str;
    }

    // String Length
    int myStrLen()
    {
        int len = 0;
        while (*(str + len) != '\0')
        {
            len++;
        }
        return len;
    }

    // String Copy
    void myStrCopy(MyString &s2)
    {
        char *src = s2.str;
        char *dest = str;

        while (*src != '\0')
        {
            *dest = *src;
            dest++;
            src++;
        }
        *dest = '\0';
    }

    // String Concatenate
    void myStrCat(MyString &s2)
    {
        char *dest = str;

        while (*dest != '\0')
        {
            dest++;
        }

        char *src = s2.str;
        while (*src != '\0')
        {
            *dest = *src;
            dest++;
            src++;
        }
        *dest = '\0';
    }

    // String Compare
    int myStrCmp(MyString &s2)
    {
        char *s1 = str;
        char *s22 = s2.str;

        while (*s1 && *s22)
        {
            if (*s1 != *s22)
                return (*s1 - *s22);

            s1++;
            s22++;
        }
        return (*s1 - *s22);
    }
};

// MAIN
int main()
{
    MyString s1, s2, s3;

    cout << "Enter first string: ";
    s1.input();

    cout << "Enter second string: ";
    s2.input();

    // Length
    cout << "\nLength of first string: " << s1.myStrLen();

    // Copy
    s3.myStrCopy(s1);
    cout << "\nCopied string: ";
    s3.display();

    // Concatenate
    s3.myStrCopy(s1);
    s3.myStrCat(s2);
    cout << "\nConcatenated string: ";
    s3.display();

    // Compare
    int cmp = s1.myStrCmp(s2);
    if (cmp == 0)
        cout << "\nStrings are equal";
    else if (cmp < 0)
        cout << "\nFirst string is smaller";
    else
        cout << "\nFirst string is greater";

    cout << endl;

    return 0;
}