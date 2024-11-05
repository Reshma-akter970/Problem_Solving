#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<string>myList;
    string sentence;
    while(true)
    {
        getline(cin,sentence) ;
        if(sentence=="end")
        {
            break;
        }
        myList.push_back(sentence);
    }
    int t;
    string str1,str2;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        cin>>str1;
        if(str1=="visit")
        {
            cin>>str2;
            auto it=find(myList.begin(),myList.end(),str2);
            if(it== myList.end())
            {
                cout<<"Not Available"<<endl;
            }
            else{
                cout<<*it<<endl;
            }

        }
        else if(str1=="next")
        {
            auto it =find(myList.begin(),myList.end(),str1);
            if(it== myList.end())
            {
                cout<<"Not Available"<<endl;
                return ;
            }
            it++;
            cout<<*it<<endl;
            
        }
        else{
            auto it =find(myList.begin(),myList.end(),str1);
            if( it== 0)
            {
                cout<<"Not Available"<<endl;
                return ;
            }
            it--;
            cout<<*it<<endl;
        }
    }
    return 0;

}

