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
#define pa pair<ll,ll>
using namespace std;
const int N=1e5+5;
vector<pa>v[N];
ll dis[N];
ll par[N];
class cmp
{
public:
    bool operator()(pa a,pa b)
    {
        return a.second>b.second;
    }
};
void dijkstra(ll s)
{
    priority_queue<pa,vector<pa>,cmp>pq;
    pq.push({s,0});
    dis[s]=0;
    while(!pq.empty())
    {
        pa parent=pq.top();
        pq.pop();
        ll parentNode=parent.first;
        ll parentCost=parent.second;
        for(pa child: v[parentNode])
        {
            ll childNode=child.first;
            ll childCost=child.second;
            if(parentCost+childCost < dis[childNode])
            {
                dis[childNode]=parentCost+childCost;
                pq.push({childNode,dis[childNode]});
                par[childNode]=parentNode;
            }
        }

    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    ll e;
    cin>>n>>e;
    while(e--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    for(i=1;i<=n;i++)
    {
        dis[i]=1e18;
        par[i]=-1;
    }
    dijkstra(1);
     if(dis[n]==1e18)
     {
         cout<<"-1\n";
     }
     else
     {
         x=n;
         vector<ll>path;
         while(x!=-1)
         {
             path.push_back(x);
             x=par[x];
         }
         reverse(path.begin(),path.end());
         for(ll p: path)
         {
             cout<<p<<" ";
         }
     }
    return 0;
}

