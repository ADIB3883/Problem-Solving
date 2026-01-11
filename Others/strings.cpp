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
    string a;
    string b;
    cin>>a>>b;
    string d;
    d=a+b;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<d<<endl;
    cout<<a<<" "<<b;

    return 0;
}

