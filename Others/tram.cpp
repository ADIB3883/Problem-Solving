#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0,q=0,maxi=0;
    for(int i=0;i<t;i++)
    {
        int m,n;
        cin>>m>>n;
       p-=m;
       p+=n;
              if(p>maxi)
       {
           maxi=p;
       }
    }
    cout<<maxi<<endl;
}
