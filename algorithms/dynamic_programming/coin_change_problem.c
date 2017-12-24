#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long getWays(long n, int c_size, long int* c, long size1, long size2, long int vals[size1][size2]){
  //base cases
  if(n < 0  || c_size <= 0)
    return 0;
  else if(n == 0)
    return 1;
  else{    
    if(vals[n-1][c_size-1] == -1){      
      //find value of getWays(n,m,.....) by recurrence relation if the current value of getWays(n,m,.....) is not calculated before
      vals[n-1][c_size-1] = getWays(n, c_size - 1, c, size1, size2, vals) + getWays(n - c[c_size-1], c_size, c, size1, size2, vals);
    }  
    return vals[n-1][c_size-1];
  }
}

int main() {
    int n;
    int m,c_i,c_j; 
    scanf("%d %d", &n, &m);
    long *c = malloc(sizeof(long) * m);    
    long size1 = n;
    long size2 = m;
    long vals[n][m];
    //for sake of runtime of program
    //memorization is one of key-tools in dynamic programming 
    // this 2D Array holds values of number of ways of making changes for 'n' units using first 'm' coins from our coin array
    for(c_i = 0; c_i < n; c_i++){
      for(c_j = 0; c_j < m; c_j++)
	vals[c_i][c_j] = -1;
    }
    for(c_i = 0; c_i < m; c_i++){
       scanf("%ld",&c[c_i]);
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = getWays(n, m, c, size1, size2, vals);
    printf("%ld\n",ways);
    free(c);
    return 0;
}
