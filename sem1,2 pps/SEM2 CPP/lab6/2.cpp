#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class SimpleArray{
    int *arr;
    int num;
    
    public:
    SimpleArray(int no){
        num=no;
        arr=new int [no];
        for(int i=0;i<no;i++)
        {
            float x;
            cin>>x;
            arr[i]=x;
        }
    }
    ~SimpleArray(){
        cout<<"destructor called"<<std::endl;
        delete []arr;
    }
    void operator+(SimpleArray &s1)
    {
        if(num == s1.num)
        {
            for(int i=0; i<num; i++)
            {
                arr[i] += s1.arr[i];
            }
        }
        else
            return;
    }
    void print()
    {
        for(int i=0; i<num; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main() {
    int n1, n2;
    cin >> n1;
    SimpleArray simple_array_1(n1);
    cin >> n2;
    SimpleArray simple_array_2(n2);
    
    simple_array_1 + simple_array_2;
    
    simple_array_1.print();
    
    return 0;
}