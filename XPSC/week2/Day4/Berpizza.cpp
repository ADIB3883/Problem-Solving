#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    set<pair<ll, ll>> s;
    multiset<pair<ll, ll>> ms;
    vector<ll> ans;
ll csno=1;
    for (ll i = 1; i <= t; i++) {
        ll type;
        cin >> type;

        if (type == 1) {
            ll money;
            cin >> money;
            s.insert({csno, money});
            ms.insert({money, -csno});
            csno++;
        } else if (type == 2) {
            auto it = s.begin();
            ll pos = it->first;
            ll money = it->second;
            ans.push_back(pos);
            s.erase(it);
            ms.erase(ms.find({money, -pos}));
        } else if (type == 3) {
            auto it = --ms.end();
            ll money = it->first;
            ll pos = -it->second;
            ans.push_back(pos);
            ms.erase(it);
            s.erase({pos, money});
        }
    }

    for (auto value : ans) {
        cout << value << " ";
    }
    cout << "\n";

    return 0;
}
