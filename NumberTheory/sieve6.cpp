///https://www.spoj.com/problems/HS08PAUL/en/
#include<bits/stdc++.h>
#define ll int
#define vsort(v) sort(v.begin(),v.end())
#define vrsort(v) sort(v.rbegin(),v.rend())
using namespace std;
const int mxx=1e7+3;
bool prime[mxx];
void sieve()
{
    prime[0]=prime[1]=false;
    for(ll i=2; i<mxx; i++)
    {
        prime[i]=true;
    }
    for(ll i=2; i*i<=mxx; i++)
    {
        if(prime[i])
        {
            for(ll j=i*i; j<mxx; j+=i)
            {
                prime[j]=false;
            }
        }

    }
}
vector<ll>afN;
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
                afN.push_back(tmp2);
                prime[tmp2]=false;///to avoid duplicates
            }
        }
    }
    sort(afN.begin(),afN.end());
}
void solve()
{
    ll i,j,k,m,n;
    cin>>n;
    ll ans=upper_bound(afN.begin(),afN.end(),n)-afN.begin();
    cout<<ans<<'\n';
}
int main()
{
    ll t;
    sieve();
    afraid();
    cin>>t;
    while(t--)
    {
        solve();
    }

}

