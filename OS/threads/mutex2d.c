#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
int total = 0;               // shared final sum
pthread_mutex_t mut;         // mutex

void *fn(void* add) {
    int row = *(int *)add;
    free(add);

    int row_sum = 0;
    for (int j = 0; j < 3; j++) {
        row_sum += arr[row][j];
    }

    // protect update of shared total
    pthread_mutex_lock(&mut);
    total += row_sum;
    pthread_mutex_unlock(&mut);

    return NULL;  // nothing to return now
}

int main() {
    pthread_t p[3];
    pthread_mutex_init(&mut, NULL);

    for (int i = 0; i < 3; i++) {
        int *a = malloc(sizeof(int));
        *a = i;
        pthread_create(&p[i], NULL, fn, (void*)a);
    }

    for (int i = 0; i < 3; i++) {
        pthread_join(p[i], NULL);
    }

    pthread_mutex_destroy(&mut);

    printf("Final sum = %d\n", total);
    return 0;
}
