#include<bits/stdc++.h>
using namespace std;
bool vis[20][20];
int dis[20][20];
char a[20][20];
vector<pair<int,int>> d={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int i, int j)
{
    if(i<0||i>=n||j<0||j>=m)
        return false;
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
    pair<int, int> par =q.front();
    int c=par.first,b=par.second;
    q.pop();
    cout<<c<<" "<<b<<endl;
    for(int i=0;i<4;i++)
    {
    int ci=c+d[i].first;
    int cj=b+d[i].second;
    if(valid(ci,cj)==true && vis[ci][cj]==false)
    {
        q.push({ci,cj});
        vis[ci][cj]=true;
        dis[ci][cj]=dis[c][b]+1;

    }
    }

    }
}

int main()
{
cin>>n>>m;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    
    }


}
    int si,sj;
    cin>>si>>sj;
    memset(vis, false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    bfs(si,sj);
    return 0;

}