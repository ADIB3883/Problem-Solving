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
    ll i,j,k,cnt=0,s=0,f=0,t,x,y,z,a,b,c;
    cin>>t;
    while(t--)
    {
        cnt=0,s=0,f=0;
        cin>>a>>b>>c;
        vector<ll>v1,v2,v3;
        for(i=0;i<a;i++)
        {
            ll num;
            cin>>num;
            v1.push_back(num);
        }
         for(i=0;i<b;i++)
        {
            ll num;
            cin>>num;
            v2.push_back(num);
        }
              for(i=0;i<c;i++)
        {
            ll num;
            cin>>num;
            v3.push_back(num);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        for(i=0;i<c;i++)
        {
            ll m=upper_bound(v2.begin(),v2.end(),v3[i])-v2.begin();
            if(m<=v2.size() && m>0)
            {
                for(j=0;j<m;j++)
                {
                    ll n=upper_bound(v1.begin(),v1.end(),v2[j])-v1.begin();
                if(n<=v1.size() && n>0)
                {
                    cnt+=n;
                }
                }
            }
        }


cout<<cnt<<"\n";

    }
    return 0;
}

