#include <iostream>
using namespace std;
int main(){
    int std[2][4]={
        {1, 3 ,4, 5},{32, 4 , 23, 5}
    };
    for(int i=0; i<2; i++){
        for (int j = 0; j < 4; j++)
        {
            cout<<"the output of "<<i<<","<<j<<" is "<<std[i][j]<<endl;
        }
        
    }
    

}