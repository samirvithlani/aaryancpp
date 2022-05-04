#include <iostream>
using namespace std;

enum string_code
{
    eFred,
    eBarney,
    eWilma,
    eBetty,

};

string_code hashit(std::string const &inString)
{
    if (inString == "Fred")
        return eFred;
    if (inString == "Barney")
        return eBarney;
}

void foo()
{
    switch (hashit(stringValue))
    {
    case eFred:

        break;

    case eBarney:

        break;
    }
}

int main()
{

    foo();
    
}