#include <iostream>
#include <iomanip>
#include<bits/stdc++.h>

using std::cin;
using std::cout;
using std::endl;
using namespace std;

class ComplexNumber
{
    float re, im;

public:
    ComplexNumber(float r = 0, float i = 0)
    {
        re = r;
        im = i;
    }
    ComplexNumber operator*(float m)
    {
        ComplexNumber temp;
        temp.re = re * m;
        temp.im = im * m;
        return temp;
    }
    void print(){ 
    cout<<fixed<<setprecision(2);
    cout << re << " " << im ;
};
    friend ComplexNumber operator+(ComplexNumber &c1, ComplexNumber &c2);
    friend ComplexNumber operator*(ComplexNumber &c1, ComplexNumber &c2);
};
ComplexNumber operator+(ComplexNumber &c1, ComplexNumber &c2)
{
    ComplexNumber temp;
    temp.re = c1.re + c2.re;
    temp.im = c1.im + c2.im;
    return temp;
}
ComplexNumber operator*(ComplexNumber &c1, ComplexNumber &c2)
{
    ComplexNumber temp;
    temp.re = (c1.re * c2.re) - (c1.im * c2.im);
    temp.im = (c1.im * c2.re) + (c1.re * c2.im);
    return temp;
}

int main()
{

    float real, imaginary;
    cin >> real >> imaginary;
    ComplexNumber result(real, imaginary);

    int n, i;
    cin >> n;

    int operation_code;
    float operand2_float;
    for (i = 0; i < n; i++)
    {
        cin >> operation_code;
        if (1 == operation_code)
        { // addition of two ComplexNumber objects
            cin >> real >> imaginary;
            ComplexNumber operand2_complex_number(real, imaginary);
            result = result + operand2_complex_number;
        }
        else if (2 == operation_code)
        { // multiplication of two ComplexNumber objects
            cin >> real >> imaginary;
            ComplexNumber operand2_complex_number(real, imaginary);
            result = result * operand2_complex_number;
        }
        else if (3 == operation_code)
        { // multiplication of ComplexNumber object and a float
            cin >> operand2_float;
            result = result * operand2_float;
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
        result.print();
        cout << endl;
    }

    return 0;
}