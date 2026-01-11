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
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    ll N;
    cin>>N;
    cin>>p;
    ll w=0,e=0;
    n=0;
    for(i=0; i<N; i++)
    {
        if(p[i]=='N')n++;
        else if(p[i]=='S')s++;
        else if(p[i]=='E')e++;
        else if(p[i]=='W')w++;
    }
    if((n+s)&1)
    {
        cout<<"NO\n";
        return;
    }
    if((e+w)&1)
    {
        cout<<"NO\n";
        return;
    }
    ll nn=0,ss=0,ww=0,ee=0;
    nn=(n+1)/2;
    ss=(s+1)/2;
    ww=w/2;
    ee=e/2;
    string res=p;
    for(i=0; i<N; i++)
    {
        if(p[i]=='N')
        {
            if(nn)
            {
                res[i]='R';
                --nn;
            }
            else
                res[i]='H';
        }
             if(p[i]=='S')
        {
            if(ss)
            {
                res[i]='R';
                --ss;
            }
            else
                res[i]='H';
        }
         if(p[i]=='E')
        {
            if(ee)
            {
                res[i]='R';
                --ee;
            }
            else
                res[i]='H';
        }
               if(p[i]=='W')
        {
            if(ww)
            {
                res[i]='R';
                --ww;
            }
            else
                res[i]='H';
        }
    }
    ll cnt[2]={};
    for(i=0;i<N;i++)
    {
        ++cnt[res[i]=='H'];
    }
    cout<<(cnt[0]==0 || cnt[1]==0 ? "NO" : res)<<'\n';

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

