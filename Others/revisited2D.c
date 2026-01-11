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
    int cp=0;
    int min=1e9;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%min==0)
            cp++;

    }
    if(cp==n)printf("%d",min);
    else printf("-1");

}
