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
#define nl '\n'
using namespace std;
ll scnt=0;
void dfs(ll arr[4][4],ll x,ll y,ll stepNo,vector<pair<ll,ll>>&path)
{
    if(x<0 || y<0 || x>=4 || y>=4)
    {
        return;

    }
    if(x==0 && y==3 && stepNo==15)
    {
                cout<<"Solution Found\n";
        for(ll i=0;i<path.size();i++)
        {
            cout<<path[i].first<<" "<<path[i].second<<nl;
        }
        cout<<"###########"<<nl;
        ///if stepNo==15,scnt becomes 32,that means solution found
        scnt++;
    }
    else
    {
        ///4 possible moves,
        ///                 left     right down up
        ll moves[][2]={{-1,0},{1,0},{0,-1},{0,1}};
        for(ll i=0;i<4;i++)
        {
            ll X=x+moves[i][0];
            ll Y=y+moves[i][1];
            ///checking boundary conditions and arr[X][Y] must not have been visited yet!
            if(X>=0 && Y>=0 && X<4 && Y<4 && arr[X][Y]==0)
            {
                arr[X][Y]=1;
                path.pb(make_pair(X,Y));
                dfs(arr,X,Y,stepNo+1,path);
                path.pop_back();
                arr[X][Y]=0;///This for backtracking
            }

        }
    }
}
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    ll arr[4][4];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            arr[i][j]=0;
        }
    }
    vector<pair<ll,ll>>path;
    path.pb(make_pair(3,0));
    ll stepNo=1;
    arr[3][0]=1;
    dfs(arr,3,0,stepNo,path);
    cout<<scnt<<nl;

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
   // cin>>t;
    t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

