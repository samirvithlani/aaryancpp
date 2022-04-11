#include<iostream>
using namespace std;

int main(){

    cout<<"\n Enter a number: ";
    int no;
    cin>>no;


    int rem,rev=0,temp=no;

    while(no>0){

        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;

    }


    cout<<"\n rev = "<<rev;
    cout<<"\n no = "<<no;

    if(temp==rev){

        cout<<"\n The number is a palindrome";

    }
    else{

        cout<<"\n The number is not a palindrome";

    }
    
}