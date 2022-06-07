#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1,n2,n3,number;
        
        scanf("%d %d %d", &n1, &n2, &n3);
    number = n1 > n2 ? (n1 > n3 ? n1 : n3) : ( n2 >n3 ? n2 : n3);
    printf("%d",number);
              
    
    
    
    return 0;
}
