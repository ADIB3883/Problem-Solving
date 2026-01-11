#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101];
    char s2[101];
    gets(s1);
    gets(s2);
    strlwr(s1);
    strlwr(s2);
    int d=strcmp(s1,s2);
    if(d==0)printf("0");
    else if(d<0) printf("-1");
    else printf("1");
}
