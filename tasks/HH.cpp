#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;

    vector<vector<ll>> keys(n + 1);
    for (ll i = 1; i < n; ++i) {
        ll mi;
        cin >> mi;
        keys[i].resize(mi);
        for (ll j = 0; j < mi; ++j) {
            cin >> keys[i][j];
        }
        sort(keys[i].begin(), keys[i].end()); 
    }
    vector<bool> visited(n + 1, false);
    vector<ll> parent(n + 1, -1);
    queue<ll> q;

    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        ll curr = q.front();
        q.pop();

        for (ll nei : keys[curr]) {
            if (!visited[nei]) {
                visited[nei] = true;
                parent[nei] = curr;
                q.push(nei);

                if (nei == n) break; 
            }
        }
    }
    if (!visited[n]) {
        cout << "-1\n\n";
        return;
    }
    vector<ll> path;
    for (ll node = n; node != -1; node = parent[node]) {
        path.push_back(node);
    }
    reverse(path.begin(), path.end());
    cout << path.size() - 1 << '\n';
    for (size_t i = 0; i + 1 < path.size(); ++i) {
        cout << path[i] << ' ';
    }
    cout << "\n\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
