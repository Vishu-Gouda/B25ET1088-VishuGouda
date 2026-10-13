/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[100];

public:
    String()
    {
        str[0] = '\0';
    }

    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    String(const String &s)
    {
        strcpy(str, s.str);
    }

    void Display()
    {
        cout << "String: " << str << endl;
    }

    ~String()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    String s1;
    s1.Accept();

    String s2(s1);

    cout << "Original ";
    s1.Display();

    cout << "Copied ";
    s2.Display();

    return 0;
}
