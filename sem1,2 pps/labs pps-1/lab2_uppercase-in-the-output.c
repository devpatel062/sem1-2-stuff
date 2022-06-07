#include <stdio.h>

int main() {

    char a;
    char b;
    char c;
    char d;
    char e;
    scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    printf("%c%c%c%c%c",toupper(a),toupper(b),toupper(c),toupper(d),toupper(e));
    
    return 0;
}