#pragma once
#include <iostream>

using namespace std;

class RationalNumbers
{
private:
    int numerator;
    int denominator;

public:

    // Constructors
    RationalNumbers();
    RationalNumbers(int, int);

    // Setters
    void setNumerator(int);
    void setDenominator(int);

    // Getters
    int getNumerator() const;
    int getDenominator() const;

    // Normalize rational number
    void normalize();

    // Unary operator
    RationalNumbers operator-() const;

    // Arithmetic operators with another rational number
    RationalNumbers operator+(const RationalNumbers&) const;
    RationalNumbers operator-(const RationalNumbers&) const;
    RationalNumbers operator*(const RationalNumbers&) const;
    RationalNumbers operator/(const RationalNumbers&) const;

    // Arithmetic operators with a constant
    RationalNumbers operator+(int) const;
    RationalNumbers operator-(int) const;
    RationalNumbers operator*(int) const;
    RationalNumbers operator/(int) const;

    // Condition operators
    bool operator==(const RationalNumbers&) const;
    bool operator!=(const RationalNumbers&) const;
    bool operator>=(const RationalNumbers&) const;
    bool operator>(const RationalNumbers&) const;
    bool operator<=(const RationalNumbers&) const;
    bool operator<(const RationalNumbers&) const;

    // Output operator
    friend ostream& operator<<(ostream&, const RationalNumbers&);

    // Constant on left side
    friend RationalNumbers operator+(int, const RationalNumbers&);
    friend RationalNumbers operator-(int, const RationalNumbers&);
    friend RationalNumbers operator*(int, const RationalNumbers&);
    friend RationalNumbers operator/(int, const RationalNumbers&);
};