/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

double convert(double meters) {
	return meters * 100.0;
}

double convert(double kilometers, bool isKm) {
	return kilometers * 1000.0;
}

int main() {
	double m = 5.5;
	double km = 2.3;

	std::cout << m << " m = " << convert(m) << " cm" << std::endl;
	std::cout << km << " km = " << convert(km, true) << " m" << std::endl;

	return 0;
}

