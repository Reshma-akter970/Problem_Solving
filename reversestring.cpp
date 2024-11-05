#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    string temp=s;
    int j=0;
    for(int i=temp.size()-1;i>=0;i--){
        s[j]=temp[i];
        j++;
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<reverse(s)<<endl;;
    
    //for(int i=s.size()-1;i>=0;i--){
        //cout<<s[i];
    //}
    
    return 0;
}