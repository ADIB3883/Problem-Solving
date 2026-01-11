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
struct Player
{
    ll rating, idx, hand;
};
void solve()
{
    ll i, j, k, n, m, c = 0, s = 0, f = 0, t, x, y, z;
    string p;
    cin >> n;
    vector<Player> pl(n);
    for (i = 0; i < n; i++)
    {
        cin >> pl[i].rating >> pl[i].hand;
        pl[i].idx = i;
    }
    /// Sort by rating
    sort(pl.begin(), pl.end(), [](auto &a, auto &b)
         { return a.rating < b.rating; });
    
    vector<ll> win(n), lose(n), draw(n);
    
    /// Process groups with same rating
    for (i = 0; i < n;)
    {
        j = i;
        while (j < n && pl[j].rating == pl[i].rating)
            j++;
        ll gs = j - i;
        /// Count hands in this rating group
        ll cnt[4] = {0};
        for (k = i; k < j; k++)
        {
            cnt[pl[k].hand]++;
        }
        for (k = i; k < j; k++)
        {
            ll idx = pl[k].idx;
            ll h = pl[k].hand;
            /// Rating based results
            win[idx] += i;        /// All lower ratings
            lose[idx] += (n - j); /// All higher ratings
            /// Draws : same rating, same hand (excluding self)
            draw[idx] += cnt[h] - 1;
            /// RPS rule among same rating
            if (h == 1)
            {
                /// Rock
                win[idx] += cnt[2];  /// Beats scissors
                lose[idx] += cnt[3]; /// Loses to paper
            }
            else if (h == 2)
            {
                /// Scissors
                win[idx] += cnt[3];  /// beats paper
                lose[idx] += cnt[1]; /// loses to rock
            }
            else
            {                        /// Paper
                win[idx] += cnt[1];  /// beats rock
                lose[idx] += cnt[2]; /// loses to scissors
            }
        }
        i = j;
    }
    /// Output
    for (i = 0; i < n; i++)
    {
        cout << win[i] << " " << lose[i] << " " << draw[i] << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t = 1;
    //   cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}