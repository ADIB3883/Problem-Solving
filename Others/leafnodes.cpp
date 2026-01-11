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
void collect_leaf_nodes(node *root, vector<int>& leaf_nodes)
{
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL)
    {

        leaf_nodes.push_back(root->val);
    }
    else
    {
        collect_leaf_nodes(root->left, leaf_nodes);
        collect_leaf_nodes(root->right, leaf_nodes);
    }
}
int main()
{
    node *root = ip_tree();
    vector<int> leaf_nodes;
    collect_leaf_nodes(root, leaf_nodes);

    sort(leaf_nodes.begin(), leaf_nodes.end(), greater<int>());
    for (int val : leaf_nodes)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
