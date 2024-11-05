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
    
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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
    if (head==NULL)
    {
        return;
    }
    Node *temp=head;
    for(int m=1;m<=pos-1;m++)
    {
        temp=temp->next;
        if(temp==NULL)
            return;
    }
    if(temp->next==NULL)
    {
        return;
    }
    Node *deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}
void deletehead(Node*&head)
{
    if(head==NULL){
        return;
    }
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode; 
}
void printll(Node*head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    Node *head=NULL;
    Node *tail=NULL;
    for(int test=0;test<t;test++)
    {
   
    int val;
    int x;
    cin>>x>>val;
    if(x==0)
    {
        insert_at_head(head,val);
         
    }
    else if(x==1)
    {
        insert_tail(head,tail,val);
        
    }
    else{
   
        if(val==0){
            deletehead(head);
        }
        else
        {
            deletell(head,val);
        }
    }
     printll(head);   
    }
    
    return 0;

}