#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x,cp=0;
        cin>>x;
        int i;
        for( i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                cp++;
            }
        }
        cp=cp*2;
        i--;
        if(i*i==x)
        {
            cp--;
        }

        cout<<cp<<endl;
    }
    return 0;
}
