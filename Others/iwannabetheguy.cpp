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
        cin>>n>>x;
        int arr[200];
        for(i=0;i<x;i++)
        {
            cin>>arr[i];
        }
        cin>>y;
        for(i=x;i<x+y;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+(x+y));
        for(i=0;i<(x+y);i++)
        {
            if(arr[i]!=arr[i+1])
            {
                c++;
            }
        }
        if(c==n) cout<<"I become the guy.";
        else cout<<"Oh, my keyboard!";
    }
    return 0;
}

