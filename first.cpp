#include <iostream>
#include <string>
#include <climits>
#include <utility>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while (start<=end)
    {
        if(arr[mid]==key){
            cout<<mid;
            return mid;
        }
        else if(arr[mid]<key){//move right
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,24,35,36,48};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,size, 24);
    // if(a==0){
    //     cout<<"not found";
    // }

}