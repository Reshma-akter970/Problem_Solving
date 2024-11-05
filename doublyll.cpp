#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* prev;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void printHeadtoTail(Node*head)
{
    Node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->val<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
void printTailtoHead(Node*tail)
{
    Node* curr=tail;
    while(curr!=NULL)
    {
        cout<<curr->val<<" ";
        curr=curr->prev;
    }
}

int main()
{
    Node* head=new Node(10);
    Node* p=new Node(30);
    Node* q=new Node(50);
    Node* tail=q;
    head->next=p;
    p->prev=head;
    p->next=q;
    q->prev=p;
    printHeadtoTail(head);
    printTailtoHead(tail);
    return 0;

}