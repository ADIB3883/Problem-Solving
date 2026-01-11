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
    ll i,j,k,n,t,x,y;
    cin>>t;
            ll l2,a,b,c,d,l;
    ll tc=0;
    while(t--)
    {

        cin>>a>>b>>l;
         d=((a*b)/(__gcd(a,b)));
        Case(++tc);
        if(l%d==0)
        {
            ll ans=l/d;
            vector<ll>vec;
            for(i=2;i*i<=ans;i++)
            {
                if(ans%i==0)
                {
                    vec.push_back(i);
                    while(ans%i==0)
                    {
                        ans/=i;
                    }
                }
            }
            if(ans>1)vec.push_back(ans);
            ans=l/d;
            for(auto it: vec)
            {
                while(l%(ans*it)==0)
                {
                    ans*=it;
                }
            }
            cout<<ans<<'\n';
        }
        else
        {
            cout<<"impossible"<<'\n';
        }

    }
    return 0;
}

