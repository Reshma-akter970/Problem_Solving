#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
};
Node* input_tree()
{
    int vl;
    cin>>vl;
    Node* root;
    if(vl==-1) root=NULL;
    else root=new Node(vl);
    queue<Node*>q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* parent=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft;
        Node* myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);

        if(r==-1) myright=NULL;
        else myright=new Node(r);

        parent->left=myleft;
        parent->right=myright;
        
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;

}
void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<"TREE EMPTY"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
    Node* p=q.front();
    q.pop();

    cout<<p->val<<" ";

    if(p->left) q.push(p->left);
    if(p->right) q.push(p->right);
    }


}
int main()
{
Node* myRoot=input_tree();
level_order(myRoot);
return 0;
}