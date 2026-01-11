#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int n;
        bool prime=true;
        cin>>n;
        for(long long int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                prime=false;
            }
        }
        if(n==1) cout<<"no"<<endl;
        else if(prime) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
