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
ll dx[]={0,-1,0,1};
ll dy[]={1,0,-1,0};
void solve() {
   ll i,j,k,n,m,c,r,t,x,y,z;
   string p;
   cin>>r>>c;
   vector<string>g(r);
   for(i=0;i<r;i++)
   {
    cin>>p;
    g[i]=p;
    for(j=0;j<c;j++)
    {
        if(g[i][j]=='.')
        {
            g[i][j]='#';
        }
    }
   }
   bool f=true;
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
        if(g[i][j]=='R')
        {
            for(k=0;k<4;k++)
            {
                x=i+dx[k];
                y=j+dy[k];
                if(x>=0 && x<r && y>=0 && y<c)
                {
                    if(g[x][y]=='C')
                    {
                        f=false;
                    }
                }
            }
        }
    }
   }
   if(f==true)cout<<"Yes\n";
   else cout<<"No\n";
   if(f==true)
   {
    for(i=0;i<r;i++)
    {
        cout<<g[i];
        cout<<'\n';
    }
   }
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