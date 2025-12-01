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
void solve()
{
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cin>>n;
    vector<ll>a(n);
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<ll>ans;
    map<ll,ll>cnt;
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            cnt[a[i]]++;
            ans.pb(1);
        }
        else
        {
            cnt[a[i]]++;
            if(cnt[a[i]]>=2)
            {
                ll value=a[i];
                while(true)
                {
                    ll total=cnt[value];
                    if(cnt[value]<2)
                    {
                        break;
                    }
                    cnt.erase(value);
                    for(j=1; j<=(total/2); j++)
                    {
                        cnt[2*value]++;
                    }
                    if(total%2!=0)
                    {
                        cnt[value]++;
                    }
                    value*=2;
                }

            }
            ans.pb(cnt.size());
        }
    }
    for(i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<'\n';

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

