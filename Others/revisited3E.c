#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    gets(a);
    int b=strlen(a);
    int cp=0;
    for(int i=0;i<b;i++)
    {
        for(int j=i+1;j<b;j++)
        {
            if(a[i]==a[j])
            {
                cp++;
                break;
            }
        }
    }
    int k=b-cp;
    if(k%2==0)printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
}
