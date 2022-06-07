#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class product
{
    string name;
    float price;
    
    public:
    
    product(string name2="",float price2=0)
    {
        price=price2;
        name=name2;
    }
    product(const product &p2)
    {
        name=p2.name;
        price=p2.price*2;
    }
    void print()
    {
        cout<<name;//<<" "<<price;
        printf("% 0.2f",price);
    }
};


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    
    string name;
    float price;
    cin>>name>>price;
    product pd1(name,price);
    product pd2=product(pd1);
    pd2.print();
    
    
    
    return 0;
}
