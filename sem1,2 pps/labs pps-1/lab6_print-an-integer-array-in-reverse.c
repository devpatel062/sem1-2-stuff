#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     int numbers_print,i,j;
     //int arr[i];   
   
    scanf("%d",&numbers_print);
    int arr[numbers_print];
    
    for(i=0;i<numbers_print;i++)
        scanf("%d",&arr[i]);
    
    for(j=numbers_print-1;j>=0;j--){
        printf("%d ",arr[j]);
        
    }
    
    
    
    return 0;
}
