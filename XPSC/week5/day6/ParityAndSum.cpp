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
void solve()
{
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cin>>n;
    ll a[n+10];
    ll even=0,odd=0;
    vector<ll>ve;
    vector<ll>vo;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        k=a[i];
        if(k%2==0)
        {
            even++;
            ve.push_back(k);
        }
        else
        {
            odd++;
            vo.push_back(k);
        }
    }
    if(even==0 || odd==0)
    {
        cout<<0<<'\n';
        return;
    }
    vsort(ve);
    vrsort(vo);
    ll curr=vo[0];
    for(i=0;i<ve.size();i++)
    {
        if(ve[i]<curr)
        {
            c++;
            curr+=ve[i];

        }
        else
        {
            c+=2;
            curr+=(2*ve[i]);
        }
    }
    ll c1=0;
    ll curr1=vo[0];
    ll val=ve.size()-1;
    if(ve[val]<curr1)
    {
        c1=val+1;
    }
    else
    {
        c1=val+2;
    }
    cout<<min(c,c1)<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
     solve();
    }
    return 0;
}

