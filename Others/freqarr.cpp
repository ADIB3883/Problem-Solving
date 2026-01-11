#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll x,y,i,oio;
    cin>>x>>y;
    ll arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
     }
    ll cnt[100001]={0};
    for(i=0;i<x;i++)
    {
        ll val=arr[i];
        cnt[val]++;
    }
    for(i=1;i<=y;i++)
    {
            cout<<cnt[i]<<endl;
    }
    return 0;
}

