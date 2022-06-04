#include<iostream>
#include<string>
#include<map>
#include "MapProj1.hpp"

using namespace std;

void BaseProject::addEmployee(){

    BaseProject b;
    b.x=100;
    
    
}
void BaseProject::viewEmployee(){

    BaseProject b;
    for(auto x:b.ranks){
        cout<<x.first<<" "<<x.second<<endl;
    }
}

int main(){

    BaseProject b;
    b.addEmployee();
    b.viewEmployee();
    return 0;
}