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
        cin>>x>>y;
        int arr[x];
        for(i=0;i<x;i++)
        {
            cin>>arr[i];
            if(arr[i]<=y)c++;
            else c=c+2;
        }
        cout<<c<<endl;


    }
    return 0;
}

