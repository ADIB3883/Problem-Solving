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
        this->left = NULL;
        this->right = NULL;
    }
};
node* ip_tree()
{
    int val;
    cin >> val;
    node *root;
    if (val == -1) root = NULL;
    else root = new node(val);

    queue<node *> q;
    if (root) q.push(root);

    while (!q.empty())
    {
        node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        node *newleft;
        node *newright;
        if (l == -1)
            newleft = NULL;
        else
            newleft = new node(l);
        if (r == -1)
            newright = NULL;
        else
            newright = new node(r);

        p->left = newleft;
        p->right = newright;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int sum(node *root)
{
    if (root == NULL) return 0;

    if (root->left == NULL && root->right == NULL)
    {
        return 0;
    }
    else
    {
        int sum_left = sum(root->left);
        int sum_right = sum(root->right);
        return root->val + sum_left + sum_right;
    }
}
int main()
{
    node *root = ip_tree();
    cout << sum(root) << endl;
    return 0;
}
