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
ll vis[1004][1004];
ll chess[1004][1004];
ll dx[]={2,2,-2,-2,1,1,-1,-1};
ll dy[]={-1,1,-1,1,2,-2,2,-2};
bool valid(ll x,ll y)
{
    return (x>=1 && x<=1000 && y>=1 && y<=1000);
}
void bfs(ll a,ll b)
{
    memset(chess,0,sizeof(chess));
    memset( vis , 0 , sizeof(vis));
    vis[a][b]=1;
    chess[a][b]=0;
    queue<pair<ll,ll>>q;
    q.push({a,b});
    while(!q.empty())
    {
        pair<ll,ll> cur= q.front();
        q.pop();
        for(int i=0;i<8;i++)
        {
            ll x=cur.first+dx[i];
            ll y=cur.second+dy[i];
            if(valid(x,y) && !vis[x][y])
            {
                vis[x][y]=1;
                chess[x][y]=chess[cur.first][cur.second]+1;
                q.push({x,y});
            }
        }

    }
}

void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   cin>>x>>y;
   cout<<chess[x][y]<<'\n';
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   bfs(1,1);
 //  t=1;
   cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}