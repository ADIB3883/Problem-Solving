#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int arr[3][3]={{1 ,2, 3},{4, 5 ,6},{7, 8, 9}};
void *fn(void*add)
{
    int row=*(int *)add;
    free(add);
    int *row_sum=malloc(sizeof(int));
    *row_sum=0;
    for(int j=0;j<3;j++)
    {
        *row_sum+=arr[row][j];
    }
    return (void*)row_sum;
}
int main()
{
    pthread_t p[3];
    for(int i=0;i<3;i++)
    {
        int *a=malloc(sizeof(int));
        *a=i;
        pthread_create(&p[i],NULL,fn,(void*)a);
    }
    int total=0;
    int *row_sum;
    for(int i=0;i<3;i++)
    {
        pthread_join(p[i],(void**)&row_sum);
        total+=*row_sum;
        free(row_sum);
    }
    printf("%d",total);

}

