#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> mat[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
    int x;
    cin>>x;
    if(mat[x].size()==0)
    {
    cout<<"-1"<<endl;
    }
else
{
sort(mat[x].begin(),mat[x].end(),greater<int>());
for(int i=0;i<mat[x].size();i++)
    {
        cout<<mat[x][i]<<" ";
    }
}
    }

    
    return 0;
}