#include<iostream>
#include<string>
using namespace std;

class Zomato{

    public:
    void order(string fname){
        cout<<"\n Ordering food from Zomato"<<fname;
    }
    void order(int price){
        cout<<"\n (int)Ordering food from Zomato"<<price;
    }
    void order(string fname,int price){
        cout<<"\n Ordering food from Zomato"<<fname<<price;
    }
    //  void order(string name,int p){
    //     cout<<"\n Ordering food from Zomato"<<fname<<price;
    // }

    void order(string fname,bool availability){
        cout<<"\n Ordering food from Zomato"<<fname<<availability;
    }
    void order(long price){
        cout<<"\n (long)Ordering food from Zomato"<<price;
    }
    int order(float price){
        cout<<"\n (float)Ordering food from Zomato"<<price;

        return 0;
    }

};

int main(){


        Zomato z;
        z.order(150000000l);
}