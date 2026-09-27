//Victor Garcia
//Chapter 4
//09/23/26


#include<iostream>
#include"input.h"
#include"ComplexNumbers.h"
#include "RationalNumbers.h"
#include "PolynomialNumbers.h"
using namespace std;

//functions prototype
char MenuOption();
char ComplexNumbersMenu();
char RationalNumbersMenu();
char PolynomialsMenu();


char ComplexNumbersMenuA();
char ComplexNumbersMenuB();

char RationalNumbersMenuA();
char RationalNumbersMenuB();

char PolynomialsMenuA();
char PolynomialsMenuB();


int main()
{
    srand(time(0));

    do
    {
        switch (MenuOption())
        {
        case 1:
        {
             ComplexNumbersMenu();
             
            break;
        }

        case 2:
        {
            RationalNumbersMenu();
            
            break;
        }

        case 3:
        {
            PolynomialsMenu();
            break;
        }

        case 'X':
        {
            exit(1);
        }
        }

        cout << "\n";
        system("pause");

    } while (true);

    return EXIT_SUCCESS;
}

char MenuOption()
{
    system("cls");

    cout << "\n\tCMPR131 Chapter 4: Complex Numbers, Rational Numbers, Polynomials by Victor Garcia (09/23/2026)";
    cout << "\n\t" << string(80, char(205));
    cout << "\n\t\t1> Complex Numbers";
    cout << "\n\t\t2> Rational Numbers";
    cout << "\n\t\t3> Polynomials";
    cout << "\n\t" << string(80, char(196));
    cout << "\n\t\tX. Exit";
    cout << "\n\t" << string(80, char(205));

    char option = toupper(inputChar("\n\tOption: ", static_cast<string>("123x")));

    switch (option)
    {
    case '1':
    {
        return 1;
    }

    case '2':
    {
        return 2;
    }

    case '3':
    {
        return 3;
    }

    case 'X':
    {
        exit(1);
    }

    default:
    {
        return option;
    }
    }
}
//ComplexNumbers
ComplexNumbers testA1;
ComplexNumbers testA2;
ComplexNumbers testb1;
ComplexNumbers testb2;

//RationalNumbers
RationalNumbers rationalA1;
RationalNumbers rationalA2;
RationalNumbers rationalB1;
RationalNumbers rationalB2;


