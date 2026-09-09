/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class UnitConverter {
public:
    float convert(float meters) {
        return meters * 100.0;
    }

    double convert(double kilometers) {
        return kilometers * 1000.0;
    }
};

int main() {
    UnitConverter converter;
    float m = 5.5;
    double km = 2.3;

    cout << m << " m = " << converter.convert(m) << " cm" << endl;
    cout << km << " km = " << converter.convert(km) << " m" << endl;

    return 0;
}
