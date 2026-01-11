#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,s=0,f=0,t,x,y;
    cin>>t;
    while(t--)
    {
        c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,s=0,f=0;
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='A')
            {
                c1++;
                if(c1>m)
                {
                    c1--;
                }
            }
            else   if(s[i]=='B')
            {
                c2++;
                           if(c2>m)
                {
                    c2--;
                }
            }
            else if(s[i]=='C')
            {
                c3++;
                           if(c3>m)
                {
                    c3--;
                }
            }
            else if(s[i]=='D')
            {
                c4++;
                           if(c4>m)
                {
                    c4--;
                }
            }
            else if(s[i]=='E')
            {
                c5++;
                           if(c5>m)
                {
                    c5--;
                }
            }
             else if(s[i]=='F')
            {
                c6++;
                           if(c6>m)
                {
                    c6--;
                }
            }
            else if(s[i]=='G')
            {
                c7++;
                           if(c7>m)
                {
                    c7--;
                }
            }
        }
        cout<<n-c1-c2-c3-c4-c5-c6-c7<<endl;

    }
    return 0;

}
