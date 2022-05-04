#include<iostream>
using namespace std;

class Color{

    public:

    int red,green,blue;

    Color(){

        cout<<"\n default const called...";

        red=0;
        green=0;
        blue=0;
    }

    Color(int red,int green,int blue){
        
        this->red=red;
        this->green=green;
        this->blue=blue;
    }

};

int main(){


    Color c(10,20,30);
    Color c1(40,50,60);
    //default const called...
    Color c2;

    cout<<"\n red is "<<c.red;
    cout<<"\n green is "<<c.green;
    cout<<"\n blue is "<<c.blue;

    cout<<"\n red is "<<c1.red;
    cout<<"\n green is "<<c1.green;
    cout<<"\n blue is "<<c1.blue;

    
    cout<<"\n red is "<<c2.red;
    cout<<"\n green is "<<c2.green;
    cout<<"\n blue is "<<c2.blue;




}