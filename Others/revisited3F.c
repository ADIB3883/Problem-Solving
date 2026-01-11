#include<stdio.h>
#include<string.h>
int main()
{
    char A[101];
    gets(A);
    int a=strlen(A);
    char B[10]="hello";
    int cnt=0;
    int i=0,j=0;
    while(A[j]!='\0')
    {
        if(A[j]==B[i])
        {
            i++;
        }
        j++;
    }
    if(i==5)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}

