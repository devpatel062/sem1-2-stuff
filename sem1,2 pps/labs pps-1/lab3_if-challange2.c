#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,x;
    scanf("%d",&a);
    x=printf("%d",a);
    if(a>=0 && x%2!=0)
        printf("%d",x);
    
    if(a<0 && x%2!=0){
        
        printf("%d",x);
    }
    return 0;
}
