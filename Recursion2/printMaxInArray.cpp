#include<iostream>
#include<climits>
using namespace std;
// void printMax(int arr[],int n,int idx,int max){
//     if(idx==n) {
//         cout<<max;
//         return;
//     }
//     if(max<arr[idx])  max=arr[idx];
//     printMax(arr,n,idx+1,max);
// }

int maxInArray(int arr[],int n,int idx){
    if(idx==n-1)  return arr[idx];
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
   int arr[]={7,5,3,8,2,11,6};
   int n=sizeof(arr)/sizeof(arr[0]);
    //printMax(arr,n,0,INT_MIN);
    cout<<maxInArray(arr,n,0);
}