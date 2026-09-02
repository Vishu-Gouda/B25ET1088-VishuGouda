/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
int rows;
cout << "Enter the number of rows: ";
cin >> rows;

for (int i = 0; i < rows; i++) {
for (int space = 1; space <= rows - i; space++) {
cout << " ";
}
int val = 1;
for (int j=0; j <= i; j++) {
cout << val << " ";

val = val * (i-j)/(j+1);
}
cout << "\n";
}
return 0;
}

