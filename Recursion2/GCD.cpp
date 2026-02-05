#include<iostream>
using namespace std;
// int hcf(int a,int b){  TC=O(min(a,b))
//     for(int i=min(a,b);i>=2;i--){
//         if(a%i==0 && b%i==0)   return i;
//     }
//     return 1;
// }
int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a=24;
    int b=60;
    //cout<<gcd(a,b);
    cout<<gcd(min(a,b),max(a,b));
}