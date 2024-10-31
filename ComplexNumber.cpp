#include "ComplexNumber.h"
#include <iostream>
using namespace std;

void ComplexNumber::set() {

	cout << "Enter First: ";
	cin >> real;
	cout << "Enter Second: ";
	cin >> img;
}
void ComplexNumber::get() {
	cout << "The complex number is: " << real << "+" << img << "i" << "\n";
}
void ComplexNumber::displayRes(){
 
    if (img < 0)
        if (img == -1)
            cout << "The complex number is: " << real << "-i" << "\n";
        else
            cout << "The complex number is: " << real << img << "i" << "\n";
    else
        if (img == 1)
            cout << "The complex number is: " << real << " + i" << "\n";
        else
            cout << "The complex number is: " << real << " + " << img << "i" <<"\n";
}