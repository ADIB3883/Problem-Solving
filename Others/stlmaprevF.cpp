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
    ll i,j,k,n,c=0,f=0,t,x,y;
    cin>>t;
    for(j=1;j<=t;j++)
    {
    map<string,string>mp;
    map<string,ll>m;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
        m[s1]++;
        m[s2]++;
    }
    string s;
    map<string,ll>::iterator it;
    for(it=m.begin();it!=end();it++)
    {
        if(it->second==1)
        {
            s=it->first;
            if(mp[s]!=" ")break;
        }
    }
    }
    cout<<"Scenario #"<<j<<":\n";
    for(i=0;i<n;i++)
    {
        cout<<s<<'\n';
        s=mp[s];

    cout<<'\n';
    return 0;
}
