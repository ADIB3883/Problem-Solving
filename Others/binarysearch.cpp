#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int i,x,y,p;
    cin>>x>>y;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
     while(y--)
    {
        cin>>p;
        bool flag=false;
        int l=0;
        int r=x-1;
        int mid=(l+r)/2;
        while(l<=r)
        {
            if(arr[mid]==p)
            {
                flag=true;
                break;
            }
            if(x>arr[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(flag==true)cout<<"found\n";
        else cout<<"not found\n";
    }
    return 0;
}

