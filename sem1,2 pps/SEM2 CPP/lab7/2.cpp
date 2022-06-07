#include <iostream>
#include <iomanip>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
class Rectangle
{
    double x, y, length, width;

public:
    Rectangle(double xL = 0, double yL = 0, double l = 0, double w = 0)
    {
        x = xL;
        y = yL;
        length = l;
        width = w;
    }
    void operator<<(double &xL)
    {

        this->x -= xL;
    }
    void operator>>(double &xL)
    {

        this->x += xL;
    }
    void operator+(double l)
    {
        this->length += l;
    }
    void operator-(double l)
    {
        this->length -= l;
    }
    void print()
    {

        cout << fixed << setprecision(2);
        cout << x << " " << y << " " << length << " " << width << " ";
    }
};

int main()
{

    double x, y, l, w;
    cin >> x >> y >> l >> w;
    Rectangle rect(x, y, l, w), result;

    double i, n, units;
    char operation;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> operation;
        cin >> units;

        switch (operation)
        {
        case 'L':
            rect << units;
            break;
        case 'R':
            rect >> units;
            break;
        case 'I':
            rect + units;
            break;
        case 'D':
            rect - units;
            break;
        }
    }

    rect.print();

    return 0;
}