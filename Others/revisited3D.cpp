#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int p=s.length();
    int cp=0;
    for(int i=0,j=p-1;i<p/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            cp++;
        }
    }
    if(cp==1)cout<<"YES"<<endl;
    else if(cp==0 && p%2 !=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
