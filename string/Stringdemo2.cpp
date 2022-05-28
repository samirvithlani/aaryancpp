#include<iostream>
using namespace std;

int main()
{

    string name;
    cout<<"\n pls enter your name";
    getline(cin,name);

    for(int i=0;i<name.length();i++)
    {
        cout<<"\n"<<name[i];
    }

    //iterator... class

    string::iterator it;
    for(it = name.begin(); it!= name.end();it++)
    {
        cout<<"\n"<<*it;
    }
    //for each loop...

    cout<<"\n for each loop";
    for(char x :name){    

        cout<<"\n"<<x;
    }

}

