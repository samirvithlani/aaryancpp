#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){


        map<string,string> ranks;
        ranks["SI"]="Amit";
        ranks["SP"]="Bharat";
        ranks["SSP"]="Chandu";
        ranks["IG"]="Dhruv";
        ranks["DG"]="Eshaan";
        ranks["IG"]="Dhruvi";


        for(auto i:ranks){
            cout<<"RANK = "<<i.first<<" NAME = "<<i.second<<endl;
        }
        




}