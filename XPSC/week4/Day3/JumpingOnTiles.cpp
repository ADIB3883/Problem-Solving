#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string p;
        cin >> p;
        ll n = p.size();
        vector<pair<char, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            v.push_back({p[i], i + 1});
        }
        char l = p[0], r = p[n - 1];
        if (l <= r)
        {
            sort(v.begin(), v.end());
        }
        else
        {
            sort(v.begin() + 1, v.end() - 1, greater<>());
        }
        vector<ll> path;
        for (ll i = 0; i < v.size(); i++)
        {
            char x = v[i].first;
            ll y = v[i].second;
            if (x >= min(l, r) && x <= max(l, r))
            {
                path.push_back(y);
            }
        }
        ll cost = abs(l - r);
        cout << cost << " " << path.size() << '\n';
        for (ll val : path)
        {
            cout << val << " ";
        }
        cout << '\n';
    }

    return 0;
}
