#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a;
        scanf("%d",&n);
        int arr[101]={};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            arr[a]++;
        }
        for(int i=0;i<101;i++)
        {
            if(arr[i]>0)
            {
                printf("%d ",i);
                arr[i]--;
            }
        }
        for(int i=0;i<101;i++)
        {
            while(arr[i]>0)
            {
                printf("%d ",i);
                arr[i]--;
            }
        }
        printf("\n");
    }
}
