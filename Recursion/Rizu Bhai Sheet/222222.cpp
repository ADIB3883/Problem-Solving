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
string dec2bin(ll n)
{
    string bin="";
    if(n==0)
    {
        return "0";
    }
    while(n>0)
    {
        bin+=(n%2==0 ? "0" : "1");
        n/=2;
    }
    reverse(bin.begin(),bin.end());
    return bin;
}
ll bin2dec(string bin)
{
    ll dec=0,base=1,n=bin.size();
    reverse(bin.begin(),bin.end());
    for(ll i=0;i<n;i++)
    {
        if(bin[i]=='1')
        {
            dec+=base;
        }
        base*=2;
    }
    return dec;
}
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    cin>>n;
    p=dec2bin(n);
    p="0"+p;///Padding helps handle edge cases where the next permutation might otherwise not be valid due to binary constraints.
    next_permutation(p.begin(),p.end());
    n=bin2dec(p);
    cout<<n<<nl;

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    ll tc=0;
//    t=1;
    while(t--)
    {
        cout<<"Case "<<++tc<<": ";
     solve();
    }
    return 0;
}

