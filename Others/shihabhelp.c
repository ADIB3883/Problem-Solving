#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            printf("_");
        }
        if(i!=n)
        {
                    for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        }
        else

        {
                                for(int j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
        }

        printf("\n");
    }

}
