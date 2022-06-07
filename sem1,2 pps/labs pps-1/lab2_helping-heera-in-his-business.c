#include <stdio.h>

int main() {

    float M,P,L,N,T;
    int profit;
    scanf("%f",&M);
    scanf("%F",&P);
    scanf("%f",&L);
    scanf("%f",&N);
    scanf("%f",&T);
    profit=(N*T)-((L/M)*P);
    printf("%d",profit);
    return 0;
}