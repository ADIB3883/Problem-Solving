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
#define Case(a) cout<<"Case "<<a<<":"
#define CaseN(a) cout<<"Case "<<a<<":"
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
//template<typename T>void read (vector<T>&v){for(auto&x:v)cin>>x;}
using namespace std;
const ll mod=998244353;
vector<ll>pow2;
const ll N=1e5+5;
vector<ll>pre(N,0);
void prec()
{
    pre[0]=1;
    for(ll i=1;i<N;i++)
    {
        pre[i]=(pre[i-1]*2)%mod;
    }
}
void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   cin>>n;
   vector<ll>p(n),q(n),ans(n);
    for(i=0;i<n;i++)
    {
     cin>>p[i];
    }
    for(i=0;i<n;i++)
    {
     cin>>q[i];
    }
    ll mxp=-1,mxq=-1,mxpID=-1,mxqID=-1;
    for(i=0;i<n;i++)
    {
        if(p[i]>mxp)
        {
            mxp=p[i];
            mxpID=i;
        }
        if(q[i]>mxq)
        {
            mxq=q[i];
            mxqID=i;
        }
        if(mxp>mxq)
        x=mxp,y=q[i-mxpID];
        else if(mxq>mxp)
        x=mxq,y=p[i-mxqID];
        else 
        {
            ll y1=q[i-mxpID];
            ll x2=p[i-mxqID];
            if(y1>=x2)
            {
                x=mxp;
                y=y1;
            }
            else{
                x=mxq;
                y=x2;
            }
        }
        k= (pre[x]+pre[y])%mod;
        cout<<k%mod<<" ";
    }
    cout<<'\n';

}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
 //  t=1;
 prec();
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}