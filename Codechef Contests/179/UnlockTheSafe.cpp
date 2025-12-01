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
   cin>>n>>k;
   vector<ll>a(n);
   vector<ll>b(n);
   for(i=0;i<n;i++)
   {
     cin>>a[i];
   }
    for(i=0;i<n;i++)
    {
      cin>>b[i];
    }
    vector<ll>diff;
    ll mov=0;
    ll minDiff=INT_MAX;
    for(i=0;i<n;i++)
    {
        ll cnt=min(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
        ll cnt1=max(abs(a[i]-b[i]),9-abs(a[i]-b[i]));
        mov+=cnt;
        diff.push_back(cnt1-cnt);
    }
    ll remain=k-mov;
    for(i=0;i<diff.size();i++)
    {
        minDiff=min(minDiff,diff[i]);
    }
    if(remain<0)
    {
        cout<<"NO\n";
    }
    else if(remain%2==0 || minDiff<=remain)cout<<"YES\n";
    else cout<<"NO\n";}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
 //  t=1;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}