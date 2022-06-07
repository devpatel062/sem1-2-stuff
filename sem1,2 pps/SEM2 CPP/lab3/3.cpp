#include <iostream>
#define PI 3.14
#include<cstring>
#include<iomanip>
using namespace std;

float area(double sq1)
{
    return sq1*sq1;
}

float area(float r3,float r4)
{
    return r3*r4;
}

float area(float c)
{
    return PI*c*c;
}

int main() {
    
    char shape[10];
    float c;
    float r1,r2;
    double sq;
    
    cin>>shape;
    
    if('s'==shape[0])
    {
        cin>>sq;
        cout<<area(sq);
    }
    else if('e'==shape[8])
    {
        cin>>r1>>r2;
        cout<<area(r1,r2);
    }
    else
    {
        cin>>c;
        cout<< area(c);
    }
     
    return 0;
}