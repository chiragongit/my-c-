#include <iostream>
using namespace std;
int notefinder(int amount){
    int note = 0;
    int num = 1;
    switch (num)
    {
    case 1:
        note = amount / 100;
        cout << "no. of 100 notes requerde = " << note << endl;
        amount = amount - (note * 100);
        if (amount==0){
            break;
        }

    case 2:
        note = amount / 50;
        cout << "no. of 50 notes required = " << note << endl;
        amount = amount - (note * 50);
        if (amount==0){
            break;
        }
    case 3:
        note = amount / 20;
        cout << "no. of 20 notes required = " << note << endl;
        amount = amount - (note * 20);
        if (amount==0){
            break;
        }
    case 4:
        note = amount / 10;
        ;
        cout << "no. of 10 notes required = " << note << endl;
        amount = amount - (note * 10);
        
    }
    return 0;
}
int main()
{
    int amount;
    while (true)
    {
        cout << "enter the amount" << endl;
        cin >> amount;
        notefinder(amount);
        cout<<"thnks for visiting"<<endl;


    }
    

    return 0;
}
