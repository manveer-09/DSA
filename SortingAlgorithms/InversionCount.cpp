#include<iostream>
using namespace std;
int merge(int arr[],int l,int m,int r){
    int i=l , j=m+1 , k=0;
    int temp[100];
    int inv=0;
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{  //i>j
            temp[k++]=arr[j++];
            inv += (m+1-i);
        }
    }
    while(i <= m)   temp[k++] = arr[i++];

    while(j <= r) temp[k++] = arr[j++];

    for(i = l, k = 0; i <= r; i++, k++)
        arr[i] = temp[k];

    return inv;
}
int mergeSort(int arr[],int l,int r){
    int inv=0;
    if(l<r){
        int m=(l+r)/2;
        inv += mergeSort(arr,l,m);
        inv += mergeSort(arr,m+1,r);
        inv += merge(arr,l,m,r);
    }
    return inv;
}
int main(){
    int arr[]={8,4,2,1};
    int n=4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int result= mergeSort(arr,0,n-1);
    cout<<result;
}