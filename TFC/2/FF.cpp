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
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   cin>>n;
   vector<ll>v(n+2);
   for(i=1;i<=n;i++)
   {
    cin>>v[i];
   }
   ll ans=0,extra=0;
   for(i=1;i<=n;i++)
   {
    if(v[i]>v[i+1])
    {
        ll need=(v[i]-v[i-1]);
        if(need > extra)
        {
            ans+=(need-extra);
            extra=0;
        }
        else
        {
            extra-=need;
        }
    }
    else
    {
        extra+=(v[i-1]-v[i]);
    }
   }
   cout<<ans<<'\n';
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   t=1;
  // cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}