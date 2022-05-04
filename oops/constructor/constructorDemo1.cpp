#include<iostream>
using namespace std;

/**
 * constructor is a special member function of a class which has same name as class name
 * constructor can not have return type,but const can have params
 * use constructor to initialize data members of a class and object of a class
 * 
 * 3 types of constructor
 * 1.default constructor
 * 2.parameterized constructor
 * 3.copy constructor
*/

class Amazone{

    public:
    //class levele variable....it instance variable

    //copy --> 2
    //this->
    int id;
    

    Amazone(){
        cout<<"enter id";
        cin>>this->id;
    
    }


};
int main(){

    
    Amazone a;
    Amazone a1;

    cout<<"\n id of a is "<<a.id;
    cout<<"\n id of a1 is "<<a1.id;

    return 0;

}