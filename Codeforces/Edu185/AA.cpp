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
   ll i,j,k,n,m,c=0,s=0,f=0,t,x=0,y=0,z=0;
   string p;
   cin>>n;
   ll arr[n][n];
   ll u=1;
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
        arr[i][j]=u++;
    }
   }
   x+=((n-2)>=0 ? arr[n-2][n-2] : 0); //cout<<x<<'\n';
    x+=((n-3)>=0 ? arr[n-3][n-2] : 0); //cout<<x<<'\n';
     x+=((n-3)>=0 ? arr[n-2][n-3] : 0); //cout<<x<<'\n';
      x+=((n-2)>=0 ? arr[n-2][n-1] : 0); //cout<<x<<'\n';
       x+=((n-2)>=0 ? arr[n-1][n-2] : 0); //cout<<x<<'\n';
        y+=((n-2)>=0 ? arr[n-1][n-2] : 0); //cout<<y<<'\n';
         y+=((n-2)>=0 ? arr[n-2][n-2] : 0); //cout<<y<<'\n';
          y+=((n-3)>=0 ? arr[n-1][n-3] : 0); //cout<<y<<'\n';
           y+=((n-1)>=0 ? arr[n-1][n-1] : 0); //cout<<y<<'\n';
            z+=((n-1)>=0 ? arr[n-1][n-1] : 0); //cout<<z<<'\n';
             z+=((n-2)>=0 ? arr[n-2][n-1] : 0); //cout<<z<<'\n';
              z+=((n-2)>=0 ? arr[n-1][n-2] : 0); //cout<<z<<'\n';
   k=max(max(x,y),z);
   cout<<k<<'\n';
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
