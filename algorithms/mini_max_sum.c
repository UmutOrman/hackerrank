#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int min = LLONG_MAX;
    long int max = LLONG_MIN;
    int *arr = malloc(sizeof(int) * 5);
    int arr_i,i,j;
    for(arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    long int *sums = malloc(sizeof(long) * 5);
    for (i = 0; i < 5; i++){
        sums[i] = 0;
        for (j = 0; j < 5; j++){
             if(i != j)
                sums[i] += arr[j];
        }
        if (sums[i] > max)
            max = sums[i];
        if(sums[i] < min)
            min = sums[i];
    }
    printf("%ld %ld\n",min, max);
    free(sums);
    free(arr);
    return 0;
}

