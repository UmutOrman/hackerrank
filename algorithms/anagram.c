#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int anagram(char* s){
  int moj_result;
  if(strlen(s) % 2 == 1)
    moj_result = -1;
  else{
    int bmap[strlen(s)/2];
    int i,j;
    moj_result = strlen(s) / 2;
    for (i = 0; i < strlen(s) / 2; i++)
      bmap[i] = 0;    
    for(i=0; i < strlen(s) / 2 ; i++){
      for(j = strlen(s) / 2; j < strlen(s); j++){
	if(s[i] == s[j] && bmap[j - strlen(s) / 2] == 0){
	  bmap[j - strlen(s) / 2] = 1;
	  moj_result--;
	  break;
	}
      }
    }
  }
  return moj_result;
}

int main() {
    int q,a0; 
    scanf("%i", &q);
    for(a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        int result = anagram(s);
        printf("%d\n", result);
    }
    return 0;
}
