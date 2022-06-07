#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long factorial(int n);

int main()
{

    int n;
  	long fact;
  
  	scanf("%d", &n);
  	fact = factorial(n);
  	printf("%ld", fact);
  
    return 0;
}

long factorial(int n)
{
  	if(n==0)
        return 1;
    
    return(n*factorial(n-1));
}