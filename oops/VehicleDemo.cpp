#include<iostream>
using namespace std;
//class is a blueprint of an object,class is a group of data-members and member-function
//object is an instance of a class,objec is an entity of a class

class Car{

    public:
    int gear;
    int speed;

    void getCarData(){
        cout<<"\n enter car gear";
        cin>>gear;
        cout<<"\n enter car speed";
        cin>>speed;
    }
    void showCar();
};
//:: scope resolution operator...
void Car::showCar(){
    cout<<"\n car gear is "<<gear;
    cout<<"\n car speed is "<<speed;
}



int main(){

    //create a object of class Car
    Car c;
    c.getCarData();
    c.showCar();

    

}