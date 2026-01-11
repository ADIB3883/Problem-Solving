#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<bool>> adj(N, vector<bool>(N, false));
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        x--; y--; 
        adj[x][y] = adj[y][x] = true;
    }
    int maxSize = 0;
    for (int mask = 1; mask < (1 << N); mask++) {
        vector<int> nodes;
        for (int i = 0; i < N; i++) {
            if (mask & (1 << i)) nodes.push_back(i);
        }
        bool clique = true;
        for (int i = 0; i < nodes.size(); i++) {
            for (int j = i + 1; j < nodes.size(); j++) {
                if (!adj[nodes[i]][nodes[j]]) {
                    clique = false;
                    break;
                }
            }
            if (!clique) break;
        }

        if (clique) maxSize = max(maxSize, (int)nodes.size());
    }

    cout << maxSize << endl;
    return 0;
}
