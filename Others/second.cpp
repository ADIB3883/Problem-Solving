#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x,y;
        cin>>x>>y;
        float p=((10*x*1.0-10*1.0*y)/(1.0*y-100));
        cout<<(ceil(p))<<endl;
    }
    return 0;
}
