#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    int n,i,j,k,a0; 
    scanf("%d",&n);      
    char *query_values = malloc(100000*100*sizeof(char));   
    int occurences = 1;
    char last_letter = 'A';
    for(i = 0; i < 100000*27; i++)
      query_values[i] = 'N';

    for( i = 0; i < strlen(s); i++){
      if(last_letter == s[i])
	  occurences++;
      else
	  occurences = 1;
      query_values[(((int) s[i]) - 96) * occurences] = 'Y';
      last_letter = s[i];
    }

    for(a0 = 0; a0 < n; a0++){
        int x; 
        scanf("%d",&x);	
        if(query_values[x] == 'Y')
	  printf("Yes\n");
	else
	  printf("No\n");
    }    
    free(s);
    free(query_values);
    return 0;
}
