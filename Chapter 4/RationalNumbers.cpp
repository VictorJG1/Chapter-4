#include "RationalNumbers.h"


// ============================================================
// CONSTRUCTORS
// ============================================================

RationalNumbers::RationalNumbers()
{
    numerator = 0;
    denominator = 1;
}


RationalNumbers::RationalNumbers(int n, int d)
{
    numerator = n;

    if (d == 0)
    {
        denominator = 1;
    }
    else
    {
        denominator = d;
    }
}


// ============================================================
// SETTERS
// ============================================================

void RationalNumbers::setNumerator(int n)
{
    numerator = n;
}


void RationalNumbers::setDenominator(int d)
{
    if (d != 0)
    {
        denominator = d;
    }
}


// GETTERS

int RationalNumbers::getNumerator() const
{
    return numerator;
}


int RationalNumbers::getDenominator() const
{
    return denominator;
}


// ============================================================
// NORMALIZE
// ============================================================

void RationalNumbers::normalize()
{
    // Move negative sign to numerator
    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }

    // Find greatest common divisor
    int a = numerator;
    int b = denominator;

    if (a < 0)
    {
        a = -a;
    }

    if (b < 0)
    {
        b = -b;
    }

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    // Reduce fraction
    if (a != 0)
    {
        numerator = numerator / a;
        denominator = denominator / a;
    }
}


// ============================================================
// NEGATE
// ============================================================

RationalNumbers RationalNumbers::operator-() const
{
    return RationalNumbers(-numerator, denominator);
}


// ============================================================
// OPERATIONS WITH ANOTHER RATIONAL NUMBER
// ============================================================

// Addition
RationalNumbers RationalNumbers::operator+(const RationalNumbers& other) const
{
    int newNumerator;
    int newDenominator;

    newNumerator =(numerator * other.denominator) + (other.numerator * denominator);

    newDenominator =denominator * other.denominator;

    RationalNumbers result(newNumerator, newDenominator);

    result.normalize();

    return result;
}


// Subtraction
RationalNumbers RationalNumbers::operator-(const RationalNumbers& other) const
{
    int newNumerator;
    int newDenominator;

    newNumerator = (numerator * other.denominator) -(other.numerator * denominator);

    newDenominator = denominator * other.denominator;

    RationalNumbers result(newNumerator, newDenominator);

    result.normalize();

    return result;
}


// Multiplication
RationalNumbers RationalNumbers::operator*(const RationalNumbers& other) const
{
    int newNumerator;
    int newDenominator;

    newNumerator = numerator * other.numerator;

    newDenominator = denominator * other.denominator;

    RationalNumbers result(newNumerator, newDenominator);

    result.normalize();

    return result;
}


// Division
RationalNumbers RationalNumbers::operator/(const RationalNumbers& other) const
{
    int newNumerator;
    int newDenominator;

    newNumerator =numerator * other.denominator;

    newDenominator =denominator * other.numerator;

    RationalNumbers result(newNumerator, newDenominator);

    result.normalize();

    return result;
}


// ============================================================
// OPERATIONS WITH A CONSTANT
// ============================================================

// Add constant
RationalNumbers RationalNumbers::operator+(int constant) const
{
    RationalNumbers value(constant, 1);

    return *this + value;
}


// Subtract constant
RationalNumbers RationalNumbers::operator-(int constant) const
{
    RationalNumbers value(constant, 1);

    return *this - value;
}


// Multiply by constant
RationalNumbers RationalNumbers::operator*(int constant) const
{
    RationalNumbers result(numerator * constant,denominator);

    result.normalize();

    return result;
}


// Divide by constant
RationalNumbers RationalNumbers::operator/(int constant) const
{
    RationalNumbers result(numerator,denominator * constant);

    result.normalize();

    return result;
}


// ============================================================
// CONDITION OPERATORS
// ============================================================

// Equal
bool RationalNumbers::operator==(const RationalNumbers& other) const
{
    return numerator * other.denominator ==other.numerator * denominator;
}


// Not equal
bool RationalNumbers::operator!=(const RationalNumbers& other) const
{
    return !(*this == other);
}


// Greater than or equal
bool RationalNumbers::operator>=(const RationalNumbers& other) const
{
    return numerator * other.denominator >= other.numerator * denominator;
}


// Greater than
bool RationalNumbers::operator>(const RationalNumbers& other) const
{
    return numerator * other.denominator >other.numerator * denominator;
}


// Less than or equal
bool RationalNumbers::operator<=(const RationalNumbers& other) const
{
    return numerator * other.denominator <=other.numerator * denominator;
}


// Less than
bool RationalNumbers::operator<(const RationalNumbers& other) const
{
    return numerator * other.denominator <other.numerator * denominator;
}


// ============================================================
// OUTPUT OPERATOR
// ============================================================

ostream& operator<<(ostream& out,const RationalNumbers& number)
{
    if (number.denominator == 1)
    {
        out << number.numerator;
    }
    else
    {
        out << number.numerator<< "/"<< number.denominator;
    }

    return out;
}


// ============================================================
// CONSTANT ON LEFT SIDE
// ============================================================

RationalNumbers operator+(int constant,const RationalNumbers& number)
{
    return number + constant;
}


RationalNumbers operator-(int constant,const RationalNumbers& number)
{
    RationalNumbers value(constant, 1);

    return value - number;
}


RationalNumbers operator*(int constant,const RationalNumbers& number)
{
    return number * constant;
}


RationalNumbers operator/(int constant,const RationalNumbers& number)
{
    RationalNumbers value(constant, 1);

    return value / number;
}