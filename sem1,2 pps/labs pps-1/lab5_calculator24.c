#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void addition(int,int);
void subtraction(int,int);
int multiplication(int,int);
float division(int,int);

void addition(int no1,int no2){
    printf("%d",no1+no2);
    }
void subtraction(int no1,int no2){
    printf("%d",no1-no2);
}
int multiplication(int no1,int no2){
    return no1*no2;
}
float division(int no1,int no2){
    return (float)no1/no2;
}
int main() {
    int no1,no2,operation;
    scanf("%d %d %d",&no1,&no2,&operation);
    if (operation==1)
        addition(no1,no2);
    else if(operation==2)
        subtraction(no1,no2);
    else if(operation==3){
        int x=multiplication(no1,no2);
        printf("%d",x);}
    else if(operation==4){
        float y=division(no1,no2);
        printf("%f",y);}
        
        
    

    
    
    return 0;
}
