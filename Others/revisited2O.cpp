#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll s,l,c=0;
    pair<ll,ll>a[1000];
    cin>>s>>l;
    for(ll i=0;i<l;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+l);
    for(ll i=0;i<l;i++)
    {
        if(s<=a[i].first)
        {
            c++;
            break;
        }
        else
        {
            s=s+a[i].second;
        }
    }
    if(c>0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}

