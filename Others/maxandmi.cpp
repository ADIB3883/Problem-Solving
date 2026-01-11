#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
ll i,x,y;
void det(ll a[],ll b)
{
    ll mini=1e9;
    ll maxi=-1;
    for(i=0;i<b;i++)
    {
        if(a[i]>maxi)
        {
            maxi=a[i];
        }
        if(a[i]<mini)
        {
            mini=a[i];
        }
    }
    cout<<mini<<" "<<maxi<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    cin>>x;
    ll arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    det(arr,x);
    return 0;
}

