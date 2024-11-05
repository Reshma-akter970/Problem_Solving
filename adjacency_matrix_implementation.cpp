#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node, edge;
    cin>>node>>edge;
    int mat[node][node];
    memset(mat, 0, sizeof(mat));
    while(edge--)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1;

    }
    if(mat[3][4]==1)
    {
        cout<<"connection exist"<<endl;
    }
    else{
        cout<<"no connection"<<endl;
    }
    
    return 0;
}