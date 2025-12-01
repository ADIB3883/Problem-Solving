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
using namespace std;
bool valid(vector<ll>&v,ll n,ll k)
{
    if(n%2==0)
    {
        for(ll i=1;i<n;i++)
        {
            if(v[i]-v[i-1]<=k)
            {
                i++;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        ll extra_cell=0;
        for(ll i=1;i<n;i++)
        {
            if(v[i]-v[i-1]<=k)
            {
                i++;
            }
            else
            {
                extra_cell++;
            }
        }
        if(extra_cell>1)
        {
            return false;
        }
        return true;
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,p,c=0,s=0,f=0,t,x,y;
    cin>>t;
    while(t--)
    {

    cin>>n;
    vector<ll>v(n);
                for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vsort(v);

    if(n==1)
    {
        cout<<1<<'\n';
    }
    else
    {
        ll ans=1e18;
        for(i=0;i<n-1;i++)
        {
            k=v[i+1]-v[i];
            if(valid(v,n,k))
            {
                ans=min(ans,k);
            }
            else
            {
                continue;
            }
        }
        cout<<ans<<'\n';
    }



    }

    return 0;
}

