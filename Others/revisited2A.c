#include<stdio.h>
int main()
{
    int n,x,y,cp=0,cv=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cp++;
            x=i+1;
        }
        else
        {
            cv++;
            y=i+1;

    }
}
if(cp==1)printf("%d\n",x);
else if(cv==1)printf("%d\n",y);
}
