#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int cnt[256]={0};
    string s="abajbsaubxuasb";
    for(int i=0;i<s.size();i++)
    {
        cnt[s[i]]++;
    }
    for(char c='a';c<='z';c++)
    {
        cout<<c<<"->"<<cnt[c]<<"\n";
    }
    return 0;
}

