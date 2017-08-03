#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* funnyString(char* s){
  char* answer = malloc(sizeof(char) * 10);
  if(strlen(s) == 2){
    answer = "Funny";
    return answer;
  }
  // Complete this function
  int n_iteration,i,j,result = 1;
  if(strlen(s) % 2 == 0 )
    n_iteration = strlen(s) / 2;
  else
    n_iteration = strlen(s) / 2 + 1;
  for(i=0,j=strlen(s) - 1; i < n_iteration -1  && j > 1;i++,j--){
    int difference1 = abs(((int) s[i]) - ((int) s[i+1]));
    int difference2 = abs(((int) s[j]) - ((int) s[j-1]));
    if(difference1 != difference2){
      result = 0;
      break;
    }
  }
  if(result)
    answer = "Funny";
  else
    answer = "Not Funny";
  return answer;
}

int main() {
  int q,a0; 
    scanf("%i", &q);    
    for(a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result_size;
        char* result = funnyString(s);
        printf("%s\n", result);
    }
    return 0;
}
