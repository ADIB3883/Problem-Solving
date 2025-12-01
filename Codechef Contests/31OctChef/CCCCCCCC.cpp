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
    ll i,j,k,n,c=0,s=0,f=0,u=0,t,x,y;
    cin>>t;
    string p;
    while(t--)
    {
        c=0,s=0,f=0,u=0;
        cin>>n;
        cin>>p;
        ll cnt1=0,cnt2=0;
        for(i=0;i<n-1;i++)
        {
            if(p[i]=='a' && p[i+1]=='b')
            {
                cnt1++;
            }
            else if(p[i]=='b' && p[i+1]=='a')
            {
                cnt2++;
            }
        }
       if(cnt1==cnt2)
       {
           cout<<n<<'\n';
       }
       else
       {
           char first=p[0];
           char last=p[n-1];
           ll ans1=n,ans2=n;
           char second=p[n-1];
           for(i=0;i<n;i++)
           {
               if(p[i]!=first)
               {
                   break;
               }
               ans1--;

           }
                    for(i=n-1;i>=0;i--)
           {
               if(p[i]!=last)
               {
                   break;
               }
               ans2--;

           }
           cout<<max(ans1,ans2)<<'\n';
       }
    }
    return 0;
}

