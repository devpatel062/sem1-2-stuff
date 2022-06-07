#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,count;
    count=0;
    scanf("%d",&a);
    while(count<15)
    {
      if(a%400==0 || (a%4==0 && a%100!=0)){
        printf("%d",a);
        printf(" ");  
        count=count+1;
    
        }
        a=a+1;

    }    
    
    return 0;
}
