#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<vector<ll>> adj;
vector<ll> color;

bool isBipartite(int src) {
    queue<int> q;
    color[src] = 1;
    q.push(src);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (color[v] == -1) {
                color[v] = 1 - color[u];
                q.push(v);
            } else if (color[v] == color[u]) {
                return false;
            }
        }
    }
    return true;
}

void solve(ll num, ll n) {
    cout << "Scenario #" << num << ":\n";
    bool ok = true;
    color.assign(n + 1, -1); // reset colors

    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) {
            if (!isBipartite(i)) {
                ok = false;
                break;
            }
        }
    }

    if (ok) cout << "No suspicious bugs found!\n";
    else cout << "Suspicious bugs found!\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    for (ll cs = 1; cs <= t; cs++) {
        ll n, m;
        cin >> n >> m;
        adj.assign(n + 1, {}); // 1-based indexing

        for (int i = 0; i < m; i++) {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        solve(cs, n);
    }

    return 0;
}
