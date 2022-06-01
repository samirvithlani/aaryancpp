#include<iostream>
#include<string>
using namespace std;

template<typename T>

void demo(T a,T b){

    cout<<"\n value of a = "<<a;
}

int main(){

    //demo(150.5f);
    //demo(false);
    //demo("Hello");
    //demo(10);
    //demo(989899999999);
    //demo(20,"sam");
    demo(20,20);
    demo("raj","jay");

}
