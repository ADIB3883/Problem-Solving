#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
map<string, string> parent;
map<string, int> group_size;
int maxi = 1;
void dsu_initialize(string p) {
    parent[p] = "NULL";
    group_size[p] = 1;
}
string dsu_find(string node) {
    if (parent[node] == "NULL")
        return node;
    return parent[node] = dsu_find(parent[node]);
}
void dsu_union_by_size(string node1, string node2) {
    string leaderA = dsu_find(node1);
    string leaderB = dsu_find(node2);
    if (group_size[leaderA] > group_size[leaderB]) {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
        if (group_size[leaderA] > maxi) {
            maxi = group_size[leaderA];
        }
    }
    else {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
        if (group_size[leaderB] > maxi) {
            maxi = group_size[leaderB];
        }
    }
}

class Edge {
   public:
    string u, v;
    Edge(string u, string v) {
        this->u = u;
        this->v = v;
    }
};
int main() {
    int n, e;
    string p;
    while (1) {
        maxi = 1;
        parent.clear();
        group_size.clear();
        cin >> n >> e;
        if(n == 0 and e == 0)
            break;
        while (n--) {
            cin >> p;
            dsu_initialize(p);
        }
        int a, b;
        vector<Edge> edgeList;
        while (e--) {
            string u, v;
            cin >> u >> v;
            edgeList.push_back(Edge(u, v));
        }
        for (Edge ed : edgeList) {
            string leaderU = dsu_find(ed.u);
            string leaderV = dsu_find(ed.v);
            if (leaderU == leaderV) {
                continue;
            }
            else {
                dsu_union_by_size(ed.u, ed.v);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}