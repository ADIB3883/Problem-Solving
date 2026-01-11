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
    while(true)
    {
        cin>>n;
        if(!n)break;
        while(true)
        {
            deque<int>dq;
            stack<int>train;
            cin>>x;
            if(x==0)break;
            dq.push_back(x);
            for(i=1;i<n;i++)
            {
                cin>>x;
                dq.push_back(x);
            }
            ll count=1;
            while(!dq.empty())
            {
                if(!train.empty() && train.top()==dq.front())
                {
                    dq.pop_front();
                    train.pop();
                }
                else
                {
                    if(count>n)break;
                    else
                    {
                        train.push(count);
                        count++;
                    }
                }
            }
            if(train.empty())cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        cout<<endl;
    }
    return 0;
}

