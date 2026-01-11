#include<bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
const int mod=1e9+7;
ll recurr(ll p,ll n)
{
    if(n==0)
    {
        return 1;
    }
    ll half=recurr(2,n/2);
    ll result=(half*half);
    if(n&1)
    {
        result=(result*2);
    }
    return result;
}

void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    cin>>n>>m;
    if(n>31)
    {
        cout<<m<<'\n';
    }
    else
    {
        cout<<m%recurr(2,n)<<'\n';
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

