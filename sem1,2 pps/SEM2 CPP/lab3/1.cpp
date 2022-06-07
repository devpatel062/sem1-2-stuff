#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int *ptr,no,i,min_index,j,temp;
    
    std::cin>>no;
    
    ptr = new int[no];
    
    for(i=0;i<no;i++)
    {
        std::cin>>ptr[i];
    }
    
    
    sort(ptr,ptr+no);
     for(i=0;i<no;i++)
    {
        std::cout<<ptr[i]<<" ";
    }
     
    delete[] ptr;
        
    
    return 0;
}
