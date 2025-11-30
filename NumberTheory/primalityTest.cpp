///optimized approach for finding if an integer is prime or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,cp=0;
    cin>>n;
    bool prime=true;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            prime=false;
        }
    }
    if(n==1)cout<<"No"<<endl;
    else if(prime)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}