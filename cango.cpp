#include<bits/stdc++.h>
using namespace std;
int n,m;
int c=0;
char a[1000][1000];

bool vis[1000][1000];
vector<pair<int,int>> v={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(int i, int j)
{
    if(i<0 ||i>=n || j<0 || j>=m)
    {
        return false;
    }
    return true;
}
void dfs(int ai,  int aj)
{
    
    vis[ai][aj]=true;
    for(int i=0;i<4;i++)
    {
    int ci=ai+v[i].first;
    int cj=aj+v[i].second;
    if(valid(ci,cj)==true && vis[ci][cj]==false)
    {
        dfs(ci,cj);
    }
}

}
int main()
{
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.' && vis[i][j]==false)
            {
                dfs(i,j);
            }
        }
    }
    memset(vis,false,sizeof(vis));
    v.push_back(c)
return 0;
}