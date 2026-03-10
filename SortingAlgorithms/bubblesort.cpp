#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={5,3,1,4,6,2};
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

     // bubble sort optimised
    bool flag=true;
      for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true) {
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}