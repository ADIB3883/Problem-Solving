
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
#define Case(a) cout<<"Case "<<a<<": "
#define CaseN(a) cout<<"Case "<<a<<": "
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll  int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
#define nl '\n'
using namespace std;
const ll mxx=1e6+3;
ll prime[mxx];
vector<ll>arr[11];
void sieve()
{
    for(ll i=2;i<mxx;i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i;j<mxx;j+=i)
            {
                prime[j]++;
            }
        }
    }
    for(ll i=1;i<mxx;i++)
    {
        arr[prime[i]].pb(i);
    }
}
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    ll a,b;
    cin>>a>>b>> n;
    ll ansA=upper_bound(arr[n].begin(),arr[n].end(),a-1)-arr[n].begin();
     ll ansB=upper_bound(arr[n].begin(),arr[n].end(),b)-arr[n].begin();
     ll ans=ansB-ansA;

     cout<<ans<<'\n';
          }
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    sieve();
    cin>>t;
  //  t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}



