#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='A'&& a<='Z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(a>='a' && a<='z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else{
    
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}