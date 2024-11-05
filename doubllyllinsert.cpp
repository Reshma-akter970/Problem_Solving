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
void insert_at_position(Node*head,int pos, int val)
{
    Node* newNode=new Node(val);
    Node* temp=head;
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    newNode->next->prev=newNode;
}
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
void print_reverse(Node* tail)
{
    Node*temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
    
}
int main()
{
    Node* head=new Node(20);
    Node* a=new Node(35);
    Node* b=new Node(56);
    Node* c=new Node(34);
    head->next=a;
    a->next=b;
    a->prev=head;
    b->next=c;
    b->prev=a;
    c->prev=b;
    Node* tail=c;
    int val,pos;
    insert_at_position(head,2, 100);
    printdl(head);
    print_reverse(tail);
    return 0;
}