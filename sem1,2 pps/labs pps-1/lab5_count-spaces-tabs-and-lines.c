#include <stdio.h>

int main() {

    char a;
   int line=0,space=0,tab=0;
    while(1)
    {
        a=getchar();
        if(a==EOF)
        {
            break;
        }
        if(a==' '){
            space++;
            }
        if(a=='\n'){
            line++;
        }
        if(a=='\t'){
            tab++;
        }
            
    }
    printf("%d %d %d",space,tab,line);
    
    
    
    return 0;
}