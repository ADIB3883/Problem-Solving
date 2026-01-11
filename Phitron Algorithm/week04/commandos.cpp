#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1005;
vector<ll> v[N];
bool vis[N];
ll dis_src[N];
ll dis_des[N];

void bfs(ll s, ll track) {
    queue<ll> q;
    q.push(s);

    if (track == 1) {
        dis_des[s] = 0;
    } else {
        dis_src[s] = 0;
    }

    vis[s] = true;

    while (!q.empty()) {
        ll par = q.front();
        q.pop();

        for (ll child : v[par]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                if (track == 1) {
                    dis_des[child] = dis_des[par] + 1;
                } else {
                    dis_src[child] = dis_src[par] + 1;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, e;
    cin >> t;

    for (ll k = 1; k <= t; k++) {
        ll n;
        cin >> n >> e;

        for (ll i = 0; i < n; i++) {
            v[i].clear();
        }

        while (e--) {
            ll a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        for (ll i = 0; i < n; i++) {
            vis[i] = false;
            dis_src[i] = -1;
        }

        ll src, des;
        cin >> src >> des;

        bfs(src, 0);

        for (ll i = 0; i < n; i++) {
            vis[i] = false;
            dis_des[i] = -1;
        }

        bfs(des, 1);

        ll ans = -1;
        for (ll i = 0; i < n; i++) {
            if (dis_src[i] != -1 && dis_des[i] != -1) {
                ll val = dis_src[i] + dis_des[i];
                ans = max(ans, val);
            }
        }

        cout << "Case " << k << ": " << ans << '\n';
    }

    return 0;
}
