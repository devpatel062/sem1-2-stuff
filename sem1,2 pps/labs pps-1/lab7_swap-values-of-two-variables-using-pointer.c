#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  	int x , y;
  	int *xp = &x, *yp = &y;
    scanf("%d %d", xp, yp);
  
  	
  int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;
  	printf("%d %d", x, y);
    return 0;
}