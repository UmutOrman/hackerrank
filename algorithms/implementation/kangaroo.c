#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
  int i;
  char* result = malloc(sizeof(char) * 4);
  for(i = 0; i < INT_MAX && x1 < INT_MAX && x2 < INT_MAX; i++){
    if(x1 == x2){
      result = "YES";      
      return result;
    }
    else if(x1 > x2 && v1 >= v2){
      result = "NO";
      return result;
    }
    else if(x2 > x1 && v1 <= v2){
      result = "NO";
      return result;
    }
    // printf("%d %d\n",x1,x2);
    x1 += v1;
    x2 += v2;      
  }
  result = "NO";
  return result;
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
