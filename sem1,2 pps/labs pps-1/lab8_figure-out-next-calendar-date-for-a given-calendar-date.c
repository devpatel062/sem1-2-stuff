#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
	/* define appropriate members here */
    int yyyy,dd,mm;
}date;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int total_dates,i;
    scanf("%d",&total_dates);
    
    date d[total_dates];
    
    for(i=0;i<total_dates;i++)
    {
        scanf("%d %d %d",&d[i].yyyy,&d[i].mm,&d[i].dd); 
        if(d[i].mm == 2 && d[i].dd == 28)  
        {
            if(d[i].yyyy%400 == 0 || (d[i].yyyy%4 == 0 && d[i].yyyy%100 != 0) ) 
            {
                d[i].dd+=1;
                continue;
            }
            else
            {
                
                d[i].dd=1;
                d[i].mm+=1;
                continue;
            }
        }          
        else if(d[i].mm == 2)
        {
           if(d[i].dd != 29)
           {
               d[i].dd+=1;
               continue;
           }
           else
           {
               d[i].dd=1;
               d[i].mm=3;
               continue;
           }
        }
        switch(d[i].mm)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                if(d[i].dd != 31)
                {
                    d[i].dd+=1;
                    break;
                }
                else 
                {   
                    d[i].dd=1;
                    d[i].mm+=1;
                    break;
                }
            case 12:
                if(d[i].dd != 31)
                {
                    d[i].dd+=1;
                    break;
                }
                else 
                {
                    d[i].dd=1;
                    d[i].mm=1;
                    d[i].yyyy+=1;
                    break;
                }
            case 4:
            case 6:
            case 9:
            case 11:
                if(d[i].dd != 30)
                {   
                    d[i].dd+=1;
                    break;
                }
                else
                {  
                    d[i].dd=1;
                    d[i].mm+=1;
                    break;
                }       
        }
    }
    for(i=0;i<total_dates;i++)
        printf("%.04d %.02d %.02d\n",d[i].yyyy,d[i].mm,d[i].dd);
    
    return 0;
}