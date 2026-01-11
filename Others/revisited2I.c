#include<stdio.h>
#define f(i,s,e)for(i=s;i<e;i++)
#define ll long long
int main()
{
    int n,i,j,q,a,id,id_arr[100005];
    ll s=0,s2=0;
    scanf("%d",&n);
    int arr[n];
    f(i,0,n)
    {
        scanf("%d",&arr[i]);
        id_arr[arr[i]]=i+1;
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&a);
        id=id_arr[a];
        s+=id;
        s2+=n-id+1;
    }
    printf("%lld %lld",s,s2);
}
