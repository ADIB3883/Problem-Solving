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
#define Case(a) cout<<"Case "<<a<<":"
#define CaseN(a) cout<<"Case "<<a<<":"
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pi acos(-1)
#define nl '\n'
using namespace std;
vector<ll> arr;
struct st
{
    string name;
    ll roll,mdsa,mcpc,tec;
    st(string name,ll roll,ll mdsa,ll mcpc,ll tec)
    {
        this->name=name;
        this->roll=roll;
        this->mdsa=mdsa;
        this->mcpc=mcpc;
        this->tec=tec;
    }

};

bool bull()

void  Merge(ll p,ll q,ll r)
{
    ll a=q-p+1;
    ll b=r-q;
    vector<ll>L(a+1);
    vector<ll>R(b+1);
    for(ll i=0;i<a;i++)
    {
        L[i]=arr[p+i];
    }
    for(ll j=0;j<b;j++)
    {
        R[j]=arr[q+1+j];
    }
    L[a] = LLONG_MAX;
    R[b] = LLONG_MAX;
    ll i = 0, j = 0;
    for (ll k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
}
void mergeSort(ll p,ll r)
{
    if(p >= r) return;
    ll q=(p+r)/2;
    mergeSort(p,q);
    mergeSort(q+1,r);
    Merge(p,q,r);
}


void solve() {
   ll i,j,k,n,m,c=0,s=0,f=0,t,x,y,z;
   string p;
   cin>>n;
   cout<<"wdihwuizjncskajdkasjndhwd"<<'\n';
   arr.resize(n+1);
   for(i=0;i<n;i++)
   {cin>>arr[i];}
   cout<<"Ei lo unsorted"<<'\n';
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
   cout<<'\n';
   mergeSort(0,n-1);
   cout<<"Ei lo sorted:"<<'\n';
   for(i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }
}
int main(){
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   ll t;
   t=1;
   //cin>>t;
   while(t--)
   {
     solve();
   }
   return 0;
}