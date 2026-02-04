#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subset(string ans,string org,int idx,vector<string>& v){
    if(idx==org.length()){
       v.push_back(ans);
        return;
    }
    char ch=org[idx];
    subset(ans+ch,org,idx+1,v);
    subset(ans,org,idx+1,v);
   
}
int main(){
    string str="abc";
    vector<string>v;
    subset("",str,0,v);
    for(string ele:v){
        cout<<ele<<endl;
    }
}