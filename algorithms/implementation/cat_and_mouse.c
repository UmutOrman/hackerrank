#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int q; 
    scanf("%d",&q);
    int a0;
    for(a0 = 0; a0 < q; a0++){
        int x; 
        int y; 
        int z; 
        scanf("%d %d %d",&x,&y,&z);
	if(abs(x - z) > abs(y - z))
	  printf("Cat B\n");
	else if(abs(x - z) < abs(y - z))
	  printf("Cat A\n");
	else
	  printf("Mouse C\n");
    }
    return 0;
}
