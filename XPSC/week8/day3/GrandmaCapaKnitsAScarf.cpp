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
#define nl '\n'
using namespace std;
void solve()
{
    ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
    string p;
    cin>>n;
    cin>>p;
    ll ans=1e9;
    for( i='a';i<='z';i++)
    {
        c=0;
        ll l=0,r=n-1;
        while(l<=r)
        {
            if(p[l]!=p[r])
            {
                if(p[l]==i)
                {
                    l++;
                    c++;
                }
                else if(p[r]==i)
                {
                    r--;
                    c++;
                }
                else
                {
                    c=1e9;
                    break;
                }

            }
            else
            {
                l++;
                r--;
            }
        }
        ans=min(ans,c);
    }
    if(ans==1e9)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<ans<<'\n';
    }

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
//    t=1;
    while(t--)
    {
     solve();
    }
    return 0;
}

