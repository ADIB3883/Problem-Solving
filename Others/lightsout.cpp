#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
ll light(ll n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y;
    t=1;
    while(t--)
    {
        c=0,s=0,f=0;
        ll grid[3][3],il[3][3];
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>grid[i][j];
                if(grid[i][j]%2==0)
                {
                    grid[i][j]=0;
                }
                else
                {
                    grid[i][j]=1;
                }
                il[i][j]=1;
            }
        }
     for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                 if(grid[i][j]==1)
                 {
                        il[i][j]==light(il[i][j]);
                 }
                 if(i>0)
                 {
                     il[i-1][j]=light(il[i-1][j]);
                 }
                 if(j>0)
                 {
                     il[i][j-1]=light(il[i][j-1]);
                 }
                 if(i<2)
                 {
                     il[i+1][j]=light(il[i+1][j]);
                 }
                if(j<2)
                 {
                     il[i][j+1]=light(il[i][j+1]);
                 }

            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<il[i][j];
            }
            cout<<endl;
        }
}
    return 0;
}

