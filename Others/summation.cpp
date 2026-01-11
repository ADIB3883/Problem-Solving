#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int summ(ll a[],ll siz)
{
 if(siz<0)return 0;
 else
 {
     return a[siz-1]+summ(a,siz-1);
 }
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
    int d=summ(arr,n);
cout<<d<<endl;

    return 0;
}

