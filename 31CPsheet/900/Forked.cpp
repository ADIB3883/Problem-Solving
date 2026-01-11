#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

void solve() {
    ll i, j, k, n, m, f = 0, t, x, y, z;
    string p;
    ll a, b;
    cin >> a >> b;

    vector<pair<ll, ll>> mo = {
        {0, 0}, {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {-b, a}, {b, -a}, {-b, -a}
    };

    set<pair<ll, ll>> ans;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    for (auto nn : mo) {
        x = x1 + nn.first;
        y = y1 + nn.second;

        for (auto nnn : mo) {
         ll xx = x + nnn.first;
         ll yy = y + nnn.second;

            if (make_pair(xx, yy) == make_pair(x2, y2)) {
                ans.insert({x, y});  // Correctly store the intermediate points
            }
        }
    }

    cout << ans.size() << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
