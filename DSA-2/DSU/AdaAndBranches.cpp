#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005; // Maximum nodes
const int MAXX = 100005; // Maximum weight

// DSU data structures
int parent[MAXN], componentSize[MAXN];

// DSU find function with path compression
int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

// DSU union function with union by size
void unite(int node1, int node2) {
 int leaderA = find(node1);
    int leaderB = find(node2);
    if (leaderA != leaderB) {
        if (componentSize[leaderA] > componentSize[leaderB])
        {
            parent[leaderB] = leaderA;
            componentSize[leaderA] += componentSize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            componentSize[leaderB] += componentSize[leaderA];
        }
    }
}

// Main function
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N, M, Q; // Input variables
    cin >> N >> M >> Q;

    // Initialize DSU
    for (int i = 0; i < N; i++) { // Assuming nodes are 0-indexed
        parent[i] = i;
        componentSize[i] = 1;
    }

    // Read edges
    vector<tuple<int, int, int>> edges; // Store as (weight, node1, node2)
    for (int i = 0; i < M; i++) {
        int a, b, x;
        cin >> a >> b >> x;
        edges.push_back(make_tuple(x, a, b));
    }

    // Sort edges by weight in descending order
    sort(edges.rbegin(), edges.rend());

    // Read queries
    vector<tuple<int, int, int>> queries; // Store as (weight, node, index)
    vector<int> result(Q);
    for (int i = 0; i < Q; i++) {
        int a, y;
        cin >> a >> y;
        queries.push_back(make_tuple(y, a, i));
    }

    // Sort queries by weight in descending order
    sort(queries.rbegin(), queries.rend());

    // Process queries
    int idx = 0; // Tracks edges added
    for (int i = 0; i < (int)queries.size(); i++) {
        int y = get<0>(queries[i]);
        int a = get<1>(queries[i]);
        int qid = get<2>(queries[i]);

        // Add all edges with weight >= current query weight
        while (idx < M && get<0>(edges[idx]) >= y) {
            int u = get<1>(edges[idx]);
            int v = get<2>(edges[idx]);
            unite(u, v);
            idx++;
        }
        // Result for the current query
        result[qid] = componentSize[find(a)];
    }

    // Output results
    for (int i = 0; i < Q; i++) {
        cout << result[i] << '\n';
    }

    return 0;
}
