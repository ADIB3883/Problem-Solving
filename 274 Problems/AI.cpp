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
const ll INF=1e18;
void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   ll r;
   cin>>n>>m>>r;
   vector<ll>towns(r);
   for(i=0;i<r;i++)
   {
    cin>>towns[i];
    towns[i]--;
   }
   vector<vector<ll >> dist(n,vector<ll>(n,INF));
    for(i=0;i<n;i++)
    {
     dist[i][i]=0;
    }
    for(i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b>>c;
        a--;b--;
        dist[a][b]=min(dist[a][b],(ll)c);
        dist[b][a]=min(dist[b][a],(ll)c);
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(dist[i][k]+dist[k][j] < dist[i][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }

    }
    sort(towns.begin(),towns.end());
    ll ans=INF;
    do
    {
        ll cur=0;
        for(i=0;i+1<r;i++)
        {
            cur+=dist[towns[i]][towns[i+1]];
        }
        ans=min(ans,cur);
    } while(next_permutation(towns.begin(),towns.end()));
    cout<<ans<<nl;
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