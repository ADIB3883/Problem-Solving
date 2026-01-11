#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c,s=0,f=0,t,x=0,y;
    cin>>t;
    cin>>n;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        c=x;
        for(i=0;i<n;i++)
        {
            if(c<=0)
            {
                c=c-arr[i];
            }
            else
            {
                c=c+arr[i];
            }
            cout<<c<<endl;

            }

    }
    return 0;
}

