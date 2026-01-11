#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
map<int, int> parent, group_size;
int maxi;

void dsu_initialize(int p) {
    parent[p] = -1;
    group_size[p] = 1;
}

int dsu_find(int node) {
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (leaderA == leaderB) return;
    if (group_size[leaderA] < group_size[leaderB]) 
        swap(leaderA, leaderB);
    
    parent[leaderB] = leaderA;
    group_size[leaderA] += group_size[leaderB];
    maxi = max(maxi, group_size[leaderA]);
}

int main() {
    int n, e, t;
    cin >> t;
    while (t--) {
        maxi = 1;
        parent.clear();
        group_size.clear();

        cin >> n >> e;
        for (int i = 1; i <= n; i++) {
            dsu_initialize(i);
        }

        vector<pair<int, int>> edgeList;
        for (int i = 0; i < e; i++) {
            int u, v;
            cin >> u >> v;
            edgeList.push_back({u, v});
        }

        for (auto ed : edgeList) {
            int leaderU = dsu_find(ed.first);
            int leaderV = dsu_find(ed.second);
            if (leaderU != leaderV) {
                dsu_union_by_size(ed.first, ed.second);
            }
        }

        cout << maxi << endl;
    }
    return 0;
}
