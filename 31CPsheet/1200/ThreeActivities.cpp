
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
    ll i,j,k,n,s=0,f=0,t,x,y;
    cin>>n;
    vector<pair<ll,ll>>a(n),b(n),c(n);
    for(i=0;i<n;i++)cin>>a[i].first,a[i].second=i;
    for(i=0;i<n;i++)cin>>b[i].first,b[i].second=i;
    for(i=0;i<n;i++)cin>>c[i].first,c[i].second=i;
    vrsort(a);
    vrsort(b);
    vrsort(c);
    vector<pair<ll,ll>>ans_a(3),ans_b(3),ans_c(3);
    for(i=0;i<3;i++)
    {
        ans_a[i]=a[i];
        ans_b[i]=b[i];
        ans_c[i]=c[i];
    }
    ll ans=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if(ans_a[i].second!=ans_b[j].second && ans_b[j].second!=ans_c[k].second && ans_a[i].second!=ans_c[k].second)
                {
                    ans=max(ans,ans_a[i].first+ans_b[j].first+ans_c[k].first);
                }
            }
        }
    }
    cout<<ans<<'\n';


}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
     solve();
    }
    return 0;
}
