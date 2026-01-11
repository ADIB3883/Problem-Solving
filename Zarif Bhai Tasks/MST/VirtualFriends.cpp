#include <bits/stdc++.h>
using namespace std;

map<string, string> parent;
map<string, int> group_size;

void dsu_initialize(string p) {
    if (parent.find(p) == parent.end()) {
        parent[p] = p;
        group_size[p] = 1;
    }
}

string dsu_find(string node) {
    if (parent[node] == node)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

int dsu_union_by_size(string node1, string node2) {
    string leaderA = dsu_find(node1);
    string leaderB = dsu_find(node2);
    if (leaderA != leaderB) {
        if (group_size[leaderA] > group_size[leaderB]) {
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
            return group_size[leaderA];
        } else {
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
            return group_size[leaderB];
        }
    }
    return group_size[leaderA];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        parent.clear();
        group_size.clear();
        int e;
        cin >> e;
        while (e--) {
            string u, v;
            cin >> u >> v;
            dsu_initialize(u);
            dsu_initialize(v);
            int groupSize = dsu_union_by_size(u, v);
            cout << groupSize << endl;
        }
    }
    return 0;
}