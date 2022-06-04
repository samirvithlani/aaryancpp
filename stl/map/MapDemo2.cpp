#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{

    cout << "\n please enter name and avaialbliety of employee in key value pair \n";

    map<string, bool> employees;

    string ename;
    bool availablity;
    bool flag = 1;

    // for loop
    /*
    for (int i = 0; flag == 0; i++)
    {

        cout << "\n enter name of employee : ";
        cin >> ename;
        cout << "\n enter availability of employee : ";
        cin >> availablity;
        employees[ename] = availablity;

        cout << "\n want to add more ?? if yes press 0 else press 1 : ";
        cin >> flag;
    }
    */
   while(flag){

        cout << "\n enter name of employee : ";
        cin >> ename;
        cout << "\n enter availability of employee : ";
        cin >> availablity;
        employees[ename] = availablity;

        cout << "\n want to add more ?? if yes press 1 else press 0 : ";
        cin >> flag;

   }

    if (employees.size() > 0)
    {
        for (auto x : employees)
        {
            cout << "\n name of employee : " << x.first << " availability : " << x.second << endl;
        }
    }
    else
    {
        cout << "\n record is empty...";
    }
}
