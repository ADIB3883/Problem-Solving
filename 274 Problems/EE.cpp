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
   ll i,j,K,N,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   ll W;
   cin>>W>>N>>K;
   vector<ll>a(N+1),b(N+1);
   for(i=1;i<=N;i++)
   {
    cin>>a[i]>>b[i];
   }
   vector<vector<vector<ll>>>dp(N+1,vector<vector<ll>>(W+1,vector<ll>(K+1,0)));
   for(i=1;i<=N;i++)
   {
    for(ll w=0;w<=W;w++)
    {
        for(ll k=0;k<=K;k++)
        {
            dp[i][w][k]=dp[i-1][w][k];
            if(w>=a[i] && k>0)
            {
                dp[i][w][k]= max(dp[i][w][k],dp[i-1][w-a[i]][k-1]+b[i]);
            } 
        }
    }
   }
   for(ll w=0;w<=W;w++)
   {
    for(ll k=0;k<=K;k++)
    {
        c= max(c,dp[N][w][k]);
    }
   }
   cout<<c<<'\n';
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