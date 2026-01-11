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
   string a,b;
   cin>>a>>b;
   for(char g:a )s+=(g=='+') ? 1 : -1;
   for(char g : b)
   {
    if(g=='+')c++;
    else if(g=='-')c--;
    else
    {
        f++;
    }
   }
   k=s-c;
   if( abs (k) > f || (k+f) %2!=0 )
   {
    cout<<"0.000000000000"<<'\n';
    return;
   }
   ll p=(k+f)/2;
   ll w=1;
   for(i=0;i<p;i++)
   {
    w*=(f-i);
    w/=(i+1);
   }
   ll h=1LL<<f;
   printf("%.12f\n",(double)w/h);
   return ;



}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
  t=1;
 //  cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}