#include<bits/stdc++.h>
using namespace std;
string replace(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<'z' || s[i]>='A' && s[i]<'Z'){
            s[i]=s[i]+1;
        }
        else if(s[i]=='z'){
            s[i]='a';
        }
        else if(s[i]='Z'){
            s[i]='A';
        }
    }




    /*for(int i=0;i<=s.size();i++){
        if(s[i]=='e' or s[i]=='a'){
            s[i]='b';

        }
        else if(s[i]='p'){
            s[i]='q';
        }
        else if(s[i]=='z'){
            s[i]='a';
        }
    }*/
    return s;
}
int main(){
    string s;
    cin>>s;
    cout<<replace(s)<<endl;;
    
    //for(int i=s.size()-1;i>=0;i--){
        //cout<<s[i];
    //}
    
    return 0;
}