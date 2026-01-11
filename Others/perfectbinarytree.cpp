#include <bits/stdc++.h>
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
        node *nl;
        node *nr;
        if (l == -1)
            nl = NULL;
        else
            nl = new node(l);
        if (r == -1)
            nr = NULL;
        else
            nr = new node(r);

        p->left = nl;
        p->right = nr;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int cal_depth(node* root)
{
    if (!root) return 0;

    queue<node*> q;
    q.push(root);
    int depth = 0;

    while (!q.empty())
    {
        int level_size = q.size();
        depth++;
        for (int i = 0; i < level_size; i++)
        {
            node* cur = q.front();
            q.pop();
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
    }

    return depth;
}
int count_nodes(node* root)
{
    if (!root) return 0;
    return 1 + count_nodes(root->left) + count_nodes(root->right);
}
int main()
{
    node *root = ip_tree();
    int depth = cal_depth(root);
    int total_nodes = count_nodes(root);

    int perfect_binary_nodes = pow(2, depth) - 1;

    if (total_nodes == perfect_binary_nodes)
    {
        cout << "YES" << endl;
    }    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
