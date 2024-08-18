#include <iostream>
using namespace std;
int IntToRom(int n)
{

    switch (1)
    {
    case 1:
    {
        int first = n / 100;
        for (int i = 0; i < first; ++i)
        {
            cout << "C";
        }
        n = n - (first * 100);
    }
    case 2:
    {
        int second = n / 50;
        for (int i = 0; i < second; ++i)
        {
            cout << "L";
        }
        n = n - (second * 50);
    }
    case 3:
    {
        int third = n / 10;
        for (int i = 0; i < third; ++i)
        {
            cout << "X";
        }
        n = n - (third * 10);
    }
    case 4:
    {
        int fourth = n / 5;
        for (int i = 0; i < fourth; ++i)
        {
            cout << "V";
        }
        n = n - (fourth * 5);
    }
    case 5:
    {
        int fifth = n / 1;
        for (int i = 0; i < fifth; ++i)
        {
            cout << "I";
        }
        n = n - (fifth * 1);
    }
    }
    return 0;
}
int main()
{
    int i;
    cout << "enter the vlue for conversion =";
    cin >> i;
    IntToRom(i);
    return 0;
}