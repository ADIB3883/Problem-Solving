///https://www.spoj.com/problems/VECTAR8/en/
#include<bits/stdc++.h>
#define ll long long int
#define vsort(v) sort(v.begin(),v.end())
#define vrsort(v) sort(v.rbegin(),v.rend())
using namespace std;
const ll mxx=1e6+3;
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
vector<ll>nums[7];
void afraid()
{
    nums[0].push_back(0);
    ll power=1;
    for(ll i=1;i<=6;i++)
    {
        for(auto it: nums[i-1] )
        {
            for(ll j=1;j<=9;j++)
            {
                ll tmp=j*power+it;
                if(prime[tmp])
                {
                    nums[i].push_back(tmp);
                    afN.push_back(tmp);
                }
            }
        }
        power*=10;
    }
    //vsort(afN);
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
