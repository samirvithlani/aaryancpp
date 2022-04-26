#include <iostream>
#include <string>
using namespace std;

class Car
{

public:
    int speed = 100;
    int gear = 6;
    string color = "red";

    void getCarData()
    {

        cout << "\n enter car color";
        cin >> color;
        cout << "\n enter car speed";
        cin >> speed;
        cout << "\n enter car gear";
        cin >> gear;
    }

    void displayCarData();
};
//:: scope resolution operator
void Car ::displayCarData()
{
    cout << "\n car color is " << color;
    cout << "\n car speed is " << speed;
    cout << "\n car gear is " << gear;
}

int main()
{

    Car c;
    c.getCarData();
    c.displayCarData();
}