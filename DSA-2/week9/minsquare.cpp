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
const ll N = 1e5 + 5;
ll dp[N];
ll sol(ll n)
{
    if (n==0)
        return 0;
    ll ans=1e18;
    for(ll i=1;i*i<=n;i++)
    {
        ans=min(ans,1+sol(n-i*i));
    }
    return ans;
}
void dpp()
{
    ll q;
    for (ll i = 1; i <= N; i++)
    {
      ll w=sqrt(i);
      if(w*w==i)
      {
          q = i;
        dp[i] = 1;
      }
    else
    {
        dp[i] = 1 + dp[i - q];
    }
    }
}
void solve()
{
    ll i, j, k, n, m, c = 0, s = 0, f = 0, t, x, y, z;
    string p;
    cin >> n;
    dpp();
    cout << sol(n) << '\n';
    cout<< dp[n]<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}