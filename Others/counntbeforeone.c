#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            if(arr[0]==1)
            {
                printf("0");
                break;
            }
            else
            {
            printf("%d",arr[i-1]);
            break;
            }
        }
    }
}
