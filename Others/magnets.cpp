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
    t=1;
    while(t--)
    {
        c=1,s=0,f=0;
        ll a;
        cin>>a;
        ll arr[a];
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<a-1;i++)
        {
            if(arr[i]!=arr[i+1])
            {
                c++;
            }
        }
        cout<<c;
    }
    return 0;
}

