#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*next;
        Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void printdl(Node* head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_tail(Node *&head,Node* &tail, int val)
{
    Node* newNode=new Node(val);
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
    int cnt;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void palindrome(Node * head, Node* tail)
{
    Node * i= head;
    Node * j=tail;
    int flag=1;
    while(i!=j)
    {
        if(i->val!=j->val)
        {
            flag=0;
        }
        i=i->next;
        j=j->prev;
    }
    if (flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    palindrome(head, tail);
    
    return 0;
}