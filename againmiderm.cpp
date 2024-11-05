#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList;
    int t;
    cin>>t;
for(int test=0;test<t;test++)
    {

    int val;
    int x;
    cin>>x>>val;
    if(x==0)
    {
        myList.push_front(val);

    }
    else if(x==1)
    {
        myList.push_back(val);
        
    }
    else{

        if(val==0){
            myList.pop_front();
        }
        else
        {
            myList.erase(next(myList.begin(),x));
        }
    }
    for(auto it = myList.begin(); it != myList.end(),it++)
    {

    }

    cout<<endl;
    myList.reverse();
    for(int i:myList)
    {
        cout<< i<<" ";
    }
    



    }

    
    return 0;

}

