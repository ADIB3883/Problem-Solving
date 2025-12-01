#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    map<ll, ll> xx, yy;
    
    for (pair<ll, ll>& point : v) {
        cin >> point.first >> point.second;
        xx[point.first]++;
        yy[point.second]++;
    }
    
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    
    ll ans = INT64_MAX;
    
    for (pair<ll, ll>& point : v) {
        ll x = point.first;
        ll y = point.second;
        
        xx[x]--;
        yy[y]--;
        
        if (xx[x] == 0) xx.erase(x);
        if (yy[y] == 0) yy.erase(y);
        
        ll left = xx.begin()->first;
        ll right = xx.rbegin()->first;
        ll up = yy.rbegin()->first;
        ll down = yy.begin()->first;
        
        ll tmp = (right - left + 1) * (up - down + 1);
        
        if (tmp == n - 1) {
            tmp = min((right - left + 2) * (up - down + 1),
                     (right - left + 1) * (up - down + 2));
        }
        
        ans = min(tmp, ans);
        
        xx[x]++;
        yy[y]++;
    }
    
    cout << ans << '\n';
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