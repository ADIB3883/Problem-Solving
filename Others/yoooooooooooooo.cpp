#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a,a+m);
        while(q--)
        {
            int x;
            cin>>x;
            if(x<a[0])
            {
                cout<<a[0]-1<<'\n';continue;
            }
            if(x>a[m-1])
            {
                cout<<n-a[m-1]<<'\n';continue;
            }
            int y=lower_bound(a,a+m,x)-a;
            int z=a[y];
            int p=a[y-1];
            cout<<(z-p)/2<<'\n';
        }
    }
}
