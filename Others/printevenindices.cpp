#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
void yoyo(ll arr[],ll a)
{
    if(a<0)return;
    cout<<arr[a]<<" ";
    yoyo(arr,a-2);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n%2==0)
    {
        n=n-2;
    }
    else{
        n=n-1;
    }
    yoyo(arr,n);
    return 0;
}
