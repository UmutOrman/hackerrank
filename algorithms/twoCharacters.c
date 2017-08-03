#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void removeChar(char* s, char garbage){
  char *src,*dst;
  for(src=dst=s; *src != '\0'; src++){
    *dst = *src;
    if(*dst != garbage)
      dst++;
  }
  *dst = '\0';
}

int tString(char* s){
  int i,result;
  for(i = 0; i < strlen(s) - 1; i++){
    if(s[i] == s[i+1]){
      result = 0;
      return result;
    }
  }
  return strlen(s);
}

int main(){
    int len; 
    scanf("%d",&len);
    char* s = (char *)malloc(1001 * sizeof(char));
    scanf("%s",s);
    char* chars = malloc(sizeof(char)*2000);
    int num_chars = 0,i,j;
    for(i=0; i < strlen(s); i++){
      int has = 0;
      for(j = 0; j < num_chars; j++){
	if(s[i] == chars[j])
	  has = 1;      
      }
      if(!has){
	chars[num_chars] = s[i];
	num_chars++;	
      }
    }
    int result = 0;
    if(num_chars < 2)
      printf("%d\n",result);
    else if(num_chars == 2){
      result = tString(s);
      printf("%d\n", result);
    }
    else{
      int result_list[(num_chars)*(num_chars-1)];//combination of picking 2 from num_chars *2 :D 
      int counter = 0;     
      for(i=0; i < num_chars; i++){
	for(j=0; j < num_chars; j++){
	  if( i != j){
	    char* copieds = (char*)malloc(512000 * sizeof(char));
	    strcpy(copieds, s); //beware use of this for buffer overflows and heap corruptions
	    char lucky1,lucky2;
	    lucky1 = chars[i];	  
	    lucky2 = chars[j];
	    int k;
	    for(k = 0; k < num_chars; k++){
	      if(chars[k] != lucky1 && chars[k] != lucky2)
		removeChar(copieds, chars[k]);	
	    }
	    result_list[counter] = tString(copieds);
	    counter++;
	    free(copieds);
	  }
	}
      }      
      int max = -1;
      for(i=0; i < (num_chars)*(num_chars-1); i++){
	if(result_list[i] > max)
	  max = result_list[i];
      }
      printf("%d\n", max);
    }
    free(s);
    return 0;
}
