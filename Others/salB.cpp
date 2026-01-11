#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    t=1;
    while(t--)
    {
        c=0,s=0,f=0;
        cin>>n;
        string p1;
        string p2;
        for(i=0;i<n;i++)
        {

            cin>>p1[i];
            cin>>p2[i];

        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(p1[i]==p1[j] && p2[i]==p2[j] )
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            cout<<"No";
        }
        else
        {
            cout<<"Yes";
        }
    }
    return 0;
}

