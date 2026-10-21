/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

template <class T>
T maximumValue(T a, T b)
{
    return (a > b) ? a : b;
}

template <class T>
class Box
{
    T value;

public:
    Box(T v)
    {
        value = v;
    }

    void display()
    {
        cout << "Box value = " << value << endl;
    }
};

int main()
{
    cout << "Maximum integer = "
         << maximumValue(10, 25) << endl;

    cout << "Maximum double = "
         << maximumValue(3.5, 5.5) << endl;

    Box<int> b1(100);
    b1.display();

    Box<string> b2("C++ Templates");
    b2.display();

    return 0;
}
