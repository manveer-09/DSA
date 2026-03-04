#include<iostream>
using namespace std;
int main(){
    int n=8;
    int arr[n]={0,1,3,4,6,8,10};
    int low=0;
    int high =n-1;
    int ans=-1;
    while(low<=high){
        int mid=low +(high-low)/2;
        if(arr[mid]==mid) low=mid+1;
        else{
            ans=mid;
            high=mid-1;
        }
    }
        cout<<ans;
    
}