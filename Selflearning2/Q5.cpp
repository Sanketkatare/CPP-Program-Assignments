#include <iostream>
using namespace std;

// ---------------- DATE CLASS ----------------
class Date
{
    int day, month, year;

public:
    // Read Date
    void input()
    {
        cout << "Enter date (dd mm yyyy): ";
        cin >> day >> month >> year;
    }

    // Print Date
    void display()
    {
        cout << day << "/" << month << "/" << year;
    }

    // Add days (Function Overloading)
    void calculate(int d)
    {
        day += d;

        while (day > 30) // simple logic (assuming 30 days/month)
        {
            day -= 30;
            month++;
        }

        while (month > 12)
        {
            month -= 12;
            year++;
        }
    }

    // Subtract days (Function Overloading)
    void calculate(int d, bool subtract)
    {
        if (subtract)
        {
            day -= d;

            while (day <= 0)
            {
                day += 30;
                month--;
            }

            while (month <= 0)
            {
                month += 12;
                year--;
            }
        }
    }
};

// ---------------- TIME CLASS ----------------
class Time
{
    int hr, min, sec;

public:
    // Read Time
    void input()
    {
        cout << "Enter time (hh mm ss): ";
        cin >> hr >> min >> sec;
    }

    // Print Time
    void display()
    {
        cout << hr << ":" << min << ":" << sec;
    }

    // Add seconds (Function Overloading)
    void calculate(int s)
    {
        sec += s;

        while (sec >= 60)
        {
            sec -= 60;
            min++;
        }

        while (min >= 60)
        {
            min -= 60;
            hr++;
        }

        while (hr >= 24)
        {
            hr -= 24;
        }
    }

    // Subtract seconds (Function Overloading)
    void calculate(int s, bool subtract)
    {
        if (subtract)
        {
            sec -= s;

            while (sec < 0)
            {
                sec += 60;
                min--;
            }

            while (min < 0)
            {
                min += 60;
                hr--;
            }

            while (hr < 0)
            {
                hr += 24;
            }
        }
    }
};

// ---------------- MAIN ----------------
int main()
{
    Date d;
    Time t;

    // Input
    d.input();
    t.input();

    // Display original
    cout << "\nOriginal Date: ";
    d.display();

    cout << "\nOriginal Time: ";
    t.display();

    // Add
    d.calculate(5);       // add 5 days
    t.calculate(120);     // add 120 seconds

    cout << "\n\nAfter Addition:";
    cout << "\nDate: ";
    d.display();

    cout << "\nTime: ";
    t.display();

    // Subtract
    d.calculate(3, true); // subtract 3 days
    t.calculate(60, true);// subtract 60 seconds

    cout << "\n\nAfter Subtraction:";
    cout << "\nDate: ";
    d.display();

    cout << "\nTime: ";
    t.display();

    return 0;
}