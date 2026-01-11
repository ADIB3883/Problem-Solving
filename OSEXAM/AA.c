#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

int N, M;
int arr[100][100];

void* fn(void* add) {
    int row = *(int*)add;
    free(add);

    int *sum = malloc(sizeof(int));
    *sum = 0;

    for (int j = 0; j < M; j++) {
        *sum += arr[row][j];
    }
    return (void*)sum;
}

int main() {
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter M: ");
    scanf("%d", &M);

    pthread_t p[N];

    printf("Enter elements of %dx%d matrix:\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        int *a = malloc(sizeof(int));
        *a = i;
        pthread_create(&p[i], NULL, fn, (void*)a);
    }

    int *thread_sum;
    int total = 0;

    for (int i = 0; i < N; i++) {
        pthread_join(p[i], (void**)&thread_sum);
        printf("Row %d sum: %d\n", i, *thread_sum);
        total += *thread_sum;
        free(thread_sum);
    }

    printf("Total Array Sum: %d\n", total);
    return 0;
}
