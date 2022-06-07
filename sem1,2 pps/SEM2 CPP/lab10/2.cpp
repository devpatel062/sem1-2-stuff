#include<iostream>
#include<string>
#include<exception>
#include<cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::endl;

/* Write your code here */
class MemoryAllocationFailed :public std::exception{
    public:
    
    virtual const char* what() const throw(){
        return "MemoryAllocationFailed";
    }
    
    
};
void* allocate_memory(long size){
        void *ret=NULL;
        ret=malloc(size*sizeof(long));
        if(ret==NULL)
            throw MemoryAllocationFailed();
        return ret;
    }

int main() {
    
    void *vptr;
    try {
        vptr = allocate_memory(100);
        free(vptr);
        vptr = allocate_memory(100000000000000);
        free(vptr);
    }
    catch(std::exception &e) {
        cout << e.what();
    }

    return 0;
}