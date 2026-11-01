/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    char ch;

    if (!source) {
        cout << "Error opening source file!";
        return 1;
    }

    while (source.get(ch)) {
        destination.put(ch);
    }

    cout << "File copied successfully!";

    source.close();
    destination.close();

    return 0;
}