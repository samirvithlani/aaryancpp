#include<iostream>
using namespace std;

int main(){

    int a[5]={101,102,103,104,105};
    //indexing... starts 0
    cout<<"\n a[0] = "<<a[0];

    for(int i=0;i<5;i++){

        cout<<"\n value of a<<"<<i+1<<" = "<<a[i];
    }

}