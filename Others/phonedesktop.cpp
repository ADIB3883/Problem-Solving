#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b;
        cin>>x>>y;
        if(y%2==0)
        {
            a=y/2;
            b=7*a;
        }

        else
        {

            a=y/2+1;
            b=7*a+4;
        }
        if(x<=b)
            cout<<a<<endl;
        else
            cout<<a+1<<endl;

    }
}
