#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++)
    {
        char a[102],b[102];
        fgets(a,sizeof(a),stdin);
        a[strlen(a)-1]='\0';
              fgets(b,sizeof(b),stdin);
        b[strlen(b)-1]='\0';
        int c[26]={0},d[26]={0},e=1;
        for(int j=0;j<strlen(a);j++)
        {
            if(a[j]>='A' && a[j]<='Z')
            {
                c[a[j]-'A']++;
            }
            else if(a[j]>='a' && a[j]<='z')
            {
                c[a[j]-'a']++;
            }
        }
           for(int j=0;j<strlen(b);j++)
        {
            if(b[j]>='A' && b[j]<='Z')
            {
                d[b[j]-'A']++;
            }
            else if(b[j]>='a' && b[j]<='z')
            {
                d[b[j]-'a']++;
            }
        }
        for(int j=0;j<26;j++)
        {
            if(c[j]!=d[j])
            {
                e=0;break;
            }
        }
        if(e==0)
        {
            printf("Case %d: No\n",i);
        }
        else
        {
            printf("Case %d: Yes\n",i);
        }
    }
    return 0;
}

