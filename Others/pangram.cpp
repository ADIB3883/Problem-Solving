#include<bits/stdc++.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll i,j,k,n,c=0,f=0,t,x,y;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        s[i]=towlower(s[i]);
    }
    sort(s.begin(),s.end());
    for(i=0;i<n;i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    if(c==26)cout<<"YES";
    else cout<<"NO";
    return 0;
}

