
#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=2,s=0,f=0,t,x,y;
    cin>>t;
    while(t--)
    {
        c=0,s=0,f=0;
        cin>>n>>x;
        if(n==1 || n==2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            for(i=2;i<1000;i=i+x)
            {
                if(n==i)
                {
                    y=c;
                }
                c++;
            }
            cout<<y<<endl;
        }
    }
    return 0;
}
