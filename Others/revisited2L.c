#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)c++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("1 %d\n",arr[0]);
    if(c==1 || c==2)
    {
        printf("1 %d\n",arr[n-1]);
        printf("%d ",n-2);
        for(i=1;i<n-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else if(c>2)
    {
        printf("2 %d %d\n",arr[1],arr[2]);
        printf("%d ",n-3);
        for(i=3;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
    }
}
