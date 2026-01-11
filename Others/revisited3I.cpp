#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    char s[n+1];
    cin>>s;
    int p[n+1];
    for(int i=0;i<=n;i++)
    {
        p[i]=0;
    }
    for(int i=0;i<=n;i++)
    {
        p[i]=p[i-1]+(int)s[i-1] - 'a'+1;
    }
    while(q--)
    {
        int sum=0;
        int l,r;
        cin>>l>>r;
        sum+=p[r]-p[l-1];
        cout<<sum<<endl;

    }
    return 0;

}
