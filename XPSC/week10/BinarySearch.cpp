#include<bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define srev(st) reverse(st.rbegin(),st.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define ll long long int
#define nl '\n'
using namespace std;

void solve() {
    ll i, n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (i = 0; i < n; i++) {
        cin >> v[i];
    }
    vsort(v); // Sort the vector

    while (k--) {
        ll a;
        cin >> a;
        ll l = 0, r = n - 1;
        bool flag = false;

        while (l <= r) {
            ll mid = (l + r) / 2; // Recalculate mid in every iteration
            if (a == v[mid]) {
                flag = true;
                break;
            } else if (a < v[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (flag) {
            YES;
        } else {
            NO;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
