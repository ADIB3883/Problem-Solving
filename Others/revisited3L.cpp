#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int p=str.length();
    int c_A=1,c_Z=1;
    for(int i=0;i<p+1;i++)
    {
        if(str[i]=='A')
            break;
        else c_A++;
    }
    for(int i=p;i>=0;i--)
    {
        if(str[i]=='Z')
            break;
        else c_Z++;
    }
    cout<<p-c_A-c_Z+3<<endl;

}
