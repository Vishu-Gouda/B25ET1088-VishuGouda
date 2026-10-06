/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator/(Complex c)
    {
        float d = c.real * c.real + c.imag * c.imag;

        if (d == 0)
        {
            cout << "Cannot divide by zero!";
            return Complex();
        }

        float r = (real * c.real + imag * c.imag) / d;
        float i = (imag * c.real - real * c.imag) / d;

        return Complex(r, i);
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 3);
    Complex c2(2, 1);

    Complex c3 = c1 / c2;

    cout << "Result = ";
    c3.display();

    return 0;
}
