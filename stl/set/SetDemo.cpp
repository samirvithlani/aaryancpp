#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{

    set<string> names;
    names.insert("raj");
    names.insert("kumar");
    names.insert("patel");
    names.insert("rajveer");
    names.insert("zara");
    names.insert("amit");
    names.insert("patel");

    auto res = names.erase("patel1");
    cout << "\n res = " << res;

    if (res == 1)
    {
        cout << "\n patel is present and removed...";
    }
    else
    {
        cout << "\n patel is not present";
    }

    auto f = names.find("patel");
    
    if (f != names.end())
    {
        cout << "\n patel is present";
    }
    else
    {
        cout << "\n patel is not present";
    }

    cout<<"\n size of  -->"<<names.size();


    if(names.count("patel")){
        cout<<"\n patel is present";
    }
    else{
        cout<<"\n patel is not present";
    }
    

    for (auto x : names)
    {

        std::cout << "\n"
                  << x;
    }
}