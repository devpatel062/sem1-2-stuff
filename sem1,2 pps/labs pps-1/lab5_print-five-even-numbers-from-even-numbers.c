#include <stdio.h>

int main() {

    int b,a;
    scanf("%d",&a);
    if(a%2==0)
        printf("%d %d %d %d %d",a,a+2,a+4,a+6,a+8);
    else{
        b=a+1;
        printf("%d %d %d %d %d",b,b+2,b+4,b+6,b+8);
    }
       
    
     
    
    return 0;
}