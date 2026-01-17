#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
map<int, int> parent;
map<int, int> group_size;
int maxi = 1;
void dsu_initialize(int p) {
    for(int i=1;i<=p;i++)
    {
        parent[i] = i;
        group_size[i] = 1;
    }

}
int dsu_find(int node) {
    if (parent[node] == node)
        return node;
    return parent[node] = dsu_find(parent[node]);
}
void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
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
    int u, v;
    Edge(int u, int v) {
        this->u = u;
        this->v = v;
    }
};
int main() {
    int n, e;
    int p;
    int tc=1;
    while (1) {
        maxi = 1;
        parent.clear();
        group_size.clear();
        cin >> n >> e;
        if(n == 0 and e == 0)
        break;
        dsu_initialize(n);
        int a, b;
        vector<Edge> edgeList;
        while (e--) {
            int u, v;
            cin >> u >> v;
            edgeList.push_back(Edge(u, v));
        }
        for (Edge ed : edgeList) {
            int leaderU = dsu_find(ed.u);
            int leaderV = dsu_find(ed.v);
            if (leaderU == leaderV) {
                continue;
            }
            else {
                dsu_union_by_size(ed.u, ed.v);
            }
        }
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            if(parent[i] == i)
            {
                sum++;
            }
        }
        cout<<"Case "<<tc++<<": "<<sum<<'\n';
    }
    return 0;
}