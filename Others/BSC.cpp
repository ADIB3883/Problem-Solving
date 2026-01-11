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


int lowerBound(ll a[],ll val, int l, int r){
        int mid = (l+r)/2;
        if(l>r){
            return l;
        }
        if(a[mid]>=val){
            return lowerBound(a,val,l,mid-1);
        }
        else {
            return lowerBound(a,val,mid+1,r);
        }
}

int upperBound(ll a[],ll val, int l, int r){
        int mid = (l+r)/2;
        if(l>r){
            return l;
        }
        if(a[mid]>val){
            return upperBound(a,val,l,mid-1);
        }
        else {
            return upperBound(a,val,mid+1,r);
        }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t,tc=1;
    cin>>t;
    while(t--)
    {
        cout<<"Case "<<tc++<<":\n";
        ll n,q;
        cin>>n>>q;
        ll a[n],b[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        while(q--){
            int d;
            cin>>d;
            int idx1=upperBound(a,d,0,n-1);
            int idx2=lowerBound(b,d,0,n-1);
            cout<<idx1-idx2<<'\n';
        }
}
    return 0;
}

