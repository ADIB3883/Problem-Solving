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
const ll mxx=1e7+3;
bool prime[mxx];
void sieve()
{
    for(ll i=2;i<mxx;i++)
    {
        prime[i]=true;
    }
    for(ll i=2;i*i<mxx;i++)
    {
        if(prime[i])
        {
            for(ll j=i*i;j<mxx;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
vector<ll>afraidNums;
void afraid()
{
    for(ll i=1;i<mxx;i++)
    {
        ll tmp=i*i*i*i;
        if(tmp>=mxx)break;
        for(ll j=1;j<mxx;j++)
        {
            ll tmp2=tmp+j*j;
            if(tmp2>=mxx)break;
            if(prime[tmp2])
            {
                afraidNums.pb(tmp2);
                prime[tmp2]=false;
            }
        }
    }
    vsort(afraidNums);
}
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    cin>>n;
    ll ans=upper_bound(afraidNums.begin(),afraidNums.end(),n)-afraidNums.begin();
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    sieve();
    afraid();
    cin>>t;
  //  t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}



