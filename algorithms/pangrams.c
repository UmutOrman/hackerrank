#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char* s = (char*)malloc(512000 * sizeof(char));
    fgets(s, 512000, stdin);
    int letters_cache[26];// update the list when you encounter with
    int i;                // a letter, 1 for hit, 0 for miss
    for(i = 0; i < 26; i++)
      letters_cache[i] = 0; // prepare the cache
    //read all string and update the cache
    for(i = 0; i < strlen(s); i++){
      if(s[i] >= 'A' && s[i] <= 'Z' )
	letters_cache[((int) s[i]) - 65] = 1;
      else if(s[i] >= 'a' && s[i] <= 'z')
	letters_cache[((int) s[i]) - 97] = 1;
    }
    //check if all letters are used in string or not
    int counter = 0;
    for(i = 0; i < 26; i++){
      if(letters_cache[i] == 1)
	counter++;
    }
    //print the result
    if(counter == 26)
      printf("pangram\n");
    else
      printf("not pangram\n");
    return 0;
}
