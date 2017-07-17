#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(100240 * sizeof(char));
    scanf("%s",s);
    int i,counter = 1;
    for(i = 0; i < strlen(s); i++){
      if(s[i] <= 'Z' && s[i] >= 'A')
	counter++;
    }
    printf("%d\n",counter);
    return 0;

}


