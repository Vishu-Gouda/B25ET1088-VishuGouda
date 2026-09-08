/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void getdata() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void displayData() {
        if (imag >= 0)
            cout << real << " + " << imag << "i\n";
        else
            cout << real << " - " << -imag << "i\n";
    }

    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void sub(Complex c1, Complex c2) {
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void multiply(Complex c1, Complex c2) {
        real = c1.real * c2.real - c1.imag * c2.imag;
        imag = c1.real * c2.imag + c1.imag * c2.real;
    }

    void divide(Complex c1, Complex c2) {
        float denominator = c2.real * c2.real + c2.imag * c2.imag;
        if (denominator == 0) {
            cout << "Division by zero is not allowed.\n";
            real = 0;
            imag = 0;
            return;
        }
        real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
        imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    }
};

int main() {
    Complex c1, c2, result;
    int choice;

    do {
        cout << "\n--- Complex Number Calculator ---\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "\nEnter first complex number:\n";
            c1.getdata();
            cout << "\nEnter second complex number:\n";
            c2.getdata();
        }

        switch (choice) {
            case 1:
                result.add(c1, c2);
                cout << "Result = ";
                result.displayData();
                break;
            case 2:
                result.sub(c1, c2);
                cout << "Result = ";
                result.displayData();
                break;
            case 3:
                result.multiply(c1, c2);
                cout << "Result = ";
                result.displayData();
                break;
            case 4:
                result.divide(c1, c2);
                cout << "Result = ";
                result.displayData();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

