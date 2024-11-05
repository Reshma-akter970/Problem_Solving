#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>qu;
    int t;
    cin>>t;

    for(int k=0;k<t;k++)
    {
        int num;
        string name;
        cin>>num>>name;
        if(num==0)
        {
            qu.push(name);
        }
        else if(num==1)
        {
            if(qu.empty())
            {
                cout<<"Invaild"<<endl;
            }
            else{
                cout<<qu.front()<<endl;
                qu.pop();
            }
        }

    }

    return 0;
}