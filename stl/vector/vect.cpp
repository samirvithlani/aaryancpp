#include<iostream>
#include<string>
#include<vector>

using namespace std;
class Product{

    public:
        string name;
        int price;
        int cat[3]={1,2,3};
        vector<Product> products;
        void add(){
            Product p1;

            p1.name = "apple";
            p1.price = 100;
            p1.cat[0]=1;

            products.push_back(p1);

        }
        void print(){

             for(Product p1: products){

                    cout<<"***";
                cout<<"\n name = "<<p1.name;
                cout<<"\n price = "<<p1.price;
                cout<<"\n cat = "<<p1.cat[0];
            }
        }

};
int main(){

                    Product p;
                    p.add();          
                    p.print();      

}