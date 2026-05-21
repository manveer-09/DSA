#include<iostream>
using namespace std;
int Partition(int arr[],int si,int ei){
     int pielement=arr[(si+ei)/2];
     int count=0;
    for(int i=si;i<ei;i++){
        if(arr[i]<=pielement) count ++;
    }
    int piIdx=count+si;
    swap(arr[pielement],arr[piIdx]);
    int i=0;
    int j=ei;
    while(i<pielement && j>pielement){
        if(i<=pielement) i++;
        else if(j>pielement) j++;
        else swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return piIdx;
}

int KthSmallest(int arr[],int si,int ei,int k){
    int pi=Partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1<k) return KthSmallest(arr,pi+1,ei,k);
    else  return KthSmallest(arr,si,pi-1,k);
}

int main(){
    int arr[]={6,5,1,3,4,9};
    int n=6;
    int k=4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<KthSmallest(arr,0,n-1,k);
}