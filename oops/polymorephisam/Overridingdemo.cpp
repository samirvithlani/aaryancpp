#include <iostream>
#include <string>
using namespace std;

class RBI
{

public:
    int rate;
    virtual void get_rate()=0;
    //virtual void withdraw()=0;
    
};

class SBI : public RBI
{

public:
    int rate;
    void get_rate()
    {
        cout << "Enter the rate of interest(SBI): ";
        
    }
};
class ICICI : public RBI
{

public:
    int rate;
    void get_rate()
    {
        cout << "Enter the rate of interest(SBI): ";
        
    }
};
int main()
{

    SBI s;
    
    ICICI i;
    i.get_rate();

    RBI *r;
    r = &s;
    r->get_rate();
    r = &i;
    r->get_rate();
}