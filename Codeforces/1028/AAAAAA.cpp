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
   ll a,b,c,d;
   ll ax=0,bx=0,cx=0,dx=0;
   cin>>a>>b>>c>>d;
   k=min({a,b,c,d});
   if((k==a || k==c) && (k!=b && k!=d))
   {
    cout<<"Flower\n";
   }
   else
   {
    cout<<"Gellyfish\n";
   }
   /*
   for(i=0;;i++)
   {
    if(a<=0)
    {
        ax=1;
        break;
    }
       if(b<=0)
    {
        bx=1;
        break;
    }
       if(c<=0)
    {
        cx=1;
        break;
    }
       if(d<=0)
    {
        dx=1;
        break;
    }
    if(i%2==0)
    {
        if(b>=d)
        {
            d--;
        }
        else
        {
            b--;
        }
    }
    else
    {
        if(a>=c)
        {
            c--;
        }
        else
        {
            a--;
        }
    }
   }
   if(ax==1 || cx==1)
   {
    cout<<"Flower\n";
   }
   else
   {
    cout<<"Gellyfish\n";
   }
   */
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
  // t=1;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}