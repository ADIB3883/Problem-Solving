#include <bits/stdc++.h>
using namespace std;
struct Node {
    long long minVal;
    int count;
};
vector<Node> tree;
vector<long long> arr;
// Combine two child nodes into one parent node
Node merge(Node left, Node right) {
    if (left.minVal < right.minVal)
        return {left.minVal, left.count};
    else if (right.minVal < left.minVal)
        return {right.minVal, right.count};
    else
        return {left.minVal, left.count + right.count};
}
void build(int idx, int l, int r) {
    if (l == r) {
        tree[idx] = {arr[l], 1};
        return;
    }
    int mid = (l + r) / 2;
    build(2 * idx, l, mid);
    build(2 * idx + 1, mid + 1, r);
    tree[idx] = merge(tree[2 * idx], tree[2 * idx + 1]);
}
void update(int idx, int l, int r, int pos, long long val) {
    if (l == r) {
        tree[idx] = {val, 1};
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid)
        update(2 * idx, l, mid, pos, val);
    else
        update(2 * idx + 1, mid + 1, r, pos, val);
    tree[idx] = merge(tree[2 * idx], tree[2 * idx + 1]);
}
Node query(int idx, int l, int r, int ql, int qr) {
    if (qr < l || ql > r)
        return {LLONG_MAX, 0}; // outside range
    if (ql <= l && r <= qr)
        return tree[idx];
    int mid = (l + r) / 2;
    Node left = query(2 * idx, l, mid, ql, qr);
    Node right = query(2 * idx + 1, mid + 1, r, ql, qr);
    return merge(left, right);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    arr.resize(n);
    tree.resize(4 * n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    build(1, 0, n - 1);
    while (m--) {
        int type;
        cin >> type;
        if (type == 1) {
            int i;
            long long v;
            cin >> i >> v;
            update(1, 0, n - 1, i, v);
        } else {
            int l, r;
            cin >> l >> r;
            Node ans = query(1, 0, n - 1, l, r - 1);
            cout << ans.minVal << " " << ans.count << "\n";
        }
    }
    return 0;
}
