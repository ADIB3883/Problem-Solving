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
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<'\n';
        c=0,s=0,f=0;
        stack<ll>st1,st2;
        cin>>n;
        while(n--)
        {
                    char ch;

            cin>>ch;
            if(ch=='A')
            {
                cin>>k;
                if(st1.empty())
                {
                    st1.push(k);
                    st2.push(k);
                }
                else if(k>=st1.top())
                {
                    st1.push(k);
                    st2.push(k);
                }
                else
                {
                    st2.push(k);
                }
            }
            else if(ch=='R')
            {
                if(!st2.empty())
                {
                    if(st1.top()==st2.top())
                    {
                        st1.pop();
                        st2.pop();
                    }
                    else
                    {
                        st2.pop();
                    }
                }
            }
            else
            {
                if(st2.empty())
                {
                    cout<<"Empty"<<'\n';
                }
                else
                {
                    cout<<st1.top()<<'\n';
                }
            }
        }

    }
    return 0;
}

