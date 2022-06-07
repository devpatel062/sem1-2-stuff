#include <stdio.h>

int main() {
int a,i,j,n=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        
        for(j=0;j<a;j++){
            if(j>=i)
            {
                printf("%d",n);
                n++;
            }
            else
            {
                printf(" ");
            }
            }
        printf("\n");
    }
        
    return 0;
}
