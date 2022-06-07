#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct point
{
	int x, y;
}pt;

typedef struct rectangle
{
	pt pt1;
	pt pt2;
}rect;

int rect_possible_or_not(rect co)
{
    if (co.pt1.x == co.pt2.x || co.pt1.y == co.pt2.y)
        return -1;
    else
        return 0;
}
int area(rect co)
{
    if (rect_possible_or_not(co))
        return -1;
    else
        return abs((co.pt1.x - co.pt2.x) * (co.pt1.y - co.pt2.y));
}
int perimeter(rect co)
{
    if (rect_possible_or_not(co))
        return -1;
    else
        return (abs(co.pt1.x - co.pt2.x) + abs(co.pt1.y - co.pt2.y)) * 2;
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     rect co;
    scanf("%d, %d %d,%d", &co.pt1.x, &co.pt1.y, &co.pt2.x, &co.pt2.y);

    int area_is = area(co);
    printf("%d\n", area_is);
    if (-1 != area_is)
        printf("%d", perimeter(co));

    
    return 0;
}