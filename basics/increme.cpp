//post increment and pre increment
//a++ ++a

#include<iostream>
using namespace std;

//++ --> 1 -->
int main(){

    int a =10,ans1=0;
           //11  +  12 + 12 +  13  +14
           // 11 + 12 13 + 14 + 15 
           //11 + 12 +12  + 13 +14  = 65
// 11 + 12 + 13 + 13
    ans1 = ++a + a++ + ++a  + a++; 

    //12 + 11
    cout<<"\n value of ans ="<<ans1;
    cout<<"\n value of a ="<<a;
    //12


}
