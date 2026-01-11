#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    gets(s);
    strlwr(s);
    int a=strlen(s);
    for(int i=0;i<a;i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' )
        {
           printf(".%c",s[i]);
        }
    }
}
