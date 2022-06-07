#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::fixed;
using std::setprecision;

class Point {
private:
    float x, y;
public:
    /* Write your code here */
    
    Point(float x=0, float y=0)
    {
        this->x= x;
        this->y= y;
    }
    
    void move_north(float units)
    {
        this->y += units;
    }
    
    void move_south(float units)
    {
        this->y -= units;
    }
    
    void move_east(float units)
    {
        this->x += units;
    }
    
    void move_west(float units)
    {
        this->x -= units;
    }
    
    float get_x() const
    {
        return x;
    }
    
    float get_y() const
    {
        return y;
    }
    
    
    void print() const {
        cout << fixed << setprecision(2) << x << " " << y << endl;
    }
};

class Vehicle {
private:
    float calculate_displacement() const
    {
        float x_start = starting_position.get_x(), x_end = current_position.get_x(),
                        y_start = starting_position.get_y(), y_end = current_position.get_y();
        
        return sqrt((x_end - x_start)*(x_end - x_start) + (y_end - y_start)*(y_end - y_start));
   }
    const Point starting_position;
    Point current_position;
    float distance_covered;
public:
    /* Write your code here */
    
    Vehicle(Point p):starting_position(p)
    {
        this->current_position = p;
        distance_covered = 0;
    }
    
    void move_north(float units)
    {
        current_position.move_north(units);
        distance_covered += units; 
    }
    
    void move_south(float units)
    {
        current_position.move_south(units);
        distance_covered += units;
    }
    
    void move_east(float units)
    {
        current_position.move_east(units);
        distance_covered += units;
    }
    
    void move_west(float units)
    {
        current_position.move_west(units);
        distance_covered += units;
    }
    
    void print() const {
        cout << "Starting position: ";
        starting_position.print();
        cout << "current_position: ";
        current_position.print();
        cout << "Distance covered: " << fixed << setprecision(2) << distance_covered << endl;
        cout << "Displacement: " << fixed << setprecision(2) << calculate_displacement() << endl;
    }
};

int main() {
    float initial_x, initial_y;
    cin >> initial_x >> initial_y;
    Point starting_position(initial_x, initial_y);
    Vehicle vehicle(starting_position);
    int number_of_moves;
    char direction;
    float units;
    cin >> number_of_moves;
    for(int i = 0; i < number_of_moves; i++) {
        getchar();
        cin >> direction >> units;
        switch(direction) {
            case 'N':
                vehicle.move_north(units);
                break;
            case 'S':
                vehicle.move_south(units);
                break;
            case 'W':
                vehicle.move_west(units);
                break;
            case 'E':
                vehicle.move_east(units);
                break;
        }
    }
    vehicle.print();
}