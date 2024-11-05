#include<bits/stdc++.h>
using namespace std;
void display(stringstream & ss){
    string word;
    while(ss>>word){
        word[0]=char(word[0]-32);
        cout<<word<<" ";
    }
}
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    display(ss);
    return 0;

}