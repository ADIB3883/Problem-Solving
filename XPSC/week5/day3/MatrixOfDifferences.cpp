#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve() {
    ll n;
    cin >> n;

    ll mx = n * n;
    ll mn = 1;
    bool flag = false;
    vector<vector<ll>> arr(n, vector<ll>(n));

    for (ll i = 0; i < n; i++) {
        if (!flag) {
            for (ll j = 0; j < n; j++) {
                if (j % 2 == 0) {
                    arr[i][j] = mx;
                    mx--;
                } else {
                    arr[i][j] = mn;
                    mn++;
                }
            }
        } else {
            for (ll j = n - 1; j >= 0; j--) {
                if (j % 2 == 1) {
                    arr[i][j] = mx;
                    mx--;
                } else {
                    arr[i][j] = mn;
                    mn++;
                }
            }
        }
        flag = !flag;
    }


    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
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
