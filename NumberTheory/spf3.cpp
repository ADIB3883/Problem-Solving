///https://www.codechef.com/problems/COUNTN
///15=3x5, primes less than equal to smallest prime factor of k -> 2,3.now,2x15=30,3x15=45

#include<bits/stdc++.h>
#define ll long long int
#define vsort(v) sort(v.begin(),v.end())
#define vrsort(v) sort(v.rbegin(),v.rend())
using namespace std;
const int mxx=1e6+3;
vector<ll>primes;
ll spf[mxx];
void sieve()
{
    for(ll i=2; i<mxx; i++)
    {
        spf[i]=i;
    }
    for(ll i=2;i*i<mxx;i++)
    {
        if(spf[i]==i)
        {
            for(ll j=i*i;j<mxx;j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
    for(ll i=2;i<mxx;i++)
    {
        if(spf[i]==i)primes.push_back(i);
    }
}
int main()
{
    ll t;
    sieve();
    cin>>t;
     ll i,a,b,j,k,m,n;
     ll syz=primes.size();
     syz++;
    vector<ll>psum(syz);
    partial_sum(primes.begin(),primes.end(),psum.begin()+1);
    while(t--)
    {
    ll i,a,b,j,k,m,n;
    cin>>n;
    ll nop=lower_bound(primes.begin(),primes.end(),spf[n])-primes.begin();
    ll ans=psum[nop+1]*n;
    cout<<ans<<'\n';
    }


}


