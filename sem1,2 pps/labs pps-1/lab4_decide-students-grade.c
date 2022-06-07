#include <stdio.h>

int main() {

    int m;
    scanf("%d",&m);
    if(m>=90 && m<100)
        printf("AA");
    else if(m>=80 && m<90)
        printf("AB");
    else if(m>=70 && m<80)
        printf("BB");
    else if(m>=60 && m<70)
        printf("BC");
    else if(m>=50 && m<60)
        printf("CC");
    else if(m>=40 && m<50)
        printf("CD");
    else
        printf("DD");
    return 0;
}