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
//Check kth bit on or off
 ll check_kth_bit_on_or_off(ll n,ll k)
{
    return (n>>k)&1;
}
//print on and off bits
void print_on_and_off_bits(ll n)
{
    for(ll k=7;k>=0;k--)
    {
        if(check_kth_bit_on_or_off(n,k))
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    cout<<'\n';

}
//turn on kth bit
ll turn_on_kth_bit(ll n,ll k)
{
    return (n|(1<<k));
}
//turn off kth bit
ll turn_off_kth_bit(ll n,ll k)
{
    return (n&(~(1<<k)));
}
//toggle kth bit
ll toggle_kth_bit(ll n,ll k)
{
     return (n^(1<<k));
}
void solve()
{
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cout<<check_kth_bit_on_or_off(45,3)<<'\n';
    print_on_and_off_bits(45);
    cout<<turn_on_kth_bit(45,4)<<'\n';
    cout<<turn_off_kth_bit(45,3)<<'\n';
    cout<<toggle_kth_bit(45,4)<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

