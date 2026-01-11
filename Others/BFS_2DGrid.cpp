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
ll n,m;
char a[20][20];
bool vis[20][20];
ll dis[20][20];
vector<pair<ll,ll>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(ll i,ll j)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    return true;
}
void bfs(ll si,ll sj)
{
    queue<pair<ll,ll>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<ll,ll> par=q.front();
        ll a=par.first;
        ll b=par.second;
        q.pop();
        cout<<a<<" "<<b<<endl;
            for(ll i=0;i<4;i++)
    {
         ll ci=a+d[i].first;
        ll cj=b+d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]==false)
        {
             q.push({ci,cj});
             vis[ci][cj]=true;
             dis[ci][cj]=dis[a][b]+1;

        }
    }

    }
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,c=0,s=0,f=0,t,x,y;
        cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    ll si,sj;
    cin>>si>>sj;
    memset(vis,false,sizeof(vis));
    memset(dis,-1,sizeof(dis));
    bfs(si,sj);
    return 0;
}

