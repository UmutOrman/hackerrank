#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int is_power(unsigned long long int x, unsigned long long int y){
  while (x%y == 0)  
    x = x / y;
  return x == 1;
}


unsigned long long int* is_beautiful(char* s){
  int n_digits = 1, increment,i = 0,j,start_flag = 0,counter = 0;
  unsigned long long  int *result = malloc(sizeof(unsigned long long int)*2);  
  while(i < strlen(s) - n_digits && n_digits < 17){  
    
    increment = n_digits;
    if(s[0] == '0'){
      	result[0] = 0;
	return result;
    }    
    //if(counter == 0 && i)
    char* current_value = malloc(sizeof(char) * n_digits);
    for(j = 0; j < n_digits; j++){
      current_value[j] = s[i+j];
    }    
    unsigned long long int current_number = atoll(current_value);     

    if( current_number + 1 != 1 && is_power(current_number + 1 , 10))
      n_digits++;

    char* next_value = malloc(sizeof(char) * n_digits);   
    if(i+increment >= strlen(s)){
      result[0] = 0;
      return result;
    }
    for(j = 0; j < n_digits; j++){
      next_value[j] = s[i+increment+j];      
    }    
    unsigned long long next_number = atoll(next_value);   
    printf("%llu %llu %d\n",current_number,next_number, n_digits);
    if(next_number != current_number + 1){   
      if (!is_power(current_number + 1, 10)){
	result[0] = 0;
	i = 0;
	n_digits++;
	counter = 0;
	continue;
      /*if(start_flag){
	result[0] = 0;    	
	return result;
      }
      */
      }
    }
    else{
      counter++;
      if(counter == 1)
	result[1] = current_number;
      /*
      if(!start_flag){
	start_flag = 1;
	//printf("%d\n",current_number);
	result[1] = current_number;
      }
      */
    }
    
    if(counter > 0)
      i += increment;
    else if(counter == 0 && !is_power(current_number + 1, 10))
      n_digits++;
      
    //printf("%d %d\n",i,strlen(s) - n_digits);
      /*
      if(next_number % 10 == 9)
	i += 2 * increment;
      else
	i += increment + n_digits;
      */
  
    free(current_value);
    free(next_value);
  }
  if(!counter){
    result[0] = 0;
    return result;
  }

   result[0] = 1;
   return result;
}


int main(){
    int q; 
    scanf("%d",&q);
    int a0;
    for(a0 = 0; a0 < q; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s",s);
	unsigned long long int* result = malloc(sizeof(int)*2);
	result = is_beautiful(s);
	if(result[0])
	  printf("YES %llu\n",result[1]);
	else
	  printf("NO\n");
        /*
	int n_digits;
	int first = s[0] - '0';
	if(first == 9){
	  if(s[1] != '1' || s[2] != '0' || strlen(s) % 2 != 1)
	    printf("NO\n");
	  else{	   
	    int is_true = 1, current = 11, i;
	    for( i = 3; i < strlen(s) - 1; i += 2){
	      int digit1 = s[i] - '0';
	      int digit2 = s[i+1] - '0';
	      //printf("%d %d\n",digit1, digit2);
	      if( (digit1 * 10 + digit2) != current){
	         printf("NO\n");
		 is_true = 0;
		 break;
	      }
	      else
	         current++;
	    }
	  if(is_true)
	    printf("YES\n");
	  }
        }
	*/
    }	 

    return 0;
}
