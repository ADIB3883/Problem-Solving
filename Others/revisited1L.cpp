#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p;
    cin>>n>>p;
    long long int cp=0;
    for(long long int i=1;i<=n;i++)
    {
        if(p%i==0&&p/i<=n){
                cp++;}
    }

    cout<<cp<<endl;
}
