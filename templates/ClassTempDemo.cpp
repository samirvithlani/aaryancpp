#include<iostream>
using namespace std;
template<class T> class Rank{

    //T a;
    public:
    void display(T a){
        cout<<"\n value of a = "<<a;
    }

};

int main(){

    Rank <int>r;
    r.display(1651564564564654565);

}