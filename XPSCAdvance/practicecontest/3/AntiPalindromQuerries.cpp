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
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z,q;
   string p;
   cin>>n>>q;
   vector<ll>one(n+1,0),two(n+1,0),three(n+1,0);
   for(i=0;i<n;i++)
   {
      ll a;
      cin>>a;
      if(a==1)one[i]++;
      else if(a==2)two[i]++;
      else three[i]++;
   }
   for(i=1;i<n;i++)
   {
      one[i]+=one[i-1];
      two[i]+=two[i-1];
      three[i]+=three[i-1];
   }
   while(q--)
   {
      ll l,r;
      cin>>l>>r;
      l--;r--;
      if((r-l+1)%2)
      {
         NO;
         continue;
      }
      ll arr[3];
      arr[0]=(l==0) ? one[r] : one[r]-one[l-1];
      arr[1]=(l==0) ? two[r] : two[r]-two[l-1];
      arr[2]=(l==0) ? three[r] : three[r]-three[l-1];
      sort(arr,arr+3);
      if(arr[2]==(r-l+1)/2)
      {
         YES;
      }
      else
      {
         NO;
      }
   }
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   //t=1;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}