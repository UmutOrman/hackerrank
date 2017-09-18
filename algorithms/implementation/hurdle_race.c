#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    int max = k;
    int count = 0,height_i;
    for(height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
       if(height[height_i] > max){
	 count += height[height_i] - max;
	 max = height[height_i];	 
       }
    }
    printf("%d\n",count);    
    free(height);
    return 0;
}
