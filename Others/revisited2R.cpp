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
    cin>>n;
    while(n!=-1)
    {
        int sum=0;
        vector<int>data(n);
        for(i=0;i<n;i++)
        {
            cin>> data[i];
            sum +=data[i];
        }

        int avg= sum/n;
        if(avg * n ==sum)
        {
            int numMoves=0;
            for(i=0;i<n;i++)
            {
                if(data[i]>avg)
                {
                    numMoves+=data[i]-avg;
                }
            }
            cout<< numMoves <<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        cin>>n;

    }
    return 0;
}
