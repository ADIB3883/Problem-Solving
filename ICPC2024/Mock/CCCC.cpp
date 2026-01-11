#include<bits/stdc++.h>
#define cmp(typ) complex<typ>
#define vsort(vc) sort(vc.begin(),vc.end())
#define vrsort(vc) sort(vc.rbegin(),vc.rend())
#define srev(st) reverse(st.rbegin(),st.rend())
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define Yes cout<<"Yes\n"
#define No cout<<"No\n"
#define yes cout<<"yes\n"
#define no cout<<"no\n"
#define Case(a) cout<<"Case "<<a<<": "
#define CaseN(a) cout<<"Case "<<a<<": "
#define psum(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1)
#define pxor(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return x^y;})
#define pgcdLeft(vc,sm) partial_sum(vc.begin(),vc.end(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define pgdcRight(vc,sm) partial_sum(vc.rbegin(),vc.rend(),sm.begin()+1,[](LL x,LL y){return __gcd(x,y);})
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,s=0,f=0,t,x,y,z;
    cin>>t;
    while(t--)
    {
        c=0,s=0,f=0;
        cin>>x>>y>>z;
        if(x==0)
        {
            if((y==4 && z==4) || (y==3 && z==6) || (y==6 && z==3))
            {
                cout<<"Perfectus\n";
            }
            else
            {
                cout<<"Invalidum\n";
            }

        }
        else if(x==1)
        {
            if((y==6 && z==1)||(y==3 && z==4)||(z==4&& y==2)||(z==6 && y==1)||(z==3 && y==4)||(y==4&&z==2))
            {
                cout<<"Perfectus\n";
            }
            else
            {
                cout<<"Invalidum\n";
            }

        }
        else if(x==2)
        {
            if((y==2&& z==2)||(y==4&&z==1)||(y==1&&z==4))
            {
                cout<<"Perfectus\n";
            }
            else
            {
                cout<<"Invalidum\n";
            }
        }
        else if(x==3)
        {
            if((y==4 && z==1)||(y==6&&z==0)||(y==3&&z==3)||(z==4 && y==1)||(z==6&&y==0))
            {
                cout<<"Perfectus\n";
            }
            else
            {
                cout<<"Invalidum\n";
            }

        }
        else if(x==4)
        {
            if((y==1&&z==2)||(y==3&&z==1)||(y==0&&z==4)||(z==1&&y==2)||(z==3&&y==1)||(z==0&&y==4))
            {
                cout<<"Perfectus\n";
            }
            else
            {
                cout<<"Invalidum\n";
            }

        }
        else if(x==6)
        {
            if((y==1&&z==1)||(y==3&&z==0)||(y==0&&z==3))
            {
                cout<<"Perfectus\n";
            }
            else
            {
                cout<<"Invalidum\n";
            }

        }
        else
        {
            cout<<"Invalidum\n";
        }

    }
    return 0;
}

