#include<iostream>

using namespace std;
class complex
{
    double real,imag;
    
    public:
    complex operator++()   
        {
            real++;
            imag++;
            complex temp;
            temp.real=real;
            temp.imag=imag;
            return temp;
        }
        void display()
        {
            cout<<real<<" "<<imag<<endl;
        }
        void set()
        {
            cin>>real>>imag;  
        }
};
int main()
{
    complex c1;
    c1.set();
    ++c1;       
    c1.display();
}