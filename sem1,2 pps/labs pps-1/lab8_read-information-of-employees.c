#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct info{
    char Name[50];
    int ID;
    float Experience;
    float Salary;
}emplyoees[50];
    

int main() {
   
    int no_of_emplyoees,i,count=0;
    scanf("%d",&no_of_emplyoees);
    
    
    for(i=1; i<=no_of_emplyoees; i++)
    {
        scanf("%s",emplyoees[i].Name);
        scanf("%d",&emplyoees[i].ID);
        scanf("%f",&emplyoees[i].Experience);
        scanf("%f",&emplyoees[i].Salary);
        if(emplyoees[i].Experience>=7 && emplyoees[i].Salary<50000){
        count++;
    }
    }
    
    
    printf("%d\n",count);
    
    for(i=1;i<=no_of_emplyoees;i++){
        
        if(emplyoees[i].Experience>=7 && emplyoees[i].Salary<50000){
            
            
             printf("%d ",emplyoees[i].ID);
             printf("%s\n",emplyoees[i].Name);
    
        }
       
         
    }
        
        
return 0;
}
