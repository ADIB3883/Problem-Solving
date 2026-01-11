#include<stdio.h>
#include<string.h>
int main()
{
char s[101];
int c=0,C=0;
gets(s);
int d=strlen(s);
for(int i=0;i<d;i++)
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
puts(s);
}
else if(c>C)
{
strlwr(s);
puts(s);
}
else
{strupr(s);
puts(s);
}
}


