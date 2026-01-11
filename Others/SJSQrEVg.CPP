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
    ll id=1;
    cin>>n;
    stack<int>st1,st2;
    while(n--)
    {
        ll a;
        cin>>a;
        if(id==a)
        {
            cout<<"1\n-1\n";
            id++;
        }
        else
        {
            st1.push(a);
            cout<<"1\n";
        }
    }
    while(!st1.empty()||!st2.empty())
    {
        if(!st1.empty())
        {
            while(!st1.empty())
            {
                if(st1.top()==id)
                {
                    cout<<-1<<endl;
                    id++;
                }
                else
                {
                    st2.push(st1.top());
                    cout<<12<<endl;
                }
                st1.pop();
            }
        }
        else if(!st2.empty())
        {
            while(!st2.empty())
            {
                if(st2.top()==id)
                {
                    cout<<-2<<endl;
                    id++;
                }
                else
                {
                    st1.push(st2.top());
                    cout<<21<<endl;

                }
                st2.pop();
            }
        }

    }
    return 0;
}

