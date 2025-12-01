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
   ll i,j,k,n,m,f=0,t,x,y,z;
   string p;
   ll mx=-1;
   cin>>n>>m;
   vector<vector< ll >> a(n+5,vector<ll>(m+5));
   vector<ll> r(n+1),c(m+1);
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=m;j++)
    {
        cin>>a[i][j];
        if(a[i][j]>mx)mx=a[i][j];
    }
   }
   ll cnt=0;
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=m;j++)
    {
        if(a[i][j]==mx)
        {
            r[i]++;
            c[j]++;
            cnt++;
        }
    }
   }
   bool found = false;
   for(i=1;i<=n && !found;i++)
   {
    for(j=1;j<=m;j++)
    {
        ll now=r[i]+c[j];
        if(a[i][j]== mx)now--;
        if(now == cnt)
        {
            cout<<(mx-1)<<'\n';
            found=true;
            break;
        }
    }
   }
   if(!found)cout<<mx<<'\n';



}
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