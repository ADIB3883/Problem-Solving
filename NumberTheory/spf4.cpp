///https://codeforces.com/problemset/problem/222/C
#include<bits/stdc++.h>
#define ll long long int
#define vsort(v) sort(v.begin(),v.end())
#define vrsort(v) sort(v.rbegin(),v.rend())
using namespace std;
const int mxx=1e7+3;
ll spf[mxx];
ll cnt1[mxx];
ll cnt2[mxx];
void sieve()
{
    for(ll i=1; i<mxx; i++)
    {
        spf[i]=i;
    }
    for(ll i=2; i*i<=mxx; i++)
    {
        if(spf[i]==i)
        {
            for(ll j=i*i; j<mxx; j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
    }
}
int main()
{
    ll t;
    sieve();
    t=1;
    // cin>>t;
    ll i,a,b,j,k,m,n;
    while(t--)
    {
        ll i,a,b,j,k,m,n;
        cin>>a>>b;
        ll arr[a];
        for(i=0; i<a; i++)
        {
            cin>>arr[i];
            ll tmp=arr[i];
            while(tmp>1)
            {
                cnt1[spf[tmp]]++;
                tmp/=spf[tmp];
            }
        }
        ll brr[b];
        for(i=0; i<b; i++)
        {
            cin>>brr[i];
            ll tmp=brr[i];
            while(tmp>1)
            {
                cnt2[spf[tmp]]++;
                tmp/=spf[tmp];
            }
        }
        cout<<a<<" "<<b<<'\n';
        for(i=0;i<a;i++)
        {
            ll num=1;
            ll tmp=arr[i];
            while(tmp>1)
            {
                if(cnt2[spf[tmp]]>0)
                {
                    cnt2[spf[tmp]]--;
                }
                else
                {
                    num*=spf[tmp];
                }
                tmp/=spf[tmp];
            }
            cout<<num<<" ";
        }
        cout<<'\n';
                for(i=0;i<b;i++)
        {
            ll num=1;
            ll tmp=brr[i];
            while(tmp>1)
            {
                if(cnt1[spf[tmp]]>0)
                {
                    cnt1[spf[tmp]]--;
                }
                else
                {
                    num*=spf[tmp];
                }
                tmp/=spf[tmp];
            }
            cout<<num<<" ";
        }

    }
    return 0;

}



