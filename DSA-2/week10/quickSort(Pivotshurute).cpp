#include <bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(), vc.end())
#define vrsort(vc) sort(vc.rbegin(), vc.rend())
#define srev(st) reverse(st.rbegin(), st.rend())
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define yes cout << "yes\n"
#define no cout << "no\n"
#define Case(a) cout << "Case " << a << ":"
#define CaseN(a) cout << "Case " << a << ":"
#define psum(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1)
#define pxor(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1, [](ll x, ll y) { return x ^ y; })
#define pgcdLeft(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1, [](ll x, ll y) { return __gcd(x, y); })
#define pgdcRight(vc, sm) partial_sum(vc.rbegin(), vc.rend(), sm.begin() + 1, [](ll x, ll y) { return __gcd(x, y); })
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
vector<ll> arr;
ll partition(ll l, ll r) {
    ll A = l;
    ll pivot = arr[l];
    for (ll j = l+1; j < r; j++) {
        if (arr[j] > pivot) continue;
        swap(arr[j], arr[A]);
            A++;
    }
    swap(arr[A +1], arr[r]);
    return A +1;
}

void quickSort(ll p, ll r) {
    if (p >= r) return;
    ll q = partition(p, r);
    quickSort(p, q - 1);
    quickSort(q + 1, r);
}

void solve() {
    ll i, n;
    cin >> n;
    arr.resize(n + 1);
    cout << "akhdqwiugdqkskndlksnanjdsqa" << '\n';
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Ei nao unsorted" << '\n';
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
    quickSort(0, n - 1);
    cout << "Ei nao sorted:" << '\n';
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    cout<<"sdjwoihdwidm"<<'\n';
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
