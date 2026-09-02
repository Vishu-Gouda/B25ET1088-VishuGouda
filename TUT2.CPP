/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int i,sum = 0;
    cout << "Even numbers between 1 and 50 are:" << endl;
    
    for(int i = 2; i <= 50; i += 2) {
        sum = sum + i;
         cout <<i<<endl; 
    }
    cout << "\n\nThe sum of even numbers between 1 and 50 is : "<<sum<<endl;
    return 0;
}


