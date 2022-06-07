#include<iostream>

//int x;
    
namespace nspace
{
        int x;
        //int y;
}

int main()
{
        int y;
        std::cin >> nspace::x >> y;
        using namespace nspace;
       // using nspace::y;
        std::cout << x << " " << y;
        return 0;
}