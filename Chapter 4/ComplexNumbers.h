#pragma once
#include <iostream>

using namespace std;

class ComplexNumbers
{
private:
    double real;
    double imaginary;

public:
    // Constructors
    ComplexNumbers();
    ComplexNumbers(double, double);

    // Setters
    void setReal(double);
    void setImaginary(double);

    // Getters
    double getReal() const;
    double getImaginary() const;

    // Unary operator
    ComplexNumbers operator-() const;

    // Arithmetic operators with another complex number
    ComplexNumbers operator+(const ComplexNumbers&) const;
    ComplexNumbers operator-(const ComplexNumbers&) const;
    ComplexNumbers operator*(const ComplexNumbers&) const;
    ComplexNumbers operator/(const ComplexNumbers&) const;

    // Arithmetic operators with a constant
    ComplexNumbers operator+(double) const;
    ComplexNumbers operator-(double) const;
    ComplexNumbers operator*(double) const;
    ComplexNumbers operator/(double) const;

    // Condition operators
    bool operator==(const ComplexNumbers&) const;
    bool operator!=(const ComplexNumbers&) const;

    // Output operator
    friend ostream& operator<<(ostream&, const ComplexNumbers&);

    // Constant on left side
    friend ComplexNumbers operator+(double, const ComplexNumbers&);
    friend ComplexNumbers operator-(double, const ComplexNumbers&);
    friend ComplexNumbers operator*(double, const ComplexNumbers&);
    friend ComplexNumbers operator/(double, const ComplexNumbers&);

};