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
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
#define nl '\n'
using namespace std;
const int maxN=(1LL<<15);
vector<ll>v;
bool isPal(ll x)
{
    string p=to_string(x);
    string q=p;
    reverse(p.begin(),p.end());
    if(p==q)
    {
        return true;
    }
    return false;
}
void markPal()
{
    for(ll i=0;i<maxN;i++)
    {
        if(isPal(i))
        {
            v.pb(i);
        }
    }
}
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    cin>>n;
    vector<ll>a(n),cnt(maxN+1);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    ll ans=n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<v.size();j++)
        {
            ll curr=(a[i]^v[j]);
            ans+=cnt[curr];
        }
    }
    cout<<(ans/2)<<nl;





}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    //t=1;
      markPal();
    while(t--)
    {
     solve();
    }
    return 0;
}

