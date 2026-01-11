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
    while(cin>>n&&n!=EOF)
    {
        stack<ll>st;
        queue<ll>q;
        priority_queue<ll>pq;
        ll stk=1,pqu=1,qu=1;
        while(n--)
        {
            ll x,num,n1,n2,n3;
            cin>>x>>num;
            if(x==1)
            {
                st.push(num);
                q.push(num);
                pq.push(num);
            }
            else
            {
                if(!st.empty())
                {
                    n1=st.top();
                    st.pop();
                }
                else n1=-1;

                if(!q.empty())
                {
                    n2=q.front();
                    q.pop();
                }
                else n2=-1;

                    if(!pq.empty())
                {
                    n3=pq.top();
                    pq.pop();
                }
                else n3=-1;
                      if(n1!=num)stk=0;
            if(n2!=num)qu=0;
            if(n3!=num)pqu=0;
            }


        }
        if(stk+pqu+qu>=2)cout<<"not sure"<<'\n';
        else if(stk)cout<<"stack"<<'\n';
        else if(qu)cout<<"queue"<<'\n';
        else if(pqu)cout<<"priority queue"<<'\n';
        else cout<<"impossible"<<'\n';
    }
    return 0;
}

