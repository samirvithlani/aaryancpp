#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{

    deque<string> d;
    d.push_back("Hello");
    d.push_back("World");
    d.push_back("!");
    d.push_front("Good");
    d.push_front("Good");
    d.push_front("Morning");
    d.push_front("!");

    // iterator

    for(auto p:d){
        cout << "\n "<<p << endl;
    }

    d.pop_back();
    d.pop_front();

    /*
        deque<string>::iterator itr;
        for (itr = d.begin(); itr != d.end(); itr++)
        {

            cout << *itr << endl;
        }
        for (string x : d)
        {
            cout << x << endl;
        }
    */
    d.insert(d.begin() + 1, "**");
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl;
    }

    cout << "\n front..." << d.front();
    d.front() = "Night";
    cout << "\n front..." << d.front();
    cout << "\n back..." << d.back();
    d.back() = "friend";
    cout << "\n back..." << d.back();

    d.erase(d.begin() + 3);

    cout<<"\n after erase..";
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl;
    }
    cout<<"\n at="<<d.at(2);
    d.at(2) = "hello";
}