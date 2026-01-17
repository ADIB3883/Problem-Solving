#include <bits/stdc++.h>
using namespace std;
const int N = 30005; // Maximum limit for students
int parent[N], group_size[N];

// DSU Initialization
void dsu_initialize(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;        // Each student is their own parent
        group_size[i] = 1;    // Each group starts with size 1
    }
}

// DSU Find with Path Compression
int dsu_find(int node) {
    if (parent[node] == node) return node;
    return parent[node] = dsu_find(parent[node]);
}

// DSU Union by Size
void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (leaderA != leaderB) {
        if (group_size[leaderA] > group_size[leaderB]) {
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        } else {
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

int main() {
    int n, e;
    while (true) {
        cin >> n >> e;
        if (n == 0 && e == 0) break;

        dsu_initialize(n);  // Initialize DSU for all students

        while (e--) {
            int k;
            cin >> k;
            vector<int> group(k);  // Store the group members

            for (int i = 0; i < k; i++) {
                cin >> group[i];
            }

            // Union all members in the group
            for (int i = 1; i < k; i++) {
                dsu_union_by_size(group[0], group[i]);
            }
        }

        // Output number of suspects in the same group as student 0
        cout << group_size[dsu_find(0)] << endl;
    }

    return 0;
}
