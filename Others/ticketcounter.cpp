#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,n,t,x,y;
    t=1;
    while(t--)
    {
        cin>>n>>x;
        ll arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(i=0; i<n; i++)
        {
            if(i==0)
            {
                cout<<arr[i]+x<<endl;
            }
            else
            {
              if( arr[i]-arr[i-1]<x)
            {
                y=arr[i-1]+x;
                y=y+x;
            }
            else
            {
                y=arr[i]+x;
            }

            cout<<y<<endl;
        }
            }

    }
    return 0;
}

