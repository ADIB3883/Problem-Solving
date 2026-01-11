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
    ll arr[3];
    for(i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    ll a[3];
    for(i=0;i<3;i++)
    {
        a[i]=arr[i];
    }
    ll temp;
    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }


    return 0;
}

