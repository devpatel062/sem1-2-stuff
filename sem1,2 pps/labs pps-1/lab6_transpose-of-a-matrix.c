#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int row,column,i,j;
    
    scanf("%d\t%d",&row,&column);
    
    int matrix[100][100],matrix_transpose[100][100];
    
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    printf("%d\t%d\n",column ,row);
    i=0,j=0;
    
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            matrix_transpose[j][i]=matrix[i][j];
        }
    }
    for(j=0;j<column;j++){
        for(i=0;i<row;i++){
            printf("%d\t",matrix_transpose[j][i]);
        }printf("\n");
    }
    
    return 0;
}
