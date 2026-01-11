#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        ll m,q;
        cin>>n>>m>>q;
        vector<ll>v(m);
        for(ll i=0;i<m;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        while(q--)
        {
            ll x;
            cin>>x;
            auto it=lower_bound(v.begin(),v.end(),x);
            if(it==v.end())
            {
                it--;
                cout<<n- *it<<'\n';
            }
            else if(it==v.begin())
            {
                cout<<*it-1<<'\n';
            }
            else
            {
                ll aki=(*it-*(--it))/2;
                cout<<aki<<'\n';
            }
        }

    }
}
