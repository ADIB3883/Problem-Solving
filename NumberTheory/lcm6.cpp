///https://codeforces.com/problemset/problem/1977/C
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
    ll arr[n+1];
    for(i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    bool flag=true;
    for(i=0;i<n;i++)
    {
        if(arr[n-1]%arr[i]!=0)
        {
            flag=false;
        }
    }
    if(flag==false)
    {
        cout<<n<<'\n';
    }
    else
    {
        ll borro=arr[n-1];
        set<ll>divisors;
        for(i=1;i*i<=borro;i++)
        {
            if(borro%i==0)
            {
                divisors.insert(i);
                divisors.insert(borro/i);
            }
        }
        ll ans=0;
        for(auto it : divisors)
        {
            ll ekhnlcm=it;
            ll len=0;
            vector<ll>vec;
            bool valid=true;
            for(i=0;i<n;i++)
            {
                if(ekhnlcm==arr[i])valid=false;
                if(ekhnlcm%arr[i]==0)
                {
                    vec.pb(arr[i]);
                }
            }
            ll lcm=1;
            for(auto it2: vec)
            {
                lcm=lcm*it2/__gcd(lcm,it2);
            }
            ll syz=vec.size();
            if( valid && lcm==ekhnlcm)
            {
                ans=max(ans,syz);
            }
        }
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

