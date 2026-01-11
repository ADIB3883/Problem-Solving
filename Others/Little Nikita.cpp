#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
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
