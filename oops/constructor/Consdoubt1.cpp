#include<iostream>
using namespace std;

class Calc{

    public:

    //instance variable....it is class level variable   
    int a=100,b=200;

    //local variable...
    void sum(int a1,int b1){
        
        int sum=0;

        sum = this->a + this->b;
        cout<<"\n sum is "<<sum;

    }
    };

int main(){

    Calc c;
    c.sum(10,20);
    return 0;

}


