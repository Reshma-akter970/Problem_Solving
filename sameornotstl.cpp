#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stk;
    queue<int>qu;
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        stk.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        qu.push(y);
    }
    if(stk.size()!=qu.size())
    {
        cout<<"NO"<<endl;
    }
    else{
        while(!stk.empty() && !qu.empty())
        {
            if(stk.top()==qu.front())
            {
                stk.pop();
                qu.pop();
            }
        }
    }
    return 0;
}