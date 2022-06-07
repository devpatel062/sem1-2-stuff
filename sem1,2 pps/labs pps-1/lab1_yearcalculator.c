#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int year,month,day,day1,day2;
    scanf("%d",&day);
    year=day/360;
    day1=day-year*360;
    month=day1/30;
    day2=day1-month*30;
    printf("%d:%d:%d",year,month,day2);
        
    return 0;
}