//ComplexNumbers
char ComplexNumbersMenu()
{

    do
    {
        system("cls");

        cout << "\n\tA complex number is a number that can be expressed in the form a + bi, where a and b are real";
        cout << "\n\tnumbers, and i represents the imaginary unit, satisfying the equation i^2 = -1. Because no";
        cout << "\n\treal number satisfies this equation, i is called an imaginary number. For the complex number";
        cout << "\n\ta + bi, a is called the real part and b is called the imaginary part.";
        cout << "\n\n\t1> Complex Numbers";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\tA> A Complex Number";
        cout << "\n\t\tB> Multiple Complex Numbers";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));

        char option = toupper(inputChar("\n\t\tOption: ",static_cast<string>("0ab")));

        switch (option)
        {
        case 'A':
        {
            ComplexNumbersMenuA();
            break;
        }

        case 'B':
        {
            ComplexNumbersMenuB();
            break;
        }

        case '0':
        {
            return 0;
        }
        }

    } while (true);
}
char ComplexNumbersMenuA() 
{
    do
    {
        system("cls");
        cout << "\n\n\tA> Complex Numbers";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\t1. Enter the real number";
        cout << "\n\t\t2.Enter the imaginary number";
        cout << "\n\t\t3.Display the complex number";
        cout << "\n\t\t4.Negate the complex number";
        cout << "\n\t\t5.Add (+) the complex number with a constant";
        cout << "\n\t\t6.Subtract (-) the complex number with a constant";
        cout << "\n\t\t7.Multiply (*) the complex number with a constant";
        cout << "\n\t\t8.Divide (/) the complex number with a constant";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));

        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("012345678")));

        switch (option)
        {
        case '1':
        {

            double real = inputDouble("\n\t\tEnter a number (double value) for the real part: ");

            testA1.setReal(real);

            break;
        }

        case '2':
        {

            double imaginary = inputDouble("\n\t\tEnter a number (double value) for the imaginary part: ");

            testA1.setImaginary(imaginary);

            break;
        }
        case '3':
        {
            cout << "\n\t\tComplex number C1 = " << testA1 << "\n";
            break;
        }
        case '4':
        {
            testA2 = testA1;
            cout << "\n\t\tNegated the complex number C2 (a copy of C1)\n";

            cout << "\n\t\t-(" << testA2 << ") = " << -testA2 << "\n";
            break;
        }
        case '5':
        {
            testA2 = testA1;
            double value = inputDouble("\n\t\tEnter a value (double): ");

            cout << "\n\t\tC2 + value";
            cout << "\n\t\t(" << testA2 << ") + "<< value << " = " << testA2 + value;

            cout << "\n\n\t\tvalue + C2";
            cout << "\n\t\t" << value << " + ("<< testA2 << ") = " << value + testA2 << "\n";

            break;
        }
        case '6':
        {
            testA2 = testA1;
            double value = inputDouble("\n\t\tEnter a value (double): ");

            cout << "\n\t\tC2 - value";
            cout << "\n\t\t(" << testA2 << ") - "<< value << " = " << testA2 - value;

            cout << "\n\n\t\tvalue - C2";
            cout << "\n\t\t" << value << " - ("<< testA2 << ") = " << value - testA2 << "\n";


            break;
        }
        case '7':
        {
            testA2 = testA1;
            double value;

            value = inputDouble("\n\t\tEnter a value (double): ");

            cout << "\n\t\tC2 * value";
            cout << "\n\t\t(" << testA2 << ") * "<< value << " = " << testA2 * value;

            cout << "\n\n\t\tvalue * C2";
            cout << "\n\t\t" << value << " * ("<< testA2 << ") = " << value * testA2 << "\n";

            break;
        }
        case '8':
        {
            testA2 = testA1;
            double value = inputDouble("\n\t\tEnter a value (double): ");

            // C2 / value
            cout << "\n\t\tC2 / value";

            if (value == 0)
            {
                cout << "\n\t\tERROR: Cannot divide by zero.";
            }
            else
            {
                cout << "\n\t\t(" << testA2 << ") / "<< value << " = " << testA2 / value;
            }

            // value / C2
            cout << "\n\n\t\tvalue / C2";

            if (testA2.getReal() == 0 && testA2.getImaginary() == 0)
            {
                cout << "\n\t\tERROR: Cannot divide by zero.";
            }
            else
            {
                cout << "\n\t\t" << value << " / ("<< testA2 << ") = " << value / testA2;
            }

            cout << "\n";

            break;
        }

        case '0':
        {
            return 0;
        }
        }

        cout << "\n";
        system("pause");
    } while (true);
}
char ComplexNumbersMenuB()
{
    do
    {
        system("cls");
        cout << "\n\n\tB> Multiple Complex Numbers";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\t1. Enter complex number C1";
        cout << "\n\t\t2. Enter complex number C2";
        cout << "\n\t\t3. Verify condition operators (== and !=) of C1 and C2";
        cout << "\n\t\t4. Evaluate arithmatic operators (+, - , * and /) of C1 and C2";
        cout << "\n\t\t5. Evaluate steps in (3 * (C1 + C2) / 7) / (C2 - C1 / 9) != (1.07109 + 0.120832i) ?";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));



        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("012345678")));

        switch (option)
        {
        case '1':
        {
            double real;
            double imaginary;

            real = inputDouble("\n\t\tEnter a number (double value) for the real part of C1: ");
            imaginary = inputDouble("\n\t\tEnter a number (double value) for the imaginary part of C1: ");

            testb1.setReal(real);
            testb1.setImaginary(imaginary);

            cout << "\n\t\tC1 = " << testb1 << "\n";

            break;
        }

        case '2':
        {
            double real;
            double imaginary;

            real = inputDouble("\n\t\tEnter a number (double value) for the real part of C2: ");

            imaginary = inputDouble("\n\t\tEnter a number (double value) for the imaginary part of C2: ");

            testb2.setReal(real);
            testb2.setImaginary(imaginary);

            cout << "\n\t\tC2 = " << testb2 << "\n";

            break;
        }
        case '3':
        {
            cout << boolalpha;
            cout << "\n\t\tC1 == C2 -> (" << testb1 << ") == ("<< testb2 << ") ? " << (testb1 == testb2);
            cout << "\n\t\tC2 != C1 -> (" << testb2 << ") != ("<< testb1 << ") ? " << (testb2 != testb1);
            cout << noboolalpha;

            cout << "\n";

            break;
        }
        case '4':
        {
            cout << "\n\t\tAddition      : C1 + C2 -> ("<< testb1 << ") + (" << testb2 << ") = "<< testb1 + testb2;
            cout << "\n\t\tSubtraction   : C2 - C1 -> ("<< testb2 << ") - (" << testb1 << ") = "<< testb2 - testb1;
            cout << "\n\t\tMultiplication: C1 * C2 -> ("<< testb1 << ") * (" << testb2 << ") = "<< testb1 * testb2;
            cout << "\n\t\tDivision      : C2 / C1 -> ";

            if (testb1.getReal() == 0 && testb1.getImaginary() == 0)
            {
                cout << "ERROR: Cannot divide by zero.";
            }
            else
            {
                cout << "(" << testb2 << ") / ("<< testb1 << ") = "<< testb2 / testb1;
            }

            cout << "\n";

            break;
        }
        case '5':
        {
            ComplexNumbers C3(1.07109, 0.120832);

            ComplexNumbers step1;
            ComplexNumbers step2;
            ComplexNumbers step3;
            ComplexNumbers step4;
            ComplexNumbers rightSide;

            cout << "\n\t\tC1 = " << testb1;
            cout << "\n\t\tC2 = " << testb2;
            cout << "\n\t\tC3 = " << C3;
            cout << "\n\n\t\tEvaluating expression...";
            cout << "\n\t\t\t(3 * (C1 + C2) / 7) / "<< "(C2 - C1 / 9) != "<< "(1.07109 + 0.120832i) ?";

            // Step #1
            step1 = testb1 + testb2;
            rightSide = testb1 / 9;
            cout << "\n\t\tstep #1: (3 * (" << step1<< ") / 7) / (C2 - (" << rightSide<< ")) != (" << C3 << ")";

            // Step #2
            step2 = 3 * step1;
            rightSide = testb2 - rightSide;
            cout << "\n\t\tstep #2: ((" << step2<< ") / 7) / (" << rightSide<< ") != (" << C3 << ")";

            // Step #3
            step3 = step2 / 7;
            cout << "\n\t\tstep #3: (" << step3<< ") / (" << rightSide<< ") != (" << C3 << ")";

            // Step #4
            step4 = step3 / rightSide;
            cout << "\n\t\tstep #4: (" << step4<< ") != (" << C3 << ")";

            // Step #5
            cout << boolalpha;
            cout << "\n\t\tstep #5: "<< (step4 != C3);
            cout << noboolalpha;
            cout << "\n";

            break;
        }

        case '0':
        {
            return 0;
        }
        }
        cout << "\n";
        system("pause");

    } while (true);
    return 0;
}


