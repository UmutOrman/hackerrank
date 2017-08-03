#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeConversion(char* s) {
    char *result = malloc(sizeof(char)*8);
    if(s[strlen(s)-2] == 'A'){
      if(s[0] == '1' && s[1] == '2'){
	int i;
	result[0] = '0';result[1] = '0';
	for (i = 2 ; i < 8; i++)
	  result[i] = s[i];
      }
        else{
            int i;
            for (i = 0 ; i < 8; i++)
                result[i] = s[i];
        }
    }
    if(s[strlen(s)-2] == 'P'){      
        if(s[0] == '1' && s[1] == '2'){
	  int i;
	  for(i = 0; i < 8; i++)
	    result[i] = s[i];
	}
        else{
            int i;
            char s_digits[2];
            s_digits[0] = s[0]; s_digits[1] = s[1];
            int digits = atoi(s_digits);
            digits += 12;         
            int digits_first = digits / 10;
	    int digits_second = digits % 10;
	    char first_digit = digits_first + '0';
	    char second_digit = digits_second + '0';
            result[0] = first_digit;
            result[1] = second_digit;
            for(i = 2 ; i < 8; i++){
                result[i] = s[i];
            }                
        }
    }  
    return result;
    
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
