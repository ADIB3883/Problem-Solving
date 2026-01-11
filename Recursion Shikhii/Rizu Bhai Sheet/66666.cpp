#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>v;
void  findlucky(ll i,ll j)
{
    if(i>j)return;
    v.push_back(i);
    findlucky(10*4,j);
    findlucky(10*7,j);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll l, r;
    //cin >> l >> r;
    ll s=0;
    cout<<"dfdfdfg"<<'\n';
    findlucky(0,1e18);
    for(ll i=0; i<v.size(); i++)
    {
        cout<<v[i]<<'\n';
    }

    return 0;
}
