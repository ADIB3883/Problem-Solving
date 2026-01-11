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
    ll i,j,k,n,q,c=0,s=0,f=0,t,x,y;
    deque<ll>st;
    cin>>q;
    while(q--)
    {
        ll op,t;
        cin>>op;
        if(op==0)
        {
            ll d;
            cin>>d>>x;
            if(d==0)
            {
                st.push_front(x);

            }
            else
            {
                st.push_back(x);
            }
        }
        else if(op==1)
        {
            cin>>x;
            cout<<st[x]<<'\n';

        }
        else if(op==2)
        {
                ll d;
                cin>>d;
                if(d==0 && !st.empty())
                {
                    st.pop_front();
                }
                else if(d==1 && !st.empty())
                {
                                        st.pop_back();
                }

        }
    }
    return 0;
}




