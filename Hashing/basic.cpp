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
#define base 10
#define Max 1000000
//#define mod 10000000+7
const int mod=10000000+7;
using namespace std;
ll pH[Max+5];
ll pO[Max+5];
void preprocess(string &s)
{
    pH[0]=s[0]-'0';
    pO[0]=1;
    for(ll i=1;i<(ll)s.size();i++)
    {
        pH[i]=((pH[i-1]*base)+s[i]-'0')%mod;
        pO[i]=((pO[i-1]*base)%mod);
    }
    for(ll i=0;i<(ll)s.size();i++)
    {
        cout<<pH[i]<<" ";
    }
    cout<<endl;
}
ll getHash(ll L,ll R)
{
    if(!L)return pH[R];
    return (((pH[R]-(pH[L-1]*pO[R-L+1])%mod)+mod)%mod);
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    string s1="123";
    string s2="12345678";
    preprocess(s1);
    //preprocess(s2);

    return 0;
}

