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
    ll i,j,k,n,t,x,q,y;
    cin>>n>>q;
    vector<ll>v;
    v.reserve(n);
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="pop_back")
        {
            v.pop_back();
        }
        else if(s=="front")
        {
            cout<<v.front()<<"\n";
        }
        else if(s=="back")
        {
            cout<<v.back()<<"\n";
        }
        else if(s=="sort")
        {
            cin>>x>>y;
            if(x<=y)
            {
                sort(v.begin()+x-1,v.begin()+y);
            }
            else
            {
                sort(v.begin()+y-1,v.begin()+x);
            }
        }
        else if(s=="reverse")
        {
            cin>>x>>y;
            if(x<=y)
            {
                reverse(v.begin()+x-1,v.begin()+y);
            }
            else
            {
                reverse(v.begin()+y-1,v.begin()+x);
            }
        }
        else if(s=="print")
        {
            cin>>x;
            cout<<v[x-1]<<"\n";
        }
        else if(s=="push_back")
        {
            cin>>x;
            v.push_back(x);
        }
    }
    return 0;
}

