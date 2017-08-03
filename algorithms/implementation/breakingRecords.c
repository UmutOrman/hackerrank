#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int* getRecord(int s_size, int* s, int *result_size){
  *result_size = 2;
  int* records = malloc(sizeof(int)*2);
  records[0] = 0; records[1] = 0;
  int records_least = s[0] , records_highest =  s[0],i;
  for(i = 1; i < s_size; i++){
    if(s[i] > records_highest){
      records_highest =  s[i];
      records[0]++;
    }
    if(s[i] < records_least){
      records_least = s[i];
      records[1]++;
    }
  }
  return records;
}

int main() {
    int n,s_i,i; 
    scanf("%d",&n);
    int *s = malloc(sizeof(int) * n);
    for(s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int result_size;
    int* result = getRecord(n, s, &result_size);
    for(i = 0; i < result_size; i++) {
        if (i) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    puts("");
    return 0;
}
