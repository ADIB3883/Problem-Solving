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
class ucl
{
    ll x,y;
public:
    ucl(ll a,ll b)
    {
        x=a;
        y=b;
    }
    template<typename T>
    friend void display(T &obj);
        template<typename T>
    friend void swap(T &ob);
};
template<typename T>
void display(T &obj)
{
    cout<<obj.x<<" "<<obj.y<<'\n';
}
template<typename T>
void swap(T &ob)
{
    ll temp;
    temp=ob.x;
    ob.x=ob.y;
    ob.y=temp;
}
int main(){
    ucl u(10,20);
    display(u);
    swap(u);
    display(u);
    return 0;
}

