#include<iostream>
using namespace std;
// with return type with argument 
// withou return type with argument
// with return type without argument
// without return type without argument


int sum(){
    
    //with return type without argument(Parameter)
    int a=10,b=20;
    int c = a+b;
    //return c;

    return a + b;
}

float val(){

    return 100.0;
}

//local variable of div function
float div(float a,float b){

    return a / b;
}

void demo(){

    //without return type without argument
    cout<<"\n demo called";
}
void stuck(int a){

    cout<<"\n stuck called"<<a;

}
string getName(){
    //with return type without argument
    return "Raj";
}

int main(){

    int ans = sum();
    ans = ans *10;
    cout<<"ans = "<<ans;
    //float ans1 = div(10.2f,20.2f);
    //cout<<"\n"<<ans1;
    //cout<<"\n ans = "<<sum();
    cout<<"\n ans = "<<div(val(),10.2f);

    demo();
    //error
    //cout<<demo();
    stuck(10);

    string s = getName();
    cout<<"\n"<<s;
    cout<<"\n"<<getName();

}