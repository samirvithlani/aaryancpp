#include<iostream>
using namespace std;

int main(){


    int a[5];
    cout<<"\n enter 5 values: ";
    for(int i=0;i<5;i++){

        cin>>a[i];
    }

    cout<<"\n elements of array are: ";

    for(int i=0;i<5;i++){

        cout<<"\n value of a<<"<<i+1<<" = "<<a[i];
    }

    int temp = a[0];
    for(int i=0;i<5;i++){

            if(a[i]>temp){
                temp = a[i];
            }
        
    }

    cout<<"\n max value is: "<<temp;

}