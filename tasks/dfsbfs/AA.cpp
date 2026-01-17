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
void dfs(ll vertex,ll parent_color)
{
    vis[vertex]=true;
    if(colors[vertex]!=parent_color)
    {
        parent_color=colors[vertex];
        ans++;
    }
    for(ll child : v[vertex])
    {
        if(!vis[child])
        {
            dfs(child,parent_color);
        }
    }
}
void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   cin>>n;
   v.resize(n+1);
   colors.resize(n+1);
   vis.resize(n+1,false);
   for(i=2;i<=n;i++)
   {
    ll vertex;
    cin>>vertex;
    v[i].push_back(vertex);
    v[vertex].push_back(i);
   }
   for(i=1;i<=n;i++)
   {
    ll cl;
    cin>>cl;
    colors[i]=cl;
   }
   dfs(1,0);
   cout<<ans<<'\n';
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