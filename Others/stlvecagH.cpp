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
        cin>>n;
        ll arr[n+1];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll pma[n+1];
        pma[0]=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>pma[i-1])
            {
                pma[i]=arr[i];
            }
            else
            {
                pma[i]=pma[i-1];
            }
        }
                ll sma[n+1];
        sma[n-1]=arr[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(arr[i]>sma[i+1])
            {
                sma[i]=arr[i];
            }
            else
            {
                sma[i]=sma[i+1];
            }
        }
        for(i=0;i<n;i++)
        {
            if(pma[i]<sma[i])
            {
                c+=pma[i]-arr[i];
            }
            else
            {
                c+=sma[i]-arr[i];
            }
        }
        cout<<c<<'\n';

    }
    return 0;
}

