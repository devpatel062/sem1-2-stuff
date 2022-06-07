#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int r1,r2,c1,c2,i,j;
    scanf("%d %d\n%d %d",&r1,&c1,&r2,&c2);
    if(c1==r2){
        int matrix1[r1][c1];
        int matrix2[r2][c2];
        int result[r1][c2];
        for(i=0,j=0 ; j<c1 ?  : (j=0,i++,i<r1);j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
        for(i=0,j=0 ; j<c2 ? : (j=0,i++,i<r2);j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
        printf("%d\t%d\n",r1,c2);
        for(i=0,j=0 ; j<c2 ? :(j=0,i++,i<r1);j++)
        {
            result[i][j]=0;
        }
        for(i=0,j=0 ; j<c2 ? : (j=0,i++,i<r1);j++)
        {
            
            for(int k=0;k<c1;k++)
            {
                
                result[i][j]+=matrix1[i][k] * matrix2[k][j];
            }
        }
        for(i=0,j=0 ; j<c2 ? : (printf("\n"),j=0,i++,i<r1);j++)
        {
            printf("%d\t",result[i][j]);
        }
        
    }
    else
        printf("MULTIPLICATION NOT POSSIBLE");
    return 0;
}
