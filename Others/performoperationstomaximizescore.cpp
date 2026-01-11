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
        vector<pair<ll,ll>>v;
        cin>>n>>k;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
              for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==1)f=1;
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        sort(a,a+n);
        ll ans=0;
        if(v[n-1].second==1)cout<<v[n-1].first+k+a[n/2-1]<<'\n';
        else
        {
            if(!f)
            {
                cout<<v[n-1].first+a[n/2-1]<<'\n';
                continue;
            }
            ll l=0,h=a[n-1],mid;
            while(l<=h)
            {
                mid=(l+h)/2;
                ll kk=k;
                for(i=n-2;i>=0;i--)
                {
                    if(a[i]<mid && v[i].second)
                    {
                        ll p=kk;
                        if(kk>=mid-a[i])kk-=mid-a[i];
                        a[i]+=min(p,mid-a[i]);
                        if(kk==0)
                        {
                            break;
                        }
                    }
                }
                sort(a,a+n-1);
                if(a[n/2-1]>=mid)
                {
                    ans=max(ans,mid+a[n-1]);
                    l=mid+1;
                }
                else
                    h=mid-1;
                    for(i=0;i<n;i++)
                    {
                        a[i]=v[i].first;
                    }
            }
            ll pos=-1;
            for(i=0;i<n;i++)
            {
                if(v[i].second)pos=i;
            }
            vector<ll>vv;
            for(i=0;i<n;i++)
            {
                if(i!=pos)vv.push_back(a[i]);
            }
            ans=max(ans,vv[n/2-1]+a[pos]+k);
            cout<<ans<<'\n';
        }
    }
    return 0;
}

