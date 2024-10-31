#pragma once
#include <iostream>
#include <complex>
#include<string>
using namespace std;

class ComplexNumber
{
    
public:
    int real, img;
    static int counter;
    
    ComplexNumber() {
        ComplexNumber::counter++;
        real = 0; img = 0;
    }
    ComplexNumber(const ComplexNumber& others) {
        ComplexNumber::counter++;
    }
    ComplexNumber(int r, int i) {
        ComplexNumber::counter++;
        real = r; img = i;
    }

    ComplexNumber(int r, int i,string g) {
        ComplexNumber::counter++;
        cout << "Hello From " << g << " \n";
        real = r; img = i;
        
    }
    ~ComplexNumber() {
        ComplexNumber::counter--;
        cout << "\n From Our DConstructor \n";
    }
    void displayRes();
    void set();
    void get();
    
};

