#include<iostream>
#include<vector>
using namespace std ;

bool canJump(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int a =0 , b=0, c=0, t=0, p=0;
    line_1 :
    for( i=p; i<n ;i++){
        if(nums[i]==0){
            a++;
            b++;
        }
        if(b!=0){
            if(nums[i]!=0){
                goto line_2 ;
            }
        }
        if(b==0){
            c++;
        }
    }
    line_2 :
    for(int i=c-1; i>=0; i--){
        if(nums[i]==a+1){
            t++;
        }
        a++;
    }
    if(i==n-1){
        
    }
    p=a+c;
    a=0;
    goto line_1;        
}

int main(){
    int n =0 , a=0;
    cin >> n ;
    vector<int> nums ;
    for(int i =0; i<n ; i++){
        cin >> a ;
        nums.push_back(a);

    }
    cout << canJump(nums);
}