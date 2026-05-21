#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="AZYZXBDJKX";
    string str;
    // remove characters smaller than x
    for(int i=0;i<s.length();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str;
    // bubble sort
    for(int i=0;i<str.length()-1;i++){
         for(int j=0;j<str.length()-1;j++){
            if(str[j]<str[j+1])
            swap(str[j],str[j+1]);
         }
    }
    cout<<endl;
    cout<<str;
}