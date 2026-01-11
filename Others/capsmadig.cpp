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
    char q;
    cin>>q;
    if(q>=48 && q<=57)
    {
        cout<<"IS DIGIT";
    }
    else if(q>=65 && q<=90)
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if(q>=97 && q<=122)
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}

