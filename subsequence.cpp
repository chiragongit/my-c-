#include<iostream>
#include<string>
using namespace std ;

bool isSubsequence(string s, string t) {
        int a =0, k=0;
        int n = s.size();
        int m = t.size();
        
        for(int i=0; i<n; i++){
            for(int j=a; j<m; j++){
                if(s[i]==t[j]){
                    k++;
                    break;
                }
                a=j+1;
            }
        }
        if(k==n){
            return true ;
        }
        else{
            return false;
        }
    }

int main(){
    string s;
    string t;
    cin >> s ;
    cout << " t " << endl ;
    cin >> t ; 
    cout << isSubsequence(s,t);
}