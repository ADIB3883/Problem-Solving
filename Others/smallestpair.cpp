#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,t,x,y;
    cin>>t;
    while(t--)
    {
        k=1e9;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                x=arr[i]+arr[j];
                y=j-i;
                k=min(x+y,k);
            }
        }
        cout<<k<<endl;

    }
    return 0;
}

