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
   vector<ll>a(n);
   for(i=0;i<n;i++)
   {
    cin>>a[i];
   }
   if(all_of(a.begin(),a.end(),[](ll x){return x==1;}))
   {
    cout<<0<<'\n';
    return;
   }
   ll cost_no_global=0;
   for(ll x:a)
   {
    if(x!=1)cost_no_global++;
   }
   unordered_map<ll,ll>freq;
   for(ll x: a)freq[x]++;
   ll best_cost=cost_no_global;
   for(auto &w:freq)
   {
    ll q=w.first;
    ll cost=1+(n-w.second);
    best_cost= min(best_cost,cost);
   }
   cout<<best_cost<<'\n';

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