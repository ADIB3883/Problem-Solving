#include<bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;
const int mod=10;
ll recurr(ll x,ll y)
{

    if(y==0)
    {
        return 1;
    }
    ll half=recurr(x,y/2)%mod;
    ll result=(half*half);
    if(y&1)
    {
        result=(result*x)%mod;  
    }
    return result;
}

void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    cin>>x>>y;
    ll q=recurr(x,y);
    q=q%10;
    cout<<q<<nl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
     solve();
    }
    cin>>t;
    return 0;
}

