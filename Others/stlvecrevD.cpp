
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
    ll i,j,k,m,n,c=0,s=0,f=0,t,x,y;
    t=1;
    while(t--)
    {
        c=1,s=0,f=0;
        ll res=1e8;
        cin>>n>>m;
        vector<string>v1,v2;
        for(i=0;i<n;i++)
        {
            string p;
            cin>>p;
            v1.push_back(p);
        }
           for(i=0;i<m;i++)
        {
            string p;
            cin>>p;
            v2.push_back(p);
        }
        bool flag;
        if(n>m)
        {
            flag=true;
        }
        else if(m>n)
        {
            flag=false;
        }
        else
        {
           ll cnt=0;
           for(i=0;i<n;i++)
           {
               for(j=0;j<n;j++)
               {
                   if(v1[i]==v2[j])
                   {
                       cnt++;
                   }
               }
           }
           if(cnt%2)flag=true;
           else flag=false;
        }
        if(flag)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}

