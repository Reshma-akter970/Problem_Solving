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
void sortll(Node*head)
{
    for(Node*i=head;i->next!=NULL;i=i->next){
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}
void removeDuplicate(Node*head)
{
    Node*temp=head;
    while(temp->next!=NULL)
    {
        if(temp->val!=temp->next->val)
        {
        temp=temp->next;
        }
        else
        {
        Node *deleteNode=temp->next;
        temp->next=temp->next->next;
        delete deleteNode;
        }
        
        
        
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
    sortll(head);
    removeDuplicate(head);
    printll(head);
    return 0;
}