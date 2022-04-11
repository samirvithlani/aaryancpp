#include<iostream>
using namespace std;

int main(){

    int a=-10,b=-20,c;
    // 

    string result = a %2 ==0 ? "even":"odd";
    cout<<result;

    c = a > b ? a : b;
    cout<<"\n value of c ="<<c;

    string ans  = c >0 ? "positive":"negative";
    cout<<"\n value of ans ="<<ans;



}