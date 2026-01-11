#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,cp=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cp++;
        }
    }
    if(cp==0) cout<<"Yes"<<endl;
    else
    {
        cout<<"No"<<endl;
    }
}
