#include<iostream>
using namespace std;

class Apple{

public:

    Apple(int x){
        cout<<" param Apple constructor called"<<endl;
        
    }
    Apple(){
        cout<<"default constructor of Apple class"<<endl;
    }

};
class Iphone:public Apple{

    public:
     Iphone(int x):Apple(2500){
         cout<<"param constructor of Iphone class"<<endl;
    }
    Iphone():Apple(5){
        cout<<"\n default constructor of Iphone class"<<endl;
    }
};

int main(){

    Iphone i1(450);
    //iphone's default constructor is called
    return 0;

}