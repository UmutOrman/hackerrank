#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q,a0; 
    scanf("%d",&q);
    int result[q];
    for(a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
        // your code goes here for each test case
	int i,counter = 0;
	for(i = 0; i < strlen(s); i++){
	  if(s[i] == 'h' && counter == 0)
	    counter++;
	  else if(s[i] == 'a' && counter == 1)
	    counter++;
	  else if(s[i] == 'c' && counter == 2)
	    counter++;
	  else if (s[i] == 'k' && counter == 3)
	    counter++;
	  else if (s[i] == 'e' && counter == 4)
	    counter++;
	  else if (s[i] == 'r' && counter == 5)
	    counter++;
	  else if (s[i] == 'r' && counter == 6)
	    counter++;
	  else if(s[i] == 'a' && counter == 7)
	    counter++;
	  else if (s[i] == 'n' && counter == 8)
	    counter++;
	  else if (s[i] == 'k' && counter == 9)
	    counter++;
	}
	if(counter == 10)
	  result[a0] = 1;
	else
	  result[a0] = 0;
    }
    int i;
    for(i = 0; i < q; i++){
      if(result[i])
	printf("YES\n");
      else
	printf("NO\n");
    }
    return 0;
}
