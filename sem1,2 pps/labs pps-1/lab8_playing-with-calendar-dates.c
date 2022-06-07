#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
	/* define appropriate members here */
    int mm,dd,yyyy,hh,MM,ss;
}date;

date temp1;

short is_later(date y1, date y2)
{
    if(y1.yyyy>y2.yyyy)
        return 1;
    else
        return 0;
}
void print_date(date d[],int num_of_dates)
{
    int i;
    for(i=0;i<num_of_dates;i++)
        printf("%.02d/%.02d/%.04d %.02d:%.02d:%.02d\n",d[i].dd,d[i].mm,d[i].yyyy,d[i].hh,d[i].MM,d[i].ss);

}
date sort_dates(date di,date dj)
{
     temp1=di;
     di=dj;
     dj=temp1;
    
    return di;
}
date set_date(date d[],int num_of_dates)
{
    int i,temp,j;
  
    for(i=0;i<num_of_dates;i++)
        scanf("%d %d %d %d %d %d ",&d[i].yyyy,&d[i].mm,&d[i].dd,&d[i].hh,&d[i].MM,&d[i].ss);
    
    for(i=0;i<(num_of_dates-1);i++)
    {   
        for(j=i+1;j<num_of_dates;j++)
        {
            temp=is_later(d[i],d[j]);
            if(temp==1)
            {   
               d[i]=sort_dates(d[i],d[j]);
               d[j]=temp1;
            }
        }
    }
    print_date(&d[0],num_of_dates);
    return d[0];
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int num_of_dates;
    scanf("%d",&num_of_dates);
    
    printf("%d\n",num_of_dates);
    date d[num_of_dates];
    set_date(&d[0],num_of_dates);
   
    return 0;
}