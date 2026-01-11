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
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y;
    map<string,ll>mp;
    cin>>n>>m;
    for(i=1;i<=(n+m);i++)
    {
        string p;
        cin>>p;
        if(mp.find(p)==mp.end())
        {
            mp[p]=0;
        }
        else
        {
            mp[p]++;
        }
    }
    if(n>m)
    {
        cout<<"YES"<<'\n';
    }
    else if(m>n)
    {
        cout<<"NO"<<'\n';
    }
    else
    {
        ll cnt=0;
        for(map<string,ll>::iterator it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>0)cnt++;
        }
        if(cnt%2)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}

