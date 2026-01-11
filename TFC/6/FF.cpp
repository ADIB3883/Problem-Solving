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
using namespace std;
void solve() {
   dubb d,t,k,v,w;
   cin>>d>>t>>k>>v>>w;
   dubb x=k;
   bool ng=1;
   while(t)
   {
    if(ng)
    {
        dubb dis=d-x;
        dubb tm=dis/v;
        if(tm<=t)
        {
            t-=tm;
            x=d;
            v=v*w;
        }
        else
        {
            x+=(t*v);
            t=0;
        }
        ng=0;
    }
    else
    {
        dubb dis=x;
        dubb tm=dis/v;
        if(tm<=t)
        {
            t-=tm;
            x=0;
            v=v*w;
        }
        else
        {
            x-=(t*v);
            t=0;
        }
        ng=1;
    }
   }
   cout<<fixed<<setprecision(15)<<x<<'\n';
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   t=1;
   //cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}