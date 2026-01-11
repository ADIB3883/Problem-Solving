#include<stdio.h>
#include<math.h>
int main()
{
    long long int a;
    double b;
    scanf("%lld %lf",&a,&b);
    long long int d= round(b*100);
    long long int c=a*d/100;
    printf("%lld",c);
}
