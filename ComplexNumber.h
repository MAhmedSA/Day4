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
    }

    ComplexNumber operator +(ComplexNumber n) {
        ComplexNumber s(0,0);
        s.real = real + n.real;
        s.img = img + n.img;
        return s;

    }

    ComplexNumber operator -(ComplexNumber n) {
        
        ComplexNumber s(0,0);
        s.real = real - n.real;
        s.img = img - n.img;
        return s;
    }

    bool operator ==(ComplexNumber n) {
        if (n.real == real && n.img == img)
        {
            return true;
        }
        return false;    
    }

    bool operator !=(ComplexNumber n) {
        if (n.real != real || n.img != img)
        {
            return true;
        }
        return false;
    }

    operator int(){
         return real + img;
    }
    
    void displayRes();
    void set();
    void get();
    
};

