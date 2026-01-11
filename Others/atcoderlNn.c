
#include<stdio.h>
#define ll long long int
#define dub double
#define dubb long double
#define pb push_back
#define pi acos(-1)
int main(){
    ll i,t=1;
    while(t--)
    {

        char p1[100];
        char p2[100];
        scanf("%s",p1);
        scanf("%s",p2);
        ll p=strcmp(p1,"AtCoder");
        ll q=strcmp(p2,"Land");
        if(p==0 && q==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }


    }
    return 0;
}

