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
   ll i,j,k,n,m,c=0,f=0,x,y,z;
   cin>>n>>k;
   string s, t;
   cin>>s>>t;
   ll s0=0,t0=0,uneq=0;
   for(i=0;i<n;i++)
   {
    if(s[i]=='0')s0++;
    if(t[i]=='0')t0++;
    if(s[i]!=t[i])
    {
        uneq++;
    }
   }
   if(s0!=t0)
   {
    cout<<"NO\n";
   }
   else
   {
    if(n==2)
    {
        if( s==t && (s=="01" || s=="10") && k%2==1)
        {
            cout<<"NO\n";
        }
        else if(s=="01" && t=="10" && k%2==0)
        {
            cout<<"NO\n";
        }
        else if(s=="10" && t =="01" && k%2==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    else
    {
        if(k>=uneq/2)cout<<"YES\n";
        else{
            cout<<"NO\n";
        }
    }
   }
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll ti;
   //t=1;
   cin>>ti;
   while(ti--)
   {
     solve();
   }
   return 0;
}