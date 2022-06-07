#include <stdio.h>

int main() {


    int num,op,q,n1,n2,d1,d2;
    scanf("%d",&num);
    q=num/30;
    n1=30*q;
    if((num*30)>0){
        n2=30*(q+1);
    }
    else{
        n2=30*(q-1);
    }
    d1= abs(num-n1);
    d2= abs(num-n2);
    if(d1<d2){
        op=n1;
    }
     else if(d1==d2){
         if(n1<n2){
             op=n1;
         }
         else if(n2<n1){
             op=n2;
         }
     }
    else{
        op=n2;
    }
    printf("%d",op);
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}