#include<iostream>
using namespace std;
int partition(int arr[],int start,int end){
    int pivotElement=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIndex=count+start;
    swap(arr[start],arr[pivotIndex]);
    int i=start;
    int j=end;
    while(i<pivotIndex && j>pivotIndex){
        if(arr[i]<=pivotElement) i++;
        else if(arr[j]>pivotElement) j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
    return pivotIndex;
}
void quickSort(int arr[],int start,int end){
    if(start>=end) return;
    int pivot=partition(arr,start,end);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end);
}
int main(){
    int arr[6]={4,3,8,7,6,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}