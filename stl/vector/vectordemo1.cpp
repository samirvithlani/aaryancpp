#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector<string> names;
    names.push_back("John");
    names.push_back("Mary");
    names.push_back("Peter");
    names.push_back("James");

    //cout<<"\n 0th element: "<<names[0];

    cout<<"\n\n"<<names.size();

    for(int i=0;i<names.size();i++){
        cout<<"\n"<<i<<"th element: "<<names[i];
    }

    cout<<"\n\n  0th element using at()"<<names.at(0);
    // names.clear();

    // cout<<"\n after clear ...";
    // for(int i=0;i<names.size();i++){
    //     cout<<"\n"<<i<<"th element: "<<names[i];
    // }

    names.pop_back();

    cout<<"\n after pop";
    for(int i=0;i<names.size();i++){
        cout<<"\n"<<i<<"th element: "<<names[i];
    }

    names.insert(names.begin()+2,"Raj");

    cout<<"\n after insert";
    for(int i=0;i<names.size();i++){
        cout<<"\n"<<i<<"th element: "<<names[i];
    }

    names.at(1)="parle";
    cout<<"\n after at";
    for(int i=0;i<names.size();i++){
        cout<<"\n"<<i<<"th element: "<<names[i];
    }

    names.erase(names.begin()+1);
    cout<<"\n after erase";
    for(int i=0;i<names.size();i++){
        cout<<"\n"<<i<<"th element: "<<names[i];
    }

    





    
}
