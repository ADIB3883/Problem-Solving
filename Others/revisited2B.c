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
    int max=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    int m=n*max;
    for(int i=0;i<n;i++)
    {
        m=m-arr[i];
    }
    printf("%d\n",m);
}
