#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


char cipherIt(char uncrypted,int k){
  //if char is a lowerCase Letter
  char crypted;
  if(uncrypted >= 'a' && uncrypted <= 'z'){
      int ascii =  (int)uncrypted;
      int letter_uncrypted = ascii - 97;
      int letter_crypted = (letter_uncrypted + k) % 26;
      crypted = 'a' + letter_crypted;
  }
  else if(uncrypted >= 'A' && uncrypted <= 'Z'){
      int ascii = (int)uncrypted;
      int letter_uncrypted = ascii - 65;
      int letter_crypted = (letter_uncrypted + k) % 26;
      crypted = 'A' + letter_crypted;
  }
  else{
      crypted = uncrypted;
  }
  return crypted;
}

int main(){
    int n; 
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int k; 
    scanf("%d",&k);
    int i;
    char* crypted_string = (char*)malloc(10240 * sizeof(char));
    for( i = 0; i < n; i++){
      crypted_string[i] = cipherIt(s[i],k);
    }
    printf("%s\n",crypted_string);
    return 0;
}
