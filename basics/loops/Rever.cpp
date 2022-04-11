#include<iostream>
using namespace std;

int main(){


    cout<<"\n enter number";
    int n,rev=0,rem;
    cin>>n;
    for(;n>0;){

        //  456 % 10 = 6
        //45% 10 = 5
         //4 % 10 = 4
        rem = n % 10;
        //0 = 0 *10 + 6 6
        //6 = 6 *10 +5  65
        //65 = 65 * 10 + 4  654
        rev = rev * 10 + rem;
        //456 / 10 = 45
        //45 /10 = 4
        //4 / 10 = 0.000
        n = n / 10;
    }

cout<<"\n rev = "<<rev;
}
