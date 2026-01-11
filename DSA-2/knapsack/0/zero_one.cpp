#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
///#include "debugger.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

#define dlwlrma ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define line cout << '\n'
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define all(arr) (arr).begin(),(arr).end()
#define rall(arr) (arr).rbegin(),(arr).rend()
#define p(ans) cout<<(ans)<<'\n'
#define pll pair<ll,ll>
#define f first
#define s second
#define ld long double
#define printdec cout<<fixed<<setprecision
const ll N=1e2+5,M=1e6+5;
ll n,w;
ll dp[N][M],wt[N],val[N];


void solve(){
    cin>>n>>w;
    memset(dp,0,sizeof(dp));
    for(ll i=1;i<=n;i++){
        cin>>wt[i]>>val[i];
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=w;j++){
            if(j-wt[i]>=0){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i]]+val[i]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    p(dp[n][w]);
}

signed main()
{
    dlwlrma
    ll t=1;
    //cin>>t;
    for(ll i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<": ";
        solve();
    }
}