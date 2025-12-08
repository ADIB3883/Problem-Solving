///https://www.spoj.com/problems/NFACTOR/en/

#include<bits/stdc++.h>
#define ll long long int
#define vsort(v) sort(v.begin(),v.end())
#define vrsort(v) sort(v.rbegin(),v.rend())
using namespace std;
const int mxx=1e6+3;
ll prime[mxx];
vector<ll>arr[11];
void sieve()
{
    for(ll i=2; i<mxx; i++)
    {
        if(prime[i]==0)
        {
            for(ll j=i; j<mxx; j+=i)
            {
                prime[j]++;// increase count of distinct prime factors for j
            }
        }
    }
    for(ll i=1;i<mxx;i++)
    {
        arr[prime[i]].push_back(i);
    }
}
void solve()
{
    ll i,a,b,j,k,m,n;
    cin>>a>>b>>n;
    ll ansA=upper_bound(arr[n].begin(),arr[n].end(),a-1)-arr[n].begin();
    ll ansB=upper_bound(arr[n].begin(),arr[n].end(),b)-arr[n].begin();
    ll ans=ansB-ansA;
    cout<<ans<<'\n';
}
int main()
{
    ll t;
    sieve();
    cin>>t;
    while(t--)
    {
        solve();
    }

}


