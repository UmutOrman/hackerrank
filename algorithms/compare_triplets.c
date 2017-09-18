#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* solve(int a0, int a1, int a2, int b0, int b1, int b2, int *result_size){
    // Complete this function
  int *result = (int*)(malloc(sizeof(int) * 2));
  *result_size = 2;
  if(a0 > b0){
    result[0] = 1;
    result[1] = 0;
  }
  else if(b0 > a0){
    result[1] = 1;
    result[0] = 0;
  }
  else{
    result[1] = 0;
    result[0] = 0;
  }
  if(a1 > b1)
    result[0]++;   
  else if(b1 > a1)
    result[1]++;   
  if(a2 > b2)
    result[0]++;   
  else if(b2 > a2)
    result[1]++;   
  return result;
}

int main() {
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d", &a0, &a1, &a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d", &b0, &b1, &b2);
    int result_size,result_i;
    int* result = solve(a0, a1, a2, b0, b1, b2, &result_size);
    for(result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", result[result_i]);
    }
    puts("");
    

    return 0;
}
