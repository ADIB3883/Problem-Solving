#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin.ignore();
    getline(cin,s);
    int d;
    d=s.size();
    int j=0;
    int sp[1000000];
    for(int i=0;i<d;i++)
    {
        if(s[i]!='+')
        {
            sp[j]=s[i]-'0';
            j++;
        }
    }

}
