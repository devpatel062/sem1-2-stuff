#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort_integer_array(int arr[],int n){
    int i,j,min_num,temp;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        min_num=i;
        for(j=i+1;j<n;j++){
             if(arr[j]<arr[min_num]){
                 min_num=j;
             }
        }
        temp=arr[i];
        arr[i]=arr[min_num];
        arr[min_num]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    int arr[n];
    sort_integer_array(arr,n);
    

       
    return 0;
}
