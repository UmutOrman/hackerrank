#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int counter = 0;
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    if(strlen(s) % 3 != 0)
      printf("Please enter a proper message(multiply of 3)\n");
    else{
      int i;
      for(i = 0; i < strlen(s); i++){	
	if((i % 3 == 0 || i % 3 == 2) && s[i] != 'S')
	  counter++;
	else if(i % 3 == 1 && s[i] != 'O')
	  counter++;
      }
    }
    printf("%d\n",counter);
    return 0;
}
