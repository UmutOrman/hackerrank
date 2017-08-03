#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int grades_size, int* grades, int *result_size){
  int i;
  *result_size = grades_size;
  int *results = malloc(sizeof(int) * grades_size);
  for(i = 0; i < grades_size; i++){
    int remainder = grades[i] % 10 ;
    //printf("%d\n",grades[i]);
    if(grades[i] < 37)
      results[i] = grades[i];
    else if(grades[i] > 37 && remainder > 7 )
      results[i] = grades[i] + 10 - remainder;   
    else if(grades[i] > 37 && remainder > 2 && remainder < 5)
      results[i] = grades[i] + 5 - remainder;
    else
      results[i] = grades[i];
  }
  return results;
}

int main() {
    int n,grades_i,result_i; 
    scanf("%d", &n);
    int *grades = malloc(sizeof(int) * n);
    for(grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    }
    int result_size;
    int* result = solve(n, grades, &result_size);
    for(result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf("\n");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    
    free(grades);
    return 0;
}
