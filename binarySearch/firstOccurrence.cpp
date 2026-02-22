#include<iostream>
using namespace std;
int main(){
    int n=11;
    int arr[n]={1,2,2,3,3,3,3,4,4,6,6};
    int x=6;
    int low=0;
    int high =n-1;
    bool flag =false;
    while(low<=high){
        int mid=low +(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag =true;
                cout<<mid;
                break;
            }
            else{
                high=mid-1;
            }
        }
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(flag==false) cout<<-1;
    
}