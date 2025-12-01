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
   vector<ll>a(n),mx(n);
   for(i=0;i<n;i++)
   {
    cin>>a[i];
    s=max(s,a[i]);
    mx[i]=s;
   }
   for(i=1;i<n;i+=2)
   {
    a[i]=mx[i];
   }
   for(i=1;i<n;i+=2)
   {
    if(i-1>=0)
    {
        c+=max(a[i-1]-a[i]+1,0LL);
        a[i-1]=min(a[i]-1,a[i-1]);
    }
    if(i<n-1)
    {
        c+=max(a[i+1]-a[i]+1,0LL);
        a[i+1]=min(a[i]-1,a[+1]);
    }
   }
   cout<<c<<'\n';

}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   t=1;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}