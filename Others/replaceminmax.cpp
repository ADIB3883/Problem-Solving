#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll mini=1e9;
    ll maxi=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
            x=i;
        }
        if(arr[i]>maxi)
        {
            maxi=arr[i];
            y=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==x)
        {
            cout<<maxi<<" ";
        }
        else   if(i==y)
        {
            cout<<mini<<" ";
        }
        else
        {
        cout<<arr[i]<<" ";
        }
        }
    return 0;
}

