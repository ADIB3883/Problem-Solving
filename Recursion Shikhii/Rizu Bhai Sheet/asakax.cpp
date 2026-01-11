
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
   ll i,k,n,m,c=0,s=0,f=0,t,w,x,y,z,j,g;
   ll a,b;
   cin>>n>>m>>a>>b;
   ll p=n;ll q=m;
   x=a-1;
   y=n-a;
   ll ans1=0,ans2=0;
   if(x>y)
   {
       n-=x;
       ans1++;
   }
   else if(y>0)
   {
       n-=y;
       ans1++;
   }
   while(n>1)
   {
       k=n/2;
       ans1++;
       n-=k;
   }
   while(m>1)
   {
       k=m/2;
       ans1++;
       m-=k;
   }
   x=b-1;
   y=q-b;
   if(x>y)
   {
       q-=x;
       ans2++;
   }
   else if(y>0)
   {
       q-=y;
       ans2++;
   }
   while(p>1)
   {
       k=p/2;
       ans2++;
       p-=k;
   }
   while(q>1)
   {
       k=q/2;
       ans2++;
       q-=k;
   }
   if(ans1<ans2){
    cout<<ans1<<'\n';
   }
   else
   {
       cout<<ans2<<'\n';
   }

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
