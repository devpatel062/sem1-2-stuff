#include<iostream>
#include<string>
#include<iomanip>

using std::fixed;
using std::setprecision;
using std::string;
using std::cin;
using std::cout;
using std::endl;

/* Write your code here */
class Route;
class Bus
{
    string bus_id,fuel_type;
    double mileage_per_litre;
    int max_passengers;
    static double petrol_price_per_litre,diesel_price_per_litre;
    public:
    Bus(string bus_id, string fuel_type, double mileage_per_litre,int max_passengers)
    {
        this->bus_id=bus_id;
        this->fuel_type=fuel_type;
        this->mileage_per_litre=mileage_per_litre;
        this->max_passengers=max_passengers;
    }
    static void change_petrol_price(double petrol_price)
    {
        petrol_price_per_litre=petrol_price;
    }
    static void change_diesel_price(double diesel_price)
    {
        diesel_price_per_litre=diesel_price;
    }
    friend double calculate_profit(const Bus &B,const Route &R);
};

double Bus::petrol_price_per_litre=80.88;
double Bus::diesel_price_per_litre=75.77;

class Route
{
    string route_id,source,destination;
    double distance;
    int fare_per_passenger;
    public:
    Route(string route_id,string source,string destination,double distance,int fare_per_passenger)
    {
        this->route_id=route_id;
        this->source=source;
        this->destination=destination;
        this->distance=distance;
        this->fare_per_passenger=fare_per_passenger;
    }
    friend double calculate_profit(const Bus &B,const Route &R);
   
};
double calculate_profit(const Bus &B,const Route &R)
{
    double profit;
    double fuel_price;
    
    if( B.fuel_type == "diesel" )
        fuel_price = B.diesel_price_per_litre;
    else
        if( B.fuel_type == "petrol" )
            fuel_price = B.petrol_price_per_litre;
        else
            return(0);
    profit=(R.fare_per_passenger * B.max_passengers) - ( R.distance / B.mileage_per_litre * fuel_price);
    return profit;
}

int main() {
    static double petrol_price_per_litre, diesel_price_per_litre;
    cin >> petrol_price_per_litre >> diesel_price_per_litre;
    Bus::change_petrol_price(petrol_price_per_litre);
    Bus::change_diesel_price(diesel_price_per_litre);

    string bus_id, fuel_type;
    double mileage_per_litre;
    int max_passengers;
    cin >> bus_id >> fuel_type >> mileage_per_litre >> max_passengers;
    Bus bus(bus_id, fuel_type, mileage_per_litre, max_passengers);

    getchar(); // Removing newline from input buffer
    string route_id, source, destination;
    double distance;
    int fare_per_passenger;
    cin >> route_id >> source >> destination >> distance >> fare_per_passenger;
    Route route(route_id, source, destination, distance, fare_per_passenger);

    cout << std::fixed << std::setprecision(2) << calculate_profit(bus, route);

    return 0;
}