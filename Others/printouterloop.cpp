#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
node* ip_tree()
{
    int val;
    cin>>val;
    node *root;
    if(val==-1) root=NULL;
    else root=new node(val);
    queue<node *>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        node *p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node *nl;
        node *nr;
        if(l==-1)
            nl=NULL;
        else
            nl=new node(l);
        if(r==-1)
            nr=NULL;
        else
            nr=new node(r);

        p->left=nl;
        p->right=nr;
        if(p->left)
         q.push(p->left);
         if(p->right)
            q.push(p->right);
    }
    return root;
}
/*void level_order_tarversal(node *root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node *f = q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left!=NULL)
        q.push(f->left);
        if(f->right!=NULL)
        q.push(f->right);
    }
}*/
void outer_tree_left(node *root,vector<int>&ans)
{
    if(root==NULL) return;
    ans.push_back(root->val);
    if(root->left)
    outer_tree_left(root->left,ans);
    else if(root->right)
    outer_tree_left(root->right,ans);
}
void outer_tree_right(node *root,vector<int>&ans)
{
    if(root==NULL) return;
    ans.push_back(root->val);
    if(root->right)
    outer_tree_right(root->right,ans);
    else if(root->left)
    outer_tree_right(root->left,ans);
}
int main()
{
    node *root =  ip_tree();
    vector<int>ans;
    ans.push_back(root->val);
    outer_tree_left(root->left,ans);
    reverse(ans.begin(),ans.end());
    outer_tree_right(root->right,ans);
    for(auto val:ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
