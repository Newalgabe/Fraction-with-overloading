#pragma once

#include <iostream>

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    void simplify();
    int findGCD(int a, int b);

    Fraction(int num, int denom);
    void inputFraction();

    Fraction operator+(const Fraction& fraction);
    Fraction operator+(int value);
    friend Fraction operator+(int value, const Fraction& fraction);

    Fraction operator-(const Fraction& fraction);
    Fraction operator-(int value);
    friend Fraction operator-(int value, const Fraction& fraction);

    Fraction operator*(const Fraction& fraction);
    Fraction operator*(int value);
    friend Fraction operator*(int value, const Fraction& fraction);

    Fraction operator/(const Fraction& fraction);
    Fraction operator/(int value);
    friend Fraction operator/(int value, const Fraction& fraction);

    Fraction& operator++();
    Fraction operator++(int);
    Fraction& operator--();
    Fraction operator--(int);

    void display();
};