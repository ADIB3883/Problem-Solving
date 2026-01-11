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
    ll i,j,k1,k2,n,c=0,s=0,f=0,t,x,y;
    t=1;
    while(t--)
    {
        c=0,s=0,f=0;
        deque<ll>dq1,dq2;
        cin>>n;
        cin>>k1;
        while(k1--)
        {
            ll num;
            cin>>num;
            dq1.push_back(num);
        }
            cin>>k2;
        while(k2--)
        {
            ll num;
            cin>>num;
            dq2.push_back(num);
        }
        ll c1=0,c2=0;
        while(true)
        {
            if(dq1.empty())
            {
                cout<<c1+c2<<" "<<2;
                break;
            }
            else     if(dq2.empty())
            {
                cout<<c1+c2<<" "<<1;
                break;
            }
            else if(c1+c2>n*n*n)
            {
                cout<<"-1";
                break;
            }
            ll a=dq1.front();
            ll b=dq2.front();
            dq1.pop_front();
            dq2.pop_front();
            if(a>b)
            {
                dq1.push_back(b);
                dq1.push_back(a);
                c1++;
            }
            else         if(a<b)
            {
                dq2.push_back(a);
                dq2.push_back(b);
                c2++;
            }

        }

    }
    return 0;
}

