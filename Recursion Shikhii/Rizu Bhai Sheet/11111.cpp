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
vector<ll>v;
ll w=0;
bool flag;
void  recur(ll a,ll b)
{
    if(a==b)
    {
        flag=true;
        cout<<"YES\n";
        return;

    }
    else if(a>b)
    {
                flag=false;
        cout<<"NO\n";
        return;
    }
    if(b%2==1 && b%10!=1)
    {
        flag=false;
        cout<<"NO\n";
        return;
    }
    else
    {
        if(b%2==0)
        {
            b/=2;
            v.push_back(b);
            w++;
            recur(a,b);
        }
        else
        {
            b=b-1;
            b/=10;
            v.pb(b);
            w++;
            recur(a,b);
        }
    }
}
void solve()
{
    ll i,j,k,n,m,s=0,f=0,t,x,y,z;
    string p;
    ll a,b;
    cin>>a>>b;
    w++;
    v.pb(b);
    recur(a,b);
    if(flag)
    {
            reverse(v.begin(),v.end());
            cout<<w<<nl;
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<nl;
    }


}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
   // cin>>t;
    t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

