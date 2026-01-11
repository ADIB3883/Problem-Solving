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
void solve()
{
    ll i,j,k,n,m,s=0,f=0,t,x,y,z;
    string p;
    cin>>n;
    ll a[n],b[n],c[n];
    bool f1=true,f2=true;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(f1 && a[i]==0)
        {
            b[i]=1;
            f1=false;
        }
        else
        {
            b[i]=a[i];
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(f2 && a[i]==1)
        {
            c[i]=0;
            f2=false;
        }
        else
        {
            c[i]=a[i];
        }
    }
    ll c1=0,c2=0,c3=0;
    ll ans1=0,ans2=0,ans3=0;
    for(i=n-1;i>=0;i--)
    {
        if(b[i]==0)
        {
            c1++;
        }
        else
        {
            ans1+=c1;
        }
            if(a[i]==0)
        {
            c2++;
        }
        else
        {
            ans2+=c2;
        }
        if(c[i]==0)
        {
            c3++;
        }
        else
        {
            ans3+=c3;
        }
    }
    ll ans=max(max(ans1,ans2),ans3);
    cout<<ans<<'\n';

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    //t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

