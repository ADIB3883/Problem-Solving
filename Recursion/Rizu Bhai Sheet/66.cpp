#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>v;
void  findd(ll i,ll j)
{
    if(i>j)return;
    v.push_back(i);
    findd(10*i+4,j);
    findd(10*i+7,j);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll l, r;
    cin >> l >> r;
    ll s=0;
    findd(0,1e10);
    sort(v.begin(),v.end());
    ll id=lower_bound(v.begin(),v.end(),l-1)-v.begin();
    for(ll i=l;i<=r;i++)
    {
        if(i>v[id])id++;
        s+=v[id];
    }
    cout<<s<<'\n';

    return 0;
}

