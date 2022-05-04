#include <iostream>
using namespace std;

class Vehicle
{

public:
    string fuel;
    int speed;
    int price;
    int gear;

    void demo();
};

void Vehicle::demo()
{
}

class Bike : public Vehicle
{

public:
    void getBikeData()
    {
        cout << "Enter the fuel type: ";
        cin >> fuel;
        cout << "Enter the speed: ";
        cin >> speed;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the gear: ";
        cin >> gear;
    }
    void displayBikeData()
    {
        cout << "Fuel type: " << fuel << endl;
        cout << "Speed: " << speed << endl;
        cout << "Price: " << price << endl;
        cout << "Gear: " << gear << endl;
    }
};
class Car : public Vehicle
{

public:
    void getCarData()
    {

        cout << "Enter the fuel type: ";
        cin >> fuel;
        cout << "Enter the speed: ";
        cin >> speed;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the gear: ";
        cin >> gear;
    }

    void displayCarData()
    {

        cout << "\nFuel type: " << fuel;
        cout << "\nSpeed: " << speed;
        cout << "\nPrice: " << price;
        cout << "\nGear: " << gear;
    }
};

int main()
{

    Car c;
    c.getCarData();
    c.displayCarData();

    Bike b;
    b.getBikeData();
    b.displayBikeData();
}