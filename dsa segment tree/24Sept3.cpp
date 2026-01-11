
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
ll build(ll *tree,ll *a,ll i,ll j,ll ti)
{
    if(i==j)
    {
        tree[ti]=a[i];
        return tree[ti];
    }
    ll mid=(i+j)/2;
     ll left= build(tree,a,i,mid,2*ti);
    ll right=build(tree,a,mid+1,j,2*ti+1);
    tree[ti]=min(left,right);
    return tree[ti];

}
ll query(ll *tree,ll *a,ll i,ll j,ll ti,ll qi,ll qj)
{
    if(j<qi || i>qj)
    {
        return LLONG_MAX;
    }
    else if(i>=qi && j<=qj)
    {
        return tree[ti];
    }
    else
    {
        ll mid=(i+j)/2;
        ll left=query(tree,a,i,mid,2*ti,qi,qj);
        ll right=query(tree,a,mid+1,j,2*ti+1,qi,qj);
        return min(left,right);
    }
}
void update(ll *tree,ll *a,ll k,ll i,ll j,ll ti)
{
    if(i==j)
    {
        tree[ti]=a[k];
        return;
    }
    ll mid=(i+j)/2;
    if(k<=mid)
    {
        update(tree,a,k,i,mid,2*ti);
    }
    else
    {
        update(tree,a,k,mid+1,j,2*ti+1);
    }
    tree[ti]=min(tree[2*ti],tree[2*ti+1]);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cin>>n;
    ll q;
    cin>>q;
    ll arr[n+1],tree[4*n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    build(tree,arr,0,n-1,1);
    
    while(q--)
    {
        ll p;
        cin>>p;
        if(p==2)
        {
        ll qi,qj;cin>>qi>>qj;
        qj--;
        ll ans=query(tree,arr,0,n-1,1,qi,qj);
        cout<<ans<<endl;
        }
        else if(p==1)
        {
            ll idx,v;
            cin>>idx>>v;
            arr[idx]=v;
            update(tree,arr,idx,0,n-1,1);
        }
            }

    return 0;
}

