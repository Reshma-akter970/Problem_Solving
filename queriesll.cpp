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
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void insert_at_head(Node* &head,int val)
{
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;

}
int size(Node* head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;

}
void deletell(Node*head,int pos)
{
    Node*temp=head;
    for(int m=1;m<pos-1;m++)
    {
        temp=temp->next;
    }
    Node *deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}
void deletehead(Node*&head)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
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
    int x;
    cin>>val>>x;
    if(x==0)
    {
        insert_at_head(head,val);
       
    }
    else if(x==1)
    {
        insert_tail(head,tail,val);

    }
    else{
        if(val<size(head)){
            deletell(head,val);
            
        }
    }
    printll(head);
    }
    return 0;

}