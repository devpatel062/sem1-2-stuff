#include <stdio.h>

int main() {

   long P , interest;
    float R,N;
    
    scanf("%ld",&P);
    scanf("%f",&R);
    scanf("%f",&N);
    interest=(P*R*N)/100;
    printf("%d",interest);
    return 0;
}