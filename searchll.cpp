#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node* &head, Node*&tail, int val)
{
    Node * newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
void serachll(Node*head,int x)
{
    Node*temp=head;
    int pos=0;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->val==x)
        {
            flag=1;
            
        }
        else{
            flag=0;
        }
        pos++;
        temp=temp->next;
    }
    if(flag==1)
    {
        cout<<pos<<endl;
    }
    else{
        cout<<"-1";
    }
}
void printll(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        break;
        insert_tail(head,tail,val);
    }
    int x;
    cin>>x;
    }
    return 0;

}