#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

short is_reverse(const int *const arr1_start, const int *const arr2_end, int length)
{
	// arr1_start would hold address of first element of arr1
	// arr2_end would hold address of last element of arr2
	// Assume that both the arrays are of size length. You do not need to validate this
	// If arr1 and arr2 are int arrays of size length then call statement should look like this
	// is_reverse(arr1, arr2 + length – 1, length);
	// Write code here without using additional pointers
	// Also do not use array indexing syntax
	// You have to use pointer offset method to implement this function
    int i;
    for(i=0;i<length;i++){
        if(*(arr1_start+i)!=*(arr2_end-i))
            return 0;
        
        
        
    }   return 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,size,arr1[1000],arr2[2000];
    scanf("%d",&size);
    
    for(i=0;i<size;i++){
        scanf("%d",&arr1[i]);
    }
    
    for(i=0;i<size;i++){
        scanf("%d",&arr2[i]);
    }
    
    printf("%d",is_reverse(arr1,arr2+size-1,size));
    return 0;
}