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
#define Case(a) cout<<"Case "<<a<<": "
#define CaseN(a) cout<<"Case "<<a<<": "
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,t,x;
    cin>>t;
    for(i=1;i<=t;i++)
    {
     cin>>x;
     ll l=0,h=500000010,ans;
     bool flag=false;
     while(h>=l)
     {
         ll c=0,mid=(h+l)/2;
         for(j=5;j<=mid;j*=5)
         {
             c+=mid/j;
         }
         if(c>x)
         {
             h=mid-1;
         }
         else if(c<x)
         {
             l=mid+1;
         }
         else
         {
             h=mid-1;
          ans=mid;
          flag=true;
         }
     }
     if(flag)
     {
         cout<<"Case "<<i<<":"<<" "<<ans<<endl;

     }
     else
     {
         cout<<"Case "<<i<<": impossible"<<endl;
     }

    }
    return 0;
}

