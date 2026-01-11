
#include<bits/stdc++.h>
//#define cmp(typ) complex<typ>
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
const int N=1e5+5;
ll parent[N];
ll group_size[N];
void dsu_initialize(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        parent[i]=-1;
        group_size[i]=1;
    }
}
ll dsu_find(ll node)
{
    if(parent[node]==-1)
    {
        return node;
    }
    ll leader=dsu_find(parent[node]);
    parent[node]=leader;
    return leader;
}
void dsu_union_by_size(ll node1,ll node2)
{
    ll leaderA=dsu_find(node1);
    ll leaderB=dsu_find(node2);
    if(group_size[leaderA]>group_size[leaderB])
    {
        parent[leaderB]=leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }
    else
    {
        parent[leaderA]=leaderB;
        group_size[leaderB]+=group_size[leaderA];
    }
}
class Edge
{
public:
        ll u,v,w;
    Edge(ll u,ll v,ll w)
    {
        this->u=u;
        this->v=v;
        this->w=w;
    }
};
bool cmp(Edge a,Edge b)
{
    return a.w<b.w;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    ll e;
    cin>>n;
    dsu_initialize(n);
    vector<pair<ll,ll>>bad;
     vector<pair<ll,ll>>create;
    for(i=1;i<=n-1;i++)
    {
        ll a,b;
        cin>>a>>b;
        ll leaderA=dsu_find(a);
        ll leaderB=dsu_find(b);
        if(leaderA==leaderB)
        {
            bad.push_back({a,b});
        }
        else
        {
            dsu_union_by_size(a,b);
        }


    }
for(i=2;i<=n;i++)
{
    ll leaderA=dsu_find(1);
    ll leaderB=dsu_find(i);
    if(leaderA!=leaderB)
    {
        create.push_back({1,i});
        dsu_union_by_size(1,i);
    }
}
cout<<bad.size()<<'\n';
for(i=0;i<bad.size();i++)
{
    cout<<bad[i].first<<" "<<bad[i].second<<" "<<create[i].first<<" "<<create[i].second<<endl;
}

    return 0;
}

