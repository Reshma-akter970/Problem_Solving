#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node*next;
        Node*prev;
    Node(string val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
int  positionll(Node* head,string address)
{
    Node*temp=head;
    int pos=0;
    while(temp->val!=address)
    {
        pos++;
    }
    return pos;
}
void insert_at_tail(Node *&head,Node* &tail, string sen)
{
    Node* newNode=new Node(sen);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int size(Node* head)
{
    Node * temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string sen;
    while(true)
    {
        getline(cin ,sen);
        if(sen=="end")
        {
            break;
        }
        insert_at_tail(head,tail,sen);
    }
    int t;
    cin>>t;
    string strr;
    for(int test=0;test<t;test++)
    {
        getline(cin, strr);
    }
    return 0;
}