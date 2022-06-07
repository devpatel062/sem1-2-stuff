#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_char_line(char ch,int no);
void print_ascii_line(char ch,int no);

void print_char_line(char ch,int no){
    for(int i=0;i<no;i++)
    {
        printf("%c\t",ch);
    }   
    printf("\n");
}
void print_ascii_line(char ch,int no){
    for(int i=0;i<no;i++)
    {
        printf("%d\t",(int)ch);
    }printf("\n");
}


int main() {

    int number;
    char input_char;
    scanf("%c %d",&input_char,&number);
    while(((input_char>='a') && (input_char<='z')) || ((input_char>='A') && (input_char<='Z'))){
        
        print_char_line(input_char,number);
        print_ascii_line(input_char,number);
        input_char++;
    }
    
    return 0;
}
