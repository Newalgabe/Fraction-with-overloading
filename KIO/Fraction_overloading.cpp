#include "Fraction_overloading.h"
#include <iostream>

using namespace std;

Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}

void Fraction::simplify()
{
    int gcd = findGCD(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
}

int Fraction::findGCD(int a, int b)
{
    while (true)
    {
        if (a == b)
            return a;
        else if (a > b)
            a -= b;
        else
            b -= a;
    }
}

Fraction::Fraction(int num, int denom)
{
    numerator = num;
    denominator = denom;
    simplify();
}

void Fraction::inputFraction()
{
    int choice;
    cout << "Is the number an integer? (Enter 1 for Yes, 0 for No): ";
    cin >> choice;

    if (choice == 1) {
        int number;
        cout << "Enter the number: ";
        cin >> number;

        numerator = number;
        denominator = 1;
    }
    else {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    simplify();
}

Fraction Fraction::operator+(const Fraction& fraction)
{
    int newNumerator = (numerator * fraction.denominator) + (fraction.numerator * denominator);
    int newDenominator = denominator * fraction.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator+(int value)
{
    return Fraction(numerator + value * denominator, denominator);
}

Fraction operator+(int value, const Fraction& fraction)
{
    return Fraction(fraction.numerator + value * fraction.denominator, fraction.denominator);
}

Fraction Fraction::operator-(const Fraction& fraction)
{
    int newNumerator = (numerator * fraction.denominator) - (fraction.numerator * denominator);
    int newDenominator = denominator * fraction.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator-(int value)
{
    return Fraction(numerator - value * denominator, denominator);
}

Fraction operator-(int value, const Fraction& fraction)
{
    return Fraction(value * fraction.denominator - fraction.numerator, fraction.denominator);
}

Fraction Fraction::operator*(const Fraction& fraction)
{
    int newNumerator = numerator * fraction.numerator;
    int newDenominator = denominator * fraction.denominator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator*(int value)
{
    return Fraction(numerator * value, denominator);
}

Fraction operator*(int value, const Fraction& fraction)
{
    return Fraction(value * fraction.numerator, fraction.denominator);
}

Fraction Fraction::operator/(const Fraction& fraction)
{
    int newNumerator = numerator * fraction.denominator;
    int newDenominator = denominator * fraction.numerator;
    return Fraction(newNumerator, newDenominator);
}

Fraction Fraction::operator/(int value)
{
    return Fraction(numerator, denominator * value);
}

Fraction operator/(int value, const Fraction& fraction)
{
    return Fraction(value * fraction.denominator, fraction.numerator);
}

Fraction& Fraction::operator++()
{
    numerator += denominator;
    return *this;
}

Fraction Fraction::operator++(int)
{
    Fraction temp = *this;
    numerator += denominator;
    return temp;
}

Fraction& Fraction::operator--()
{
    numerator -= denominator;
    return *this;
}

Fraction Fraction::operator--(int)
{
    Fraction temp = *this;
    numerator -= denominator;
    return temp;
}

void Fraction::display() {
    cout << numerator << "/" << denominator;
}
