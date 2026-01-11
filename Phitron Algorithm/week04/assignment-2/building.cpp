#include <bits/stdc++.h>
using namespace std;

vector<int> parent;
vector<int> component_size;

class Edge {
public:
    int node_u, node_v, weight;
    Edge(int node_u, int node_v, int weight) {
        this->node_u = node_u;
        this->node_v = node_v;
        this->weight = weight;
    }
};

int find_leader(int node) {
    if (parent[node] == -1) {
        return node;
    }
    int leader = find_leader(parent[node]);
    parent[node] = leader;
    return leader;
}

void union_sets(int node_u, int node_v) {
    int leader_u = find_leader(node_u);
    int leader_v = find_leader(node_v);

    if (component_size[leader_u] > component_size[leader_v]) {
        parent[leader_v] = leader_u;
    } else if (component_size[leader_v] > component_size[leader_u]) {
        parent[leader_u] = leader_v;
    } else {
        parent[leader_u] = leader_v;
        component_size[leader_v]++;
    }
}

bool compare_edges(Edge e1, Edge e2) {
    return e1.weight < e2.weight;
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    parent = vector<int>(nodes, -1);
    component_size = vector<int>(nodes, 1);

    vector<Edge> edge_list;
    vector<bool> connected(nodes, false);

    while (edges--) {
        int node_u, node_v, weight;
        cin >> node_u >> node_v >> weight;
        node_u--;
        node_v--;
        edge_list.push_back(Edge(node_u, node_v, weight));
        connected[node_u] = true;
        connected[node_v] = true;
    }

    auto it = find(connected.begin(), connected.end(), false);
    if (it != connected.end()) {
        cout << "-1" << endl;
        return 0;
    }

    sort(edge_list.begin(), edge_list.end(), compare_edges);

    long long total_cost = 0;

    for (auto &edge : edge_list) {
        if (find_leader(edge.node_u) == find_leader(edge.node_v)) {
            continue;
        } else {
            union_sets(edge.node_u, edge.node_v);
            total_cost += edge.weight;
        }
    }

    cout << total_cost << endl;
}
