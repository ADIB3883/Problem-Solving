#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Tree {
public:
    vector<vector<ll>> edges;
    vector<set<ll>> values;

    Tree(int n) {
        edges.resize(n + 1);
        values.resize(n + 1);
    }

    void addEdge(ll u, ll w) {
        edges[u].push_back(w);
        edges[w].push_back(u);
    }

    bool findPath(ll u, ll w, vector<ll>& path) {
        vector<bool> visited(edges.size(), false);
        stack<ll> s;
        s.push(u);
        vector<ll> parent(edges.size(), -1);

        while (!s.empty()) {
            ll curr = s.top();
            s.pop();

            if (curr == w) {
                while (curr != -1) {
                    path.push_back(curr);
                    curr = parent[curr];
                }
                reverse(path.begin(), path.end());
                return true;
            }

            if (!visited[curr]) {
                visited[curr] = true;
                for (ll child : edges[curr]) {
                    if (!visited[child]) {
                        s.push(child);
                        parent[child] = curr;
                    }
                }
            }
        }
        return false;
    }

    void insertValue(ll u, ll x) {
        values[u].insert(x);
    }

    void removeValue(ll u, ll x) {
        values[u].erase(x);
    }

    ll findSmallest(ll u, ll w, ll k) {
        vector<ll> path;
        if (!findPath(u, w, path)) {
            return -1;
        }

        vector<ll> combinedValues;
        for (ll node : path) {
            combinedValues.insert(combinedValues.end(), values[node].begin(), values[node].end());
        }

        sort(combinedValues.begin(), combinedValues.end());
        if (k <= combinedValues.size()) {
            return combinedValues[k - 1];
        } else {
            return -1;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    Tree tree(n);
    for (ll i = 0; i < m; i++) {
        ll u, w;
        cin >> u >> w;
        tree.addEdge(u, w);
    }

    ll q;
    cin >> q;
    while (q--) {
        string command;
        cin >> command;
        if (command == "insert") {
            ll u, x;
            cin >> u >> x;
            tree.insertValue(u, x);
        } else if (command == "delete") {
            ll u, x;
            cin >> u >> x;
            tree.removeValue(u, x);
        } else if (command == "find") {
            ll u, w, k;
            cin >> u >> w >> k;
            cout << tree.findSmallest(u, w, k) << endl;
        }
    }

    return 0;
}
