/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        try {
            if (b == 0)
                throw b;

            cout << "Division = " << a / b << endl;
        }
        catch (int) {
            cout << "Error: Division by zero!" << endl;
        }
    }
    catch (...) {
        cout << "An error occurred." << endl;
    }

    return 0;
}
