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
    ll a,b;
    cin>>a>>b;
    vector<ll>v(b);
    for(i=0;i<b;i++)
    {
        cin>>v[i];
    }
    if(b==1)
    {
        YES;
    }
    else
    {
        vector<ll>v1(a);
        j=a-1;
        for(i=b-1;i>=1;i--)
        {
            v1[j]=v[i]-v[i-1];
            j--;
        }
        while(j>0)
        {
            v1[j]=v1[j+1];
            v[0]-=v1[j];
            j--;
        }
        v1[0]+=v[0];
        if(is_sorted(v1.begin(),v1.end()))
        {
            YES;
        }
        else
        {
            NO;
        }
    }

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

