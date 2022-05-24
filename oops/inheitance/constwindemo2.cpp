#include<iostream>
using namespace std;

class Color{

    public:
        Color(){
            cout<<"default constructor of Color class"<<endl;
        }
        Color(int x){

            cout<<"param constructor of Color class x = "<<x<<endl;
        }
        Color(int x,int y){

            cout<<"param constructor of Color class x = "<<x<<" y = "<<y<<endl;
        }
};

class Red:public Color{
    public:
        Red():Color(1500){

            cout<<"\n default constructor of Red class"<<endl;
        }
        Red(int x):Color(1500,2500){

            cout<<"\n param constructor of Red class x = "<<x<<endl;
        }
};

class Blue:public Color{
    public:
        Blue():Color(1500,2500){

            cout<<"\n default constructor of Blue class"<<endl;
        }
        Blue(int x,int y){

            cout<<"\n param constructor of Blue class x = "<<x<<" y = "<<y<<endl;
        }
};

int main(){


    Red r1(147);
    Blue b1;

    return 0;
}