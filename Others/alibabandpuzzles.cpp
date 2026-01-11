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
    ll i,j,k,n,s=0,f=0,t,x,y;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a+b*c==d)
    {
        cout<<"YES";
    }
   else  if(a+b-c==d)
    {
        cout<<"YES";
    }
    else if(a-b+c==d)
    {
        cout<<"YES";
    }
    else if(a-b*c==d)
    {
        cout<<"YES";
    }
    else if(a*b+c==d)
    {
        cout<<"YES";
    }
    else if(a*b-c==d)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

