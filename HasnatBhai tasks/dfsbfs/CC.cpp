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
map<ll,vector<ll > > adj;
map<ll,ll>vis;
map<ll,ll>level;
ll even=1,odd;
void bfs(ll str)
{
    queue<ll>q;
    q.push(str);
    while(!q.empty())
    {
        ll w=q.front();
        q.pop();
        vis[w]=1;
        for(auto child : adj[w])
        {
            if(!vis[child])
            {
                q.push(child);
                level[child]=level[w]+1;
                if(level[child]%2)
                odd++;
                else 
                even++;
            }
        }
    }
}
void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   cin>>n;
   for(i=0;i<n-1;i++)
   {
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
   }
   bfs(1);
   cout<<(odd*even)-(n-1)<<endl;

}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   t=1;
  //     cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}