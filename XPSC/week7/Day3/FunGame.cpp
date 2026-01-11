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
    ll i,j,k,n,m,c=0,f=0,x,y,z;
    cin>>n;
    string s,t;
    cin>>s>>t;
    if(s==t || s[0]=='1')
    {
        YES;
        return;
    }
    ll pos=-1;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    {
        bool ok=true;
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                if(pos>i)
                {
                    ok=false;
                    break;
                }
            }
        }
        if(ok)
        {
            YES;
        }
        else
        {
            NO;
        }
    }
    else
    {
        NO;
    }

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

