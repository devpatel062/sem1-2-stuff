#include <stdio.h>



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
long long binary(long long int n)
{
   int a[100],i;
    if(n==0)
        printf("0");
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}
long long int octal(long long int n)
{
    int oct =0,i =1;
    while(n!=0)
    {
        oct +=(n%8)*i;
        n/=8;
        i*=10;
    }
    return oct;
}
long long int hexa(long long int n)
{
 int quo;
    int i=1,j,temp;
    char hexa[100];
    quo=n;
    if(quo==0)
    {
        printf("0");
    }
    while(quo!=0)
    {
        temp=quo%16;
        if(temp<10)
        {
            temp=temp+48;
        }
        else{
            temp=temp+55;
        }
        hexa[i++]=temp;
        quo=quo/16;
    }
    for(j=i-1;j>0;j--)
    {
        printf("%c",hexa[j]);
    }
    return 0;
}

int main() {
    long long int n;
    scanf("%lld",&n);
    binary(n);
    printf("\n");
    printf("%lld",octal(n));
    printf("\n");
    hexa(n);
    

    return 0;
}