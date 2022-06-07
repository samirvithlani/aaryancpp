#include<iostream>
#include<stack>
#include<string>

using namespace std;

//LIFO Last in First out method...
int main(){

//stack does not follow index....
    stack<string> s;
    s.push("rahul");
    s.push("kumar");
    s.push("patel");
    s.push("rajveer");
    s.push("zara");

    //s.pop();
    //cout<<"\n"<<s.top();

    // for(int i=0;i<s.size();i++){
    //     cout<<"\n"<<s.top();
    //     s.pop();
    // }


    while(!s.empty()){

        cout<<"\n"<<s.top();
        s.pop();
    }
    


}