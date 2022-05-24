#include<iostream>
using namespace std;
//constructor is a member function of a class
//constructor is a special member function which has same name as class name
//constructor does not have return type,but can have params
//constructor is called when object is created
//constructor is called only once
//constructor is called before any other member function
//constructor is called before any other member variable
//3 types of constructor in c++ :default[zero param],parameterized,copy constructor..

class Zomato{

        public:
        //and instilize the instance variables of class
        int id=500;
        Zomato(){
            //id=100;
            cout<<"default constructor"<<endl;
        }
        Zomato(int i){
            //id=i;
            cout<<"parameterized constructor"<<endl;
        }

};

int main(){


    //default constructor
    Zomato z1;
    //parameterized constructor
    Zomato z2;
    cout<<z1.id<<endl;
    cout<<z2.id<<endl;
    return 0;
}