#include <iostream>
using namespace std;
int yoyo()
{
    for (int k = 0; k <= 5; k++)
    {
        for (int i = 0; i <= 5;)
        {
            cout<<"$";
            i++;
        }
        // cout<<endl;
    }
    return 0;
}
int main(){
    yoyo();
}