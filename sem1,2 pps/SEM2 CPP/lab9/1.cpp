#include<iostream>
#include<string>
#include<iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

#define PI 3.14

/* write your code here */
class Shape{
    public:
    virtual double area()=0;
    
    virtual double perimeter()=0;
   
};
class Square : public Shape
{
           public:
           double slength;
           Square(double length)
           {
                slength=length;
           }
           double area() {
            return slength * slength;
            }
          double perimeter(){
            return 4*slength;
            }
};
class Rectangle : public Shape{
    public:
    double rlength,rwidth;
    Rectangle(double length,double width)
    {
        rlength=length;
        rwidth=width;
    }
    double area() {
      return rlength * rwidth;
    }
    double perimeter(){
        return 2*(rlength + rwidth);
    }
};
class Circle : public Shape{
    public :
    double cradius;
     Circle(double radius)
    {
        cradius=radius;
    }
    double area(){
        return PI*cradius*cradius;
    }
    double perimeter(){
        return 2*PI*cradius;
    }
};

int main() {
    
    int n;
    cin >> n;

    Shape **sp = new Shape*[n];

    char shape_type;
    double num1, num2;
    for(int i = 0; i < n; i++) {
        getchar();
        cin >> shape_type;
        switch(shape_type) {
            case 'S':
                cin >> num1;
                sp[i] = new Square(num1);
                break;
            case 'R':
                cin >> num1 >> num2;
                sp[i] = new Rectangle(num1, num2);
                break;
            case 'C':
                cin >> num1;
                sp[i] = new Circle(num1);
                break;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << fixed << setprecision(2);
        cout << sp[i]->area() << " ";
        cout << sp[i]->perimeter() << endl;
    }

    return 0;
}