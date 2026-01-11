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
   vector<vector<ll>> a(n,vector<ll>(n));
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
        cin>>a[i][j];
    }
   }
   for(k=0;k<n;k++)
   {
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j] > a[i][k]+a[k][j])
            {
                cout<<-1<<'\n';
                return ;
            }
        }
    }
   }
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        bool red=false;
        for(k=0;k<n;k++)
        {
            if(k==i || k==j)continue;
            if(a[i][j]==a[i][k]+a[k][j])
            {
                red=true;
                break;
            }
        }
        if(!red)s+=a[i][j];
    }
}
cout<<s<<'\n';
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