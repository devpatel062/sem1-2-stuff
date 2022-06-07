#include <iostream>


float volume(float d)
    {
        float v;
        v=d*d*d;
        
        return v;
    }
    
    float volume(float da,float db,float dc)
    {
        float vp;
        vp=da*db*dc;
        
        return vp;
    }

int main() {
  	char shape[10];
    double d1, d2, d3;
    
  	
  	std::cin >> shape;
  	if('e' == shape[3])
    {
      	std::cin >> d1;
      	std::cout << volume(d1);
    }
  	else
    {
      	std::cin >> d1 >> d2 >> d3;
      	std::cout << volume(d1, d2, d3);
    }
  
    return 0;
}