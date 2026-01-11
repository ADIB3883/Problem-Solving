#include<stdio.h>
int main()
{
    long long int n=0;
    long long int arr[5];
    for(int i=0; i<5; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for( int i=0; i<5; i++)
    {
        if(arr[i]==0){
            n=1+i;
            break;}
    }
    printf("%lld\n",n);
    return 0;
}

