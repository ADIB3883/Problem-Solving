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
vector<pair<ll,ll>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool valid(ll i,ll j)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    return true;
}
void dfs(ll si,ll sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
    for(ll i=0;i<4;i++)
    {
         ll ci=si+d[i].first;
        ll cj=sj+d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj]==false)
        {
             dfs(ci,cj);
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
    dfs(si,sj);

    return 0;
}

