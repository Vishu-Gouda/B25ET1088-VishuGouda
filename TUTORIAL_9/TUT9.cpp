/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculatePay()
    {
        cout << "Employee salary" << endl;
    }
};

class PermanentEmployee : public Employee
{
public:
    void calculatePay() override
    {
        cout << "Permanent Employee Salary: Rs. 30000" << endl;
    }
};

class ContractEmployee : public Employee
{
public:
    void calculatePay() override
    {
        cout << "Contract Employee Salary: Rs. 15000" << endl;
    }
};

int main()
{
    Employee *e;

    PermanentEmployee p;
    ContractEmployee c;

    e = &p;
    e->calculatePay();

    e = &c;
    e->calculatePay();

    return 0;
}
