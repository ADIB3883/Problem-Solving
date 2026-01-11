#include<stdio.h>
#define SIZE 256
int main()
{
    int n,ch;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char s[SIZE];
        int top=-1;
        int error=0;
        while((ch==getchar())!='\n')
        {
            if(ch==' ')continue;
            if(ch=='[' || ch=='(')s[++top]=ch;
            else if((ch==']' && s[top]=='[')|| (ch==')'&& s[top]=='('))--top;
            else error=1;
        }
        if(error || top> -1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
    return 0;
}
