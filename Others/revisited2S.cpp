#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,count=0,s=0,f=0,t,x,y;
    t=1;
    while(t--)
    {
        count=0,s=0,f=0;
        cin>>n;
        ll a[n];
        ll sm1=0,sm2=0;
        for( i=0;i<n;i++)
        {
            cin>>a[i];
            sm1+=a[i];
        }
        sm1=sm1/2;
        sort(a,a+n);
        for(j=n-1;j>=0;j--)
        {
            sm2+=a[j];
            count++;
            if(sm1<sm2)break;
        }
        cout<<count;
    }
    return 0;
}
