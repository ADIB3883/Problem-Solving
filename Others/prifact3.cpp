
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
ll sum_of_digits(ll num)
{
    ll ans=0;
    while(num)
    {
        ans+=num%10;
        num/=10;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,f,t;
    t=1;
    while(t--)
    {
        cin>>n;
        ll ans1=sum_of_digits(n);
        bool prime=true;
        ll ans2=0;
            for(f=2;f*f<=n;f++)
            {
                if(n%f==0)
                {
                    prime=false;
                    while(n%f==0)
                    {
                        ans2+=sum_of_digits(f);
                        n/=f;
                    }
                }
            }
            if(n>1)ans2+=sum_of_digits(n);
            if(ans1==ans2 && !prime)cout<<"1\n";
            else  cout<<"0\n";

    }
    return 0;
}

