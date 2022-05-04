#include <iostream>
using namespace std;
class Country
{
    public:
    string flag;

};
class State : public Country
{

    public:
    string capital;
};
class City : public State
{

    public:
    string name;


}

int main()
{

            //city --> name,capital,flag
            //state --> capita,flag
            //country --> flag

            City c;
            c.name = "Mumbai";
            c.capital = "Mumbai";
            c.flag = "India";

            State s;
            s.capital = "Mumbai";
            s.flag = "India";
            

            Country co;
            co.flag = "India";
            



}