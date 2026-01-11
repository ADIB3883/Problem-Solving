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
    bool f1=0;
    deque<ll>dq;
    cin>>t;
    while(t--)
    {
        c=0,s=0,f=0;
        string p;
        cin>>p;
        if(f1)
        {
            if(p=="push_back")
            {
                ll num;
                cin>>num;
                dq.push_front(num);
            }
            else if(p=="toFront")
            {
                ll num;
                cin>>num;
                dq.push_back(num);
            }
            else if(p=="back")
            {
                if(dq.empty())
                {
                    cout<<"No job for Ada?"<<'\n';
                    }
                else
                {
                    cout<<dq.front()<<'\n';
                    dq.pop_front();
                }
            }
            else if(p=="front")
            {
                if(dq.empty()){
                        cout<<"No job for Ada?"<<'\n';
                }
                else
                {
                    cout<<dq.back()<<'\n';
                    dq.pop_back();
                }
                }
                else if(p=="reverse")
                {
                    f1=0;
                }
                }
            else if(!f1)
            {
                if(p=="toFront")
                {
                    ll num;
                    cin>>num;
                    dq.push_front(num);

                }
                else if(p=="push_back")
                {
                    ll num;
                    cin>>num;
                    dq.push_back(num);
                }
                else if(p=="front")
                {
                    if(dq.empty()){cout<<"No job for Ada?"<<'\n';}
                    else
                    {
                        cout<<dq.front()<<'\n';
                        dq.pop_front();
                    }
                }
                     else if(p=="back")
                {
                    if(dq.empty()){cout<<"No job for Ada?"<<'\n';}
                    else
                    {
                        cout<<dq.back()<<'\n';
                        dq.pop_back();
                    }
                }
                else if(p=="reverse")
                {
                    f1=1;
                }
            }
        }

    return 0;
}

