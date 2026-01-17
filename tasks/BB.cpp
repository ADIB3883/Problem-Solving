#include<bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define srev(st) reverse(st.rbegin(),st.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define Case(a) cout<<"Case "<<a<<":"
#define CaseN(a) cout<<"Case "<<a<<":"
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](ll x,ll y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](ll x,ll y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](ll x,ll y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;

vector<ll> bribe;
vector<bool> vis;
vector<vector<ll>> graph;

ll dfs(ll node, ll &ans) {
    ans = min(ans, bribe[node]);
    vis[node] = true;
    for(size_t i = 0; i < graph[node].size(); ++i) {
        ll child = graph[node][i];
        if(!vis[child]) {
            dfs(child, ans);
        }
    }
    return ans;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    bribe.assign(n + 1, 0);
    vis.assign(n + 1, false);
    graph.assign(n + 1, vector<ll>());

    for(ll i = 1; i <= n; i++) {
        cin >> bribe[i];
    }
    for(ll i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    ll s = 0;
    for(ll i = 1; i <= n; i++) {
        if(!vis[i]) {
            ll ans = LLONG_MAX;
            s += dfs(i, ans);
        }
    }
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}