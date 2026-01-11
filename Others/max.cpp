#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k=-1e9,n;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
                    if(k<max(arr[i-1],arr[i]))
            {
                k=max(arr[i-1],arr[i]);
            }

    }
/*    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(k<max(arr[i],arr[j]))
            {
                k=max(arr[i],arr[j]);
            }
        }
    }*/
    cout<<k;
    return 0;
}

