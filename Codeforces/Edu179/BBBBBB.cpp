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
#define pxor(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1, [](LL x, LL y) { return x ^ y; })
#define pgcdLeft(vc, sm) partial_sum(vc.begin(), vc.end(), sm.begin() + 1, [](LL x, LL y) { return __gcd(x, y); })
#define pgdcRight(vc, sm) partial_sum(vc.rbegin(), vc.rend(), sm.begin() + 1, [](LL x, LL y) { return __gcd(x, y); })
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
vector<ll> fib;
void prec()
{
    fib.push_back(1);
    fib.push_back(1);
    for (ll i = 2; i <= 12; i++)
    {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
}
void solve()
{
    ll i, j, k, n, m, c = 0, s = 0, f = 0, t, x, y, z;
    string p;
    cin >> n >> m;
    // for(i=0;i<12;i++)
    // {
    //     cout<<"fib"<<i<<" "<<fib[i]<<" \n";
    // }
    // cout<<'\n';
    for (i = 0; i < m; i++)
    {
        ll w, l, h;
        cin >> w >> l >> h;
        if (w < fib[n] || l < fib[n] || h < fib[n])
        {
            cout << 0;
        }
        else
        {
            ll mx = max({w, l, h});
            ll rem = mx - fib[n];
         //   cout<<" mx "<<mx<<" rem "<<rem<<" fib[n] "<<fib[n]<<" fib[n-1] "<<fib[n-1]<<'\n';
            if (rem >= fib[n - 1])
                cout << 1;
            else
                cout << 0;
        }
    }
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    prec(); // Precompute Fibonacci numbers
    ll t;
    // t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}