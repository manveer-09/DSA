#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int a[n1], b[n2];

    // Copy data into temp arrays
    for(int i = 0; i < n1; i++)
        a[i] = arr[left + i];

    for(int j = 0; j < n2; j++)
        b[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Merge the temp arrays
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            arr[k++] = a[i++];
        }
        else {
            arr[k++] = b[j++];
        }
    }

    // Copy remaining elements
    while(i < n1) {
        arr[k++] = a[i++];
    }

    while(j < n2) {
        arr[k++] = b[j++];
    }
}
void mergeSort(int arr[],int left,int right){
    if(left>=right) return;
    int mid=(left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
int main(){
    int arr[] = {7,8,9,5,3,0,1};
    int n = 7;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}