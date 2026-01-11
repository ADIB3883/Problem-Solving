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
ll mexx(vector<ll>st)
{
    ll mx=0;
    vsort(st);
    for(auto i: st)
    {
    if(mx!=i)
        {
            return mx;
        }
        mx++;
    }
    return mx;
}
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    vector<ll>st;
    vector<ll>ans;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        st.pb(a);
    }
    z=mexx(st);
    //cout<<z<<'\n';
    ans.pb(z);
    ans.insert(ans.end(),st.begin(),st.end());
    y=ans.size()-(k%ans.size());
    //cerr << "->" << y << endl;
    if(y==n+1)
    {
        for(int i=0;i<n;i++) cout << st[i] << " ";
        cout << '\n';
        return;
    }
    for(i=y+1;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    for(i=0;i<y;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<'\n';



}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

