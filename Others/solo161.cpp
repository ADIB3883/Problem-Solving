#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    t=1;
    while(t--)
    {
        c=0,s=0,f=0;

        int arr[3];
        for(i=0;i<3;i++)
        {
            cin>>arr[i];
            if(arr[i]==5)
            {
                c++;
            }
            else
            {
                s++;
            }
        }
        if(c==2 && s==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}

