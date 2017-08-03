#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


void removeCharTwice(char *str, char garbage, int index) {

    int hit = 0;
    int counter = 0, index_counter = 0;
    char *src, *dst;
    for (src = dst = str; *src != '\0'; src++, index_counter++) {
        *dst = *src;
        if (*dst != garbage || hit || index_counter < index) {
	  dst++;
	}
	else
	  counter++;
	if (counter == 2)
	  hit = 1;
    }
    *dst = '\0';
}

char* super_reduced_string(char* s){
  int i;
  for(i = 0; i < strlen(s) - 1;){
    if(s[i] == s[i+1]){
      char garbage = s[i];
      removeCharTwice(s, garbage,i);
      i = 0;
      if(strlen(s) == 0)
	break;
    }
    else
      i++;
  }
  if(strlen(s) == 0){
    s = "Empty String";
  }
    
  return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = super_reduced_string(s);
    printf("%s\n", result);
    return 0;
}
