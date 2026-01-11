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
    ll q,p;
    cin>>q;
    set<ll>st;
    while(q--)
    {
        int n;
        cin>>n;
        ll num;
        cin>>num;
        if(n==0)
        {
            st.insert(num);
            cout<<st.size()<<'\n';
        }
        else if(n==1)
        {
            set<ll>:: iterator it=st.find(num);
            if(it!=st.end())
            {
                cout<<"1"<<'\n';
            }
            else
            {
                cout<<"0"<<'\n';
            }
        }
        else if(n==2)
        {
            st.erase(num);
        }
        else
        {
            cin>>p;
            auto it=st.lower_bound(num);
            while(it!=st.end())
            {
                if(*it>p)break;
                cout<<*it<<'\n';
                it++;
            }
        }

    }
    return 0;
}



