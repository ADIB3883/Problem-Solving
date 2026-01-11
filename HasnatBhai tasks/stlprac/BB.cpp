#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

void solve() {
    ll n, s;
    cin >> n >> s;
    map<ll, ll> buy, sell;
    for (ll i = 0; i < n; ++i) {
        char type;
        ll price, qty;
        cin >> type >> price >> qty;
        if (type == 'B') buy[price] += qty;
        else sell[price] += qty;
    }

    vector<pair<ll, ll>> toPrintSell;
    for (auto it = sell.begin(); it != sell.end() && toPrintSell.size() < s; ++it) {
        toPrintSell.push_back(*it);
    }
    reverse(toPrintSell.begin(), toPrintSell.end());
    for (auto& p : toPrintSell) {
        cout << "S " << p.first << " " << p.second << nl;
    }

    ll count = 0;
    for (auto it = buy.rbegin(); it != buy.rend() && count < s; ++it, ++count) {
        cout << "B " << it->first << " " << it->second << nl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
