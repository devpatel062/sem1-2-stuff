#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,m,n,x,y;
    //int matrix1[i][j],matrix2[i][j],total[i][j];
    
    scanf("%d\t%d",&m,&n);
    scanf("%d\t%d",&x,&y);
     
    int matrix1[m][n],matrix2[x][y],total[x][y];
    
    if((m==x) && (n==y)){
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d\t",&matrix1[i][j]);
        }
    }
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d\t",&matrix2[i][j]);
        }
    }
    
        
    printf("%d\t%d\n",x ,y);
        
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            total[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d\t",total[i][j]);
        }printf("\n");
    }
    
    }
    else
        printf("ADDITION NOT POSSIBLE");
    
    return 0;
}
