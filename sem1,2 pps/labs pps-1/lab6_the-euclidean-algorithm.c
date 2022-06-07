#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


long int find_gcd(unsigned long long int a,unsigned long long int b){
        if(a==0)
            return b;
        return find_gcd(b %a , a);
    }   

int main() {
    
    unsigned long long int a,b;
    scanf("%llu %llu",&a,&b);
    printf("%ld",find_gcd(a,b));

    
    
    return 0;
}
