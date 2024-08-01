#include <iostream>
using namespace std;
main()
{
    int age;
    cin >> age;
    switch (age)
    {
    case 12:
        /* code */ cout << "u r  12 age";

        break;
    case 18:
        cout << "u r 18 year old";

    default:
        cout << "u r not 18 not 12";
        break;
    }
    return 0;
}