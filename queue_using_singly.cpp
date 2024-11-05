#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next; 
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int sz=0;
        void rear(int val)
        {
            sz++;
            Node* newNode=new Node(val);
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next=newNode;
            tail=tail->next;
        }
        void front()
        {
            sz--;
            Node* deleteNode=head;
            head=head->next;
            delete deleteNode;
            if(head==NULL)
            {
                tail=NULL;
            }
        }
        int top()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0)
            {
                return true;
            }
            else
            return false;
        }
};
int main()
{
    myQueue qu;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        qu.rear(x);
    }
    while(!qu.empty())
    {
        cout<<qu.top()<<endl;
        qu.front();
    }
    return 0;
}