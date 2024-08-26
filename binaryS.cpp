#include <iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans=-1;
    while (start<=end)
    {
         if(arr[mid]==key){
            start=mid+1;
            ans=mid;
         }
         if(arr[mid]>key){
            end=mid-1;
         }
         else{
            start=mid+1;
         }
         mid=(start+end)/2;
    }
    return ans;
    
}
int main(){
    int arr[]={1,2,3,4,5,5,5,5,5,6,7,24,35,36,48};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,size, 2);
}