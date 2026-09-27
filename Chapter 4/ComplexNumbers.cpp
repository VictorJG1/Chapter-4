#include "ComplexNumbers.h"


// Default constructor
ComplexNumbers::ComplexNumbers()
{
    real = 0.0;
    imaginary = 0.0;
}


// Constructor with real and imaginary values
ComplexNumbers::ComplexNumbers(double r, double i)
{
    real = r;
    imaginary = i;
}


// Set real value
void ComplexNumbers::setReal(double r)
{
    real = r;
}


// Set imaginary value
void ComplexNumbers::setImaginary(double i)
{
    imaginary = i;
}


// Get real value
double ComplexNumbers::getReal() const
{
    return real;
}


// Get imaginary value
double ComplexNumbers::getImaginary() const
{
    return imaginary;
}


// ============================================================
// NEGATE
// ============================================================

ComplexNumbers ComplexNumbers::operator-() const
{
    return ComplexNumbers(-real, -imaginary);
}


// ============================================================
// OPERATIONS WITH ANOTHER COMPLEX NUMBER
// ============================================================

// Addition
ComplexNumbers ComplexNumbers::operator+(const ComplexNumbers& other) const
{
    return ComplexNumbers(real + other.real,imaginary + other.imaginary);
}


// Subtraction
ComplexNumbers ComplexNumbers::operator-(const ComplexNumbers& other) const
{
    return ComplexNumbers(real - other.real,imaginary - other.imaginary);
}


// Multiplication
ComplexNumbers ComplexNumbers::operator*(const ComplexNumbers& other) const
{
    double newReal;
    double newImaginary;

    newReal = (real * other.real) -(imaginary * other.imaginary);

    newImaginary = (real * other.imaginary) +(imaginary * other.real);

    return ComplexNumbers(newReal, newImaginary);
}


// Division
ComplexNumbers ComplexNumbers::operator/(const ComplexNumbers& other) const
{
    double denominator;
    double newReal;
    double newImaginary;

    denominator = (other.real * other.real) +(other.imaginary * other.imaginary);

    newReal = ((real * other.real) +(imaginary * other.imaginary)) / denominator;

    newImaginary = ((imaginary * other.real) -(real * other.imaginary)) / denominator;

    return ComplexNumbers(newReal, newImaginary);
}


// ============================================================
// OPERATIONS WITH A CONSTANT
// ============================================================

// Add constant
ComplexNumbers ComplexNumbers::operator+(double constant) const
{
    return ComplexNumbers(real + constant,imaginary);
}


// Subtract constant
ComplexNumbers ComplexNumbers::operator-(double constant) const
{
    return ComplexNumbers(real - constant,imaginary);
}


// Multiply by constant
ComplexNumbers ComplexNumbers::operator*(double constant) const
{
    return ComplexNumbers(real * constant,imaginary * constant);
}


// Divide by constant
ComplexNumbers ComplexNumbers::operator/(double constant) const
{
    return ComplexNumbers(real / constant,imaginary / constant);
}


// ============================================================
// CONDITION OPERATORS
// ============================================================

// Equal
bool ComplexNumbers::operator==(const ComplexNumbers& other) const
{
    return real == other.real &&imaginary == other.imaginary;
}


// Not equal
bool ComplexNumbers::operator!=(const ComplexNumbers& other) const
{
    return !(*this == other);
}


// ============================================================
// OUTPUT OPERATOR
// ============================================================

ostream& operator<<(ostream& out, const ComplexNumbers& number)
{
    // Display real part
    out << number.real;

    // Only display imaginary part if it is not zero
    if (number.imaginary > 0)
    {
        out << " + " << number.imaginary << "i";
    }
    else if (number.imaginary < 0)
    {
        out << " - " << -number.imaginary << "i";
    }

    return out;
}

ComplexNumbers operator+(double constant, const ComplexNumbers& number)
{
    return ComplexNumbers(constant + number.real,number.imaginary);
}


ComplexNumbers operator-(double constant, const ComplexNumbers& number)
{
    return ComplexNumbers(constant - number.real,-number.imaginary);
}


ComplexNumbers operator*(double constant, const ComplexNumbers& number)
{
    return ComplexNumbers(constant * number.real,constant * number.imaginary);
}


ComplexNumbers operator/(double constant, const ComplexNumbers& number)
{
    double denominator;

    denominator = (number.real * number.real) + (number.imaginary * number.imaginary);

    double newReal;
    double newImaginary;

    newReal = (constant * number.real) / denominator;

    newImaginary = (-constant * number.imaginary) / denominator;

    return ComplexNumbers(newReal, newImaginary);
}