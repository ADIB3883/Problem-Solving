#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    cin>>n;
    /*for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<"*";
        }
            cout<<endl;
}*/
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}

