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
    ll mini=1e9;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<mini)
            {
                mini=arr[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==mini)
            {
                c++;
            }
        }
        if(c%2!=0)
        {
            cout<<"Lucky";
        }
        else
        {
            cout<<"Unlucky";
        }

    return 0;
}

