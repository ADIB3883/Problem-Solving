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
    t=1;
    while(t--)
    {
        c=0,s=0,f=0;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)c++;
        }
        sort(arr,arr+n);
        cout<<"1 "<<arr[0]<<endl;
        ll d[2]={};
        if(c>0)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    cout<<"1 "<<arr[i];
                    d[0]=arr[i];
                    f++;
                    break;
                }
            }
        }
        else
        {
            cout<<"2 ";
            for(i=1;i<n && f<2;i++)
            {
                if(arr[i]<0)
                {
                    cout<<arr[i]<<" ";
                    d[k]=arr[i];
                    f++;
                }
            }
        }
        cout<<'\n'<<n-1-f<<" ";
        for(i=1;i<n;i++)
        {
            if(c>0)
            {
                if(arr[i]!=d[0])
                {
                    cout<<arr[i]<<" ";
                }
            }
            else
            {
                if(arr[i]!=d[0] && arr[i]!=d[1])
                {
                    cout<<arr[i]<<" ";
                }
            }
        }
        cout<<"\n";


        }
        return 0;

    }


