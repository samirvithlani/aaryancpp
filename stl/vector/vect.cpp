#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Product{

    public:
        string name;
        int price;
        int cat[3]={1,2,3};

};
int main(){

            vector<Product> products;
            
            Product p1;

            p1.name = "apple";
            p1.price = 100;
            p1.cat[0]=1;

            products.push_back(p1);
            for(Product p1: products){

                    cout<<"***";
                cout<<"\n name = "<<p1.name;
                cout<<"\n price = "<<p1.price;
                cout<<"\n cat = "<<p1.cat[0];
            }



}