//RationalNumbers
char RationalNumbersMenu()
{

    do
    {
        system("cls");

        cout << "\n\tA rational number is a number that can be written as a fraction, a/b, where a is numerator and";
        cout << "\n\tb is denominator. Rational numbers are all real numbers, and can be positive or negative. A";
        cout << "\n\tnumber that is not rational is called irrational. Most of the numbers that people use in everyday";
        cout << "\n\tlife are rational.These include fractions, integers and numbers with finite decimal digits.";
        cout << "\n\tIn general, a number that can be written as a fraction while it is in its own form is rational.";
        cout << "\n\n\t2> Rational Numbers";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\tA> A Rational Number";
        cout << "\n\t\tB> Multiple Rational Numbers";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));

        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("0ab")));

        switch (option)
        {
        case 'A':
        {
            RationalNumbersMenuA();
            break;
        }

        case 'B':
        {
            RationalNumbersMenuB();
            break;
        }

        case '0':
        {
            return 0;
        }
        }
        cout << "\n";
        system("pause");

    } while (true);
}
char RationalNumbersMenuA()
{

    do
    {
        system("cls");
        cout << "\n\n\tB> A Rational Number";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\t1. Enter the numerator";
        cout << "\n\t\t2. Enter the deminator";
        cout << "\n\t\t3. Display the rational number";
        cout << "\n\t\t4. Normalize the rational number";
        cout << "\n\t\t5. Negate the rational number";
        cout << "\n\t\t6. Add (+) the rational number with a constant";
        cout << "\n\t\t7. Subtract (-) the rational number with a constant";
        cout << "\n\t\t8. Multiply (*) the rational number with a constant";
        cout << "\n\t\t9. Divide (/) the rational number with a constant";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));

        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("0123456789")));

        switch (option)
        {
        case '1':
        {
            int numerator = inputInteger("\n\t\tEnter an integer for the numerator: ");
            rationalA1.setNumerator(numerator);

            break;
        }

        case '2':
        {
            int denominator = inputInteger("\n\t\tEnter an integer for the denominator: ");

            if (denominator == 0)
            {
                cout << "\n\t\tERROR: Denominator cannot be zero.";
            }
            else
            {
                rationalA1.setDenominator(denominator);
            }
            break;
        }
        case '3':
        {
            cout << "\n\t\tRational number R1 = "<< rationalA1 << "\n";
            break;
        }
        case '4':
        {
            rationalA2 = rationalA1;

            rationalA2.normalize();

            cout << "\n\t\tNormalized rational number R2 (a copy of R1)";

            cout << "\n\n\t\t" << rationalA2 << "\n";
            break;
        }
        case '5':
        {
            rationalA2 = rationalA1;

            cout << "\n\t\tNegated rational number R2 (a copy of R1)";

            cout << "\n\n\t\t-(" << rationalA2<< ") = " << -rationalA2 << "\n";
            break;
        }
        case '6':
        {
            rationalA2 = rationalA1;
            int value = inputInteger("\n\t\tEnter an integer value: ");

            cout << "\n\t\tR2 + value";
            cout << "\n\t\t(" << rationalA2 << ") + "<< value << " = "<< rationalA2 + value;
            cout << "\n\n\t\tvalue + R2";
            cout << "\n\t\t" << value << " + ("<< rationalA2 << ") = "<< value + rationalA2 << "\n";

            break;
        }
        case '7':
        {
            rationalA2 = rationalA1;

            int value = inputInteger("\n\t\tEnter an integer value: ");

            cout << "\n\t\tR2 - value";

            cout << "\n\t\t(" << rationalA2 << ") - "<< value << " = "<< rationalA2 - value;

            cout << "\n\n\t\tvalue - R2";

            cout << "\n\t\t" << value << " - ("<< rationalA2 << ") = "<< value - rationalA2 << "\n";
            break;
        }
        case '8':
        {
            rationalA2 = rationalA1;

            int value = inputInteger("\n\t\tEnter an integer value: ");

            cout << "\n\t\tR2 * value";
            cout << "\n\t\t(" << rationalA2 << ") * "<< value << " = "<< rationalA2 * value;
            cout << "\n\n\t\tvalue * R2";
            cout << "\n\t\t" << value << " * ("<< rationalA2 << ") = "<< value * rationalA2 << "\n";

            break;
        }
        case '9':
        {
            rationalA2 = rationalA1;

            int value = inputInteger("\n\t\tEnter an integer value: ");

            cout << "\n\t\tR2 / value";

            if (value == 0)
            {
                cout << "\n\t\tERROR: Cannot divide by zero.";
            }
            else
            {
                cout << "\n\t\t(" << rationalA2 << ") / "<< value << " = "<< rationalA2 / value;
            }

            cout << "\n\n\t\tvalue / R2";

            if (rationalA2.getNumerator() == 0)
            {
                cout << "\n\t\tERROR: Cannot divide by zero.";
            }
            else
            {
                cout << "\n\t\t" << value << " / ("<< rationalA2 << ") = "<< value / rationalA2;
            }

            cout << "\n";

            break;
        }
        case '0':
        {
            return 0;
        }
        }

        cout << "\n";
        system("pause");
    } while (true);
}
char RationalNumbersMenuB()
{

    do
    {
        system("cls");
        cout << "\n\n\tB> Multiple Rational Numbers";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\t1. Enter rational number R1";
        cout << "\n\t\t2. Enter rational number R2";
        cout << "\n\t\t3. Verify condition operators (==, !=, >=, >, <= and <) of R1 and R2";
        cout << "\n\t\t4. Evaluate arithmatic operators (+, - , * and /) of R1 and R2";
        cout << "\n\t\t5. Evaluate (3 * (R1 + R2) / 7) / (R2 - R1 / 9) >= 621/889";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));

        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("012345")));

        switch (option)
        {
        case '1':
        {
            int numerator;
            int denominator;

            numerator = inputInteger("\n\t\tEnter the numerator for R1: ");
            denominator = inputInteger("\n\t\tEnter the denominator for R1: ");

            if (denominator == 0)
            {
                cout << "\n\t\tERROR: Denominator cannot be zero.";
            }
            else
            {
                rationalB1.setNumerator(numerator);
                rationalB1.setDenominator(denominator);

                cout << "\n\t\tR1 = " << rationalB1 << "\n";
            }

            break;
        }

        case '2':
        {
            int numerator;
            int denominator;

            numerator = inputInteger("\n\t\tEnter the numerator for R2: ");
            denominator = inputInteger("\n\t\tEnter the denominator for R2: ");

            if (denominator == 0)
            {
                cout << "\n\t\tERROR: Denominator cannot be zero.";
            }
            else
            {
                rationalB2.setNumerator(numerator);
                rationalB2.setDenominator(denominator);

                cout << "\n\t\tR2 = " << rationalB2 << "\n";
            }

            break;
        }
        case '3':
        {
            cout << boolalpha;

            cout << "\n\t\tR1 == R2 -> ("<< rationalB1 << ") == ("<< rationalB2 << ") ? "<< (rationalB1 == rationalB2);
            cout << "\n\t\tR2 != R1 -> ("<< rationalB2 << ") != ("<< rationalB1 << ") ? "<< (rationalB2 != rationalB1);
            cout << "\n\t\tR1 >= R2 -> ("<< rationalB1 << ") >= ("<< rationalB2 << ") ? "<< (rationalB1 >= rationalB2);
            cout << "\n\t\tR2 > R1  -> ("<< rationalB2 << ") > ("<< rationalB1 << ") ? "<< (rationalB2 > rationalB1);
            cout << "\n\t\tR1 <= R2 -> ("<< rationalB1 << ") <= ("<< rationalB2 << ") ? "<< (rationalB1 <= rationalB2);
            cout << "\n\t\tR2 < R1  -> ("<< rationalB2 << ") < ("<< rationalB1 << ") ? "<< (rationalB2 < rationalB1);

            cout << noboolalpha;

            cout << "\n";

            break;
        }
        case '4':
        {
            cout << "\n\t\tAddition      : R1 + R2 -> ("<< rationalB1 << ") + ("<< rationalB2 << ") = "<< rationalB1 + rationalB2;
            cout << "\n\t\tSubtraction   : R2 - R1 -> ("<< rationalB2 << ") - ("<< rationalB1 << ") = "<< rationalB2 - rationalB1;
            cout << "\n\t\tMultiplication: R1 * R2 -> ("<< rationalB1 << ") * ("<< rationalB2 << ") = "<< rationalB1 * rationalB2;
            cout << "\n\t\tDivision      : R2 / R1 -> ";

            if (rationalB1.getNumerator() == 0)
            {
                cout << "ERROR: Cannot divide by zero.";
            }
            else
            {
                cout << "(" << rationalB2 << ") / ("<< rationalB1 << ") = "<< rationalB2 / rationalB1;
            }

            cout << "\n";

            break;
        }
        case '5':
        {
            RationalNumbers R3(621, 889);

            RationalNumbers R1PlusR2;
            RationalNumbers R1Divide9;
            RationalNumbers multiplyBy3;
            RationalNumbers rightSide;
            RationalNumbers divideBy7;
            RationalNumbers finalResult;

            cout << "\n\t\tR1 = " << rationalB1;
            cout << "\n\t\tR2 = " << rationalB2;
            cout << "\n\t\tR3 = " << R3;

            cout << "\n\n\t\tEvaluating expression...";

            cout << "\n\t\t\t(3 * (R1 + R2) / 7) / "<< "(R2 - R1 / 9) >= 621/889 ?";


            // Step #1
            R1PlusR2 = rationalB1 + rationalB2;
            R1Divide9 = rationalB1 / 9;
            cout << "\n\t\tstep #1: (3 * ("<< R1PlusR2<< ") / 7) / (R2 - ("<< R1Divide9<< ")) >= "<< R3 << " ?";


            // Step #2
            multiplyBy3 = 3 * R1PlusR2;
            rightSide = rationalB2 - R1Divide9;
            cout << "\n\t\tstep #2: (("<< multiplyBy3<< ") / 7) / ("<< rightSide<< ") >= "<< R3 << " ?";


            // Step #3
            divideBy7 = multiplyBy3 / 7;
            cout << "\n\t\tstep #3: ("<< divideBy7<< ") / ("<< rightSide<< ") >= "<< R3 << " ?";


            // Step #4
            finalResult = divideBy7 / rightSide;
            cout << "\n\t\tstep #4: ("<< finalResult<< ") >= "<< R3 << " ?";


            // Step #5
            cout << boolalpha;
            cout << "\n\t\tstep #5: "<< (finalResult >= R3);
            cout << noboolalpha;

            cout << "\n";

            break;
        }


        case '0':
        {
            return 0;
        }
        }

        cout << "\n";
        system("pause");
    } while (true);
}

//Polynomials
char PolynomialsMenu()
{
    do
    {
        system("cls");

        cout << "\n\tA polynomial is an expression consisting of variables(also called indeterminates) and";
        cout << "\n\tcoefficients, that involves only the operations of addition, subtraction, multiplication,";
        cout << "\n\tand non-negative integer exponentiation of variables.";
        cout << "\n\n\t3> Polynomials";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\tA> A Polynomial";
        cout << "\n\t\tB> Multiple Polynomials";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));

        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("0ab")));

        switch (option)
        {
        case 'A':
        {
            PolynomialsMenuA();
            break;
        }

        case 'B':
        {
            PolynomialsMenuB();
            break;
        }

        case '0':
        {
            return 0;
        }
        }

    } while (true);
}
char PolynomialsMenuA()
{
    do
    {
        system("cls");
        cout << "\n\n\tA> Single Polynomial";
        cout << "\n\t" << string(80, char(205));
        cout << "\n\t\t1. Enter the number of terms";
        cout << "\n\t\t2. Specify the coefficients";
        cout << "\n\t\t3. Evaluate epxression";
        cout << "\n\t\t4. Solve for the derivative";
        cout << "\n\t\t5. Solve for the integral";
        cout << "\n\t" << string(80, char(196));
        cout << "\n\t\t0. return";
        cout << "\n\t" << string(80, char(205));

        char option = toupper(inputChar("\n\t\tOption: ", static_cast<string>("012345")));

        switch (option)
        {
        case '1':
        {

            break;
        }

        case '2':
        {

            break;
        }
        case '3':
        {

            break;
        }
        case '4':
        {

            break;
        }
        case '5':
        {

            break;
        }

        case '0':
        {
            return 0;
        }
        }
    } while (true);
}
char PolynomialsMenuB()

{
    do
    {
        system("cls");

    } while (true);

}