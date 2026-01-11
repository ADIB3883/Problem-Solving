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
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    cin>>n;
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v.pb(a);
    }
    cout<<1;
    ll q=0,mn=0,mx=v[0];
    for(i=1;i<n;i++)
    {
        if(v[i]>=mx && q==0)
        {
            cout<<1;
            mx=v[i];
        }
        else if(v[i]<=v[0] && q==0)
        {
            q=1;
            cout<<1;
            mn=v[i];
        }
        else if(v[i]<=v[0] && q==1)
        {
            if(mn<=v[i])
            {
                cout<<1;
                mn=v[i];
            }
            else
            {
                cout<<0;
            }
        }
        else
        {
            cout<<0;
        }
    }
    cout<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
   // t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

