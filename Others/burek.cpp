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
    ll i,j,k,n,t,x,y;
    ll e;
    cin>>t;
    ll arr[t][6];
    for(i=0; i<t; i++)
    {
        for(j=0; j<6; j++)
        {
            cin>>arr[i][j];
        }
    }
    cin>>n;
    cin.ignore();
    while(n--)
    {
        e=0;
        string p;
        getline(cin,p);
        long long int pd=1,c=0,s=0,f=0;
        if(p[0]=='x')c++;
        if(p[0]=='y')s++;

        for(i=p.size()-1; i>=4; i--)
        {
            long long int a = p[i]-'0';
            f+=(a*pd);
            pd*=10;
        }
       // cout<<f<<" "<<c<<" "<<s<<"\n";
        if(c>0)
        {
            for(i=0; i<t; i++)
            {
                bool f1 =0, f2 =0;
                for(j=0; j<6; j+=2)
                {
                    if(f<arr[i][j])
                    {
                        f1=1;
                    }
                    else if(f>arr[i][j])f2=1;
                }
                if(f1&&f2)e++;
            }
        }
        if(s>0)
        {
            for(i=0; i<t; i++)
            {
                bool f1 =0, f2 =0;
                for(j=1; j<6; j+=2)
                {
                    if(f<arr[i][j])
                    {
                        f1=1;
                    }
                    else if(f>arr[i][j])f2=1;
                }
                if(f1&&f2)e++;
            }
        }
        cout<<e<<'\n';
    }

    return 0;
}

