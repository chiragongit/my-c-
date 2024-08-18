#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int bit, ans = 0;
        while (x!=0){
            bit = x % 10;
            if((ans> INT_MAX/10)||(ans< INT_MIN/10)){
                return 0;
            }
            x=x/10;
            ans = ans * 10 + bit;
        }
        
        return ans;
    }
};
int main() {}
