#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Emp
{

public:
    int id;
    string name;
    float salary;
};

int main()
{

    // string  "mmm"
    vector<Emp> employees;
    Emp e1;
    e1.id = 1;
    e1.name = "John";
    e1.salary = 1000;

    Emp e2;
    e2.id = 2;
    e2.name = "Mary";
    e2.salary = 2000;

    employees.push_back(e1);
    employees.push_back(e2);

    for (int i = 0; i < employees.size(); i++)
    {
        cout << "\n Id of employee = " << employees[i].id << "- Name of employee = " << employees[i].name << "- Salary of employee = " << employees[i].salary;
    }
}
