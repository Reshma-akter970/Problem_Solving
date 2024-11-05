#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string my_s,x;
        cin>>my_s>>x;

        while((my_s.find(x))!=-1){
            my_s.replace(my_s.find(x),x.size(),"#");
        }
        cout<<my_s<<endl;
    }
    return 0;
}