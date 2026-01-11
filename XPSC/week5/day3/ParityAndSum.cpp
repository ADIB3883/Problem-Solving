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
    vector<ll>v(n);
    vector<ll>even,odd;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            even.push_back(v[i]);
        }
        else
        {
            odd.push_back(v[i]);
        }
    }
    if(even.size()==0 || odd.size()==0)
    {
        cout<<0<<'\n';
    }
    else
    {
          vsort(even);
          vsort(odd);
          ll mx=odd.back();
          ll ans=0;
          bool flag=false;
          for(i=0;i<even.size();i++)
          {
              if(even[i]>mx)
              {
                  flag=true;
                  break;
              }
              else
              {
                  mx+=even[i];
                  ans++;
              }
          }
          if(flag)cout<<even.size()+1<<'\n';
          else cout<<ans<<'\n';
    }


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

