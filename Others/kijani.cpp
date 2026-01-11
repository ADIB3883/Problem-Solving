#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
string s;
int c=0,C=0;
cin>>s;
for(int i=0;i<s.size;i++)
{
if(s[i]>=97 && s[i]<=122)
{
c++;
}
else
C++;
}
if(c==C)
{
strlwr(s);
cout<<s<<endl;
}
else if(c>C)
{
strlwr(s);
cout<<s<<endl;
}
else
{strupr(s);
cout<<s<<endl;
}
