#include <iostream>
#include <string>
#include <climits>
#include <utility>
using namespace std;
// int findDuplicate(vector<int> &arr){
//     for(int i=0; i<arr.size();i++){
//         int unit=arr[i];
//         for (int j = i+1; j < arr.size(); j++)
//         {
//             if(unit==arr[j]){
//                 return arr[j];
//             }
//         }  
//     }
//     return 0;
// }
// int FindUnique(int arr[], int size){
//     int ans= 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans=ans^arr[i]; 
//     }
//     return ans;
// }
// int printarr(int arr[], int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }   
// }
// bool search(int arr[],int size,int key){
//     for(int i=0; i<size; i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }
// void swap(int& one,int& two){
//     int a=one;
//     one=two;
//     two=a;
// }
// void flip(int arr[], int size){
//     int start=0;
//     int end=size-1;
//     for(int i=0;i<size/2;i++)
//     {
//         swap(arr[start],arr[end]);
//         start=start+1;
//         end=end-1;
//     }  
// }


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