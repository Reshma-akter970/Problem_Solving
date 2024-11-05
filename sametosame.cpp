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
int sizell(Node*head)
{
    Node*temp=head;
    int s=0;
    while(temp!=NULL)
    {
        s++;
        temp=temp->next;
    }
    return s;
    
}
void samasame(Node*head1,Node*head2)
{
    int s1=sizell(head1);
    int s2=sizell(head2);
    Node*temp1=head1;
    Node*temp2=head2;
    int flag=0;
    if(s1==s2){
        while(temp1!=NULL and temp2!=NULL){
            if(temp1->val!=temp2->val)
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"No"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
int main()
{
    Node*head1=NULL;
    Node*tail1=NULL;
    int val1;
    while(true)
    {
        cin>>val1;
        if(val1==-1)
        break;
        insert_tail(head1,tail1,val1);
    }
    Node*head2=NULL;
    Node*tail2=NULL;
    int val2;
    while(true)
    {
        cin>>val2;
        if(val2==-1)
        break;
        insert_tail(head2,tail2,val2);
    }
    return 0;

}