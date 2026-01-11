#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101];
    gets(s1);
    char s2[101];
    gets(s2);
    char s3[101];

    int d=strlen(s2);
    int j=0;
    for(int i=d-1;i>=0;i--)
    {
        s3[j]=s2[i];
        j++;
    }
    s3[j]='\0';
    int x=strcmp(s1,s3);
    if(x==0)
        printf("Yes\n");
    else
        printf("No\n");

}
