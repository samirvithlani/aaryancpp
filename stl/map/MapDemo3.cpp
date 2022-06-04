#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){


    map<int,string> ranks;
    ranks[1]="Amit";
    ranks[2]="Bharat";
    ranks[3]="Chandu";
    ranks[4]="Dhruv";
    ranks[5]="Eshaan";


    auto x = ranks.erase(33);
    if(x==1){
        cout<<"Record deleted"<<endl;
    }
    else{
        cout<<"Record not found"<<endl;
    }



    auto y = ranks.at(3);
    cout<<"\n\n --->y= "<<y;

    // for(auto i = ranks.find(3);i!= ranks.end();i++){
    //     cout<<"\n\n RANK = "<<i->first<<" NAME = "<<i->second;
    // }

    ranks.insert(make_pair(5,"jalaj"));
    


    for(auto i:ranks){
        cout<<"\n\n RANK = "<<i.first<<" NAME = "<<i.second;
    }

}