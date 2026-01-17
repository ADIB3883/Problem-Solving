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
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
vector<vector<ll > > v;
vector<ll> colors;
vector<bool>vis;
ll ans=0;
void dfs(ll vertex)
{
    vis[vertex]=true;
    ans++;
    for(ll child : v[vertex])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}
bool isTree(ll n,ll m)
{
    if(m!=(n-1))
    {
        return false;
    }
    dfs(1);
    return (ans==n);

}
void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   cin>>n>>m;
   v.resize(n+1);
   colors.resize(n+1);
   vis.resize(n+1,false);
   for(i=1;i<=m;i++)
   {
    ll ver,tex;
    cin>>ver>>tex;
    v[ver].push_back(tex);
    v[tex].push_back(ver);
   }
   if(isTree(n,m))
   {
    YES;
   }
   else
    {
     NO;
    }
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   t=1;
 //  cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}