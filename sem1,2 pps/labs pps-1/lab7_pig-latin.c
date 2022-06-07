#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void pigLatin(char english[])
{
    int index = 0;
    char piglatin[800];

    for (int i = 0, start = 0 , locateSpace = 0; english[i] != '\0'; i++, locateSpace++)
    {
        char temp = english[i];
        if(temp=='\n')
        continue;

for (;english[i] != ' '&&english[i] != '\0' &&english[i]!='.' &&english[i]!='\n';) {
            locateSpace++;
            i++;
        }

        for (; start < locateSpace ; start++ , index++) {
            piglatin[index] = english[start +1];
        }

        piglatin[index - 1] = temp; 
        if(english[locateSpace]!='.')
        {
        piglatin[index] = 'l'; 
        piglatin[index + 1] = 'y';
        if(english[locateSpace]!='\0')
        {
        piglatin[index + 2] = ' ';
        index += 3;
        }
        else
        index+=2;
        start = locateSpace+1;
        }
        else
        {
        piglatin[index] = 'l'; 
        piglatin[index + 1] = 'y';
        piglatin[index + 2] = '.';
        piglatin[index + 3] = '\n';        
        index+=4;
        start=locateSpace +2;
        }
    }
    piglatin[index] = '\0';
printf("%s",piglatin);
}
int main() 
{
     char str[10000];
    char c;
    int count=0;
    while((c=getchar())!=EOF)
    {
        str[count]=c;
        count++;
    }
    pigLatin(str);
        
    return 0;
}