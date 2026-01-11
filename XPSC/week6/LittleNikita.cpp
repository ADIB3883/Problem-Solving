#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(n<m)
        {
            cout<<"No"<<endl;
        }
        else
        {
            if((n+m)%2!=0)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }

    }
}
