#include<iostream>
using namespace std;
int sum2(int arr[],int n,int idx){
    if(idx==n-1) return arr[idx];
    return arr[idx] +sum2(arr,n,idx+1);
}
int main(){
    int n=6;
    int arr[]={1,2,3,4,5,6};
    cout<<sum2(arr,n,0);
}