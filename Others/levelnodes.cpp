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
void print_level_nodes(node* root, int p)
{
    if (!root)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<node*> q;
    q.push(root);
    int cur_level = 0;
    while (!q.empty())
    {
        int level_size = q.size();
        if (cur_level == p)
        {
            for (int i = 0; i < level_size; i++)
            {
                node* cur = q.front();
                q.pop();
                cout << cur->val << " ";
            }
            cout << endl;
            return;
        }
        for (int i = 0; i < level_size; i++)
        {
            node* cur= q.front();
            q.pop();
            if (cur->left) q.push(cur->left);
            if (cur->right) q.push(cur->right);
        }
        cur_level++;
    }
    cout << "Invalid" << endl;
}
int main()
{
    node *root = ip_tree();
    int p;
    cin >> p;
    print_level_nodes(root, p);
    return 0;
}
