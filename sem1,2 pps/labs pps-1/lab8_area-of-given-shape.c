#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14

typedef struct point
{
	int x, y;
}pt;

typedef struct rectangle
{
	char name[20];
	pt pt1;
	pt pt2;
}rect;

typedef struct circle
{
	char name[20];
	pt centre;
	int radius;
}cl;

typedef union shape
{
	rect r;
	cl c;
}sh;


int area_of_rectangle(rect r)
{
    int l,w;
    scanf(" {{%d",&r.pt1.x);
    scanf(",%d",&r.pt1.y);
    scanf("},{%d",&r.pt2.x);
    scanf(",%d}}",&r.pt2.y);
    
     
    l=(r.pt1.x)-(r.pt2.x);
    w=(r.pt1.y)-(r.pt2.y);
    
   
    if(l<0)
        l=(0-l);
    if(w<0)
        w=(0-w);
     
   printf("%d.00\n",(l*w));
   
    return 0;   
}
float area_of_circle(cl c)
{   
    
    scanf(" {{%d",&c.centre.x);
    scanf(",%d",&c.centre.y);
    scanf("},%d}",&c.radius);
    
    printf("%.2f\n",(pi*(c.radius)*(c.radius)));
    
    return 0;
}
float calculate_area(sh s[],int num_of_inputs)
{
    for(int i=0;i<num_of_inputs;i++)
    {
        scanf("%s",s[i].r.name);
        
        if(!(strcmp(s[i].r.name,"rectangle")))  
            area_of_rectangle(s[i].r);
        
        if(!(strcmp(s[i].r.name,"circle")))
            area_of_circle(s[i].c);
    }
    return 0;
}


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int num_of_inputs;
    scanf("%d",&num_of_inputs);
    
    sh shapes[num_of_inputs];
    printf("%d\n",num_of_inputs);
    
    calculate_area(&shapes[0],num_of_inputs);
    
    

    
    return 0;
}