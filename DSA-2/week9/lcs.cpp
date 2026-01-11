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

vector<vector<ll>> mm(500, vector<ll>(500, -1));
vector<vector<ll>> dp(500, vector<ll>(500, -1));

ll lcs3(string &s1, string &s2, ll n1, ll n2) {
    for (ll i = 0; i <= n1; i++) {
        for (ll j = 0; j <= n2; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n1][n2];
}

string printLCS(string &s1, string &s2, ll n1, ll n2) {
    string lcs;
    ll i = n1, j = n2;
    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            lcs.push_back(s1[i - 1]);
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }
    reverse(lcs.begin(), lcs.end());
    return lcs;
}

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    ll n1 = s1.size();
    ll n2 = s2.size();
    ll ans = lcs3(s1, s2, n1, n2);
    string lcs = printLCS(s1, s2, n1, n2);
    cout << "Length of LCS: " << ans << '\n';
    cout << "LCS: " << lcs << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}