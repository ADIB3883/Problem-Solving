#include<stdio.h>
#define f(i,s,e) for(i=s;i<e;i++)
int main()
{
    int t,x,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        n=2*x;
        int arr[n],frq[x+1];
        f(i,0,x+1)frq[i]=2;
        f(i,0,n)scanf("%d",&arr[i]);
        f(i,0,n)
        {
            if(frq[arr[i]]==2)
            {
                printf("%d ",arr[i]);
                frq[arr[i]]--;
            }
        }
        printf("\n");
    }
}
