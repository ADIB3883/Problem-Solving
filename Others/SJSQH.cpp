
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
    while(t--)
    {
        c=0,s=0,f=0;
        cin>>n>>k;
        deque<ll>dq;
        for(i=0;i<n;i++)
        {
            ll num;
            cin>>num;
            dq.push_front(num);

        }
        ll mx=0,idx=n;
        for(i=n-1;i>=k-1;i--)
        {
            if(idx<=i)
            {
                ll a=dq[i-k+1];
                if(a>=mx)
                {
                    mx=a;
                    idx=i-k+1;
                }
            }
            else
            {
                mx=0;
                for(j=i;j>i-k;j--)
                {
                    ll a=dq[j];
                    if(a>=mx)
                    {
                        mx=a;
                        idx=j;
                    }
                }
            }
            cout<<mx<<" ";
        }
        cout<<'\n';


    }
    return 0;
}
