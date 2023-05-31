#include "Fraction_overloading.h"
#include <iostream>

using namespace std;

int main() {
    Fraction fraction1;
    cout << "Enter the first fraction:" << endl;
    fraction1.inputFraction();

    Fraction fraction2;
    cout << "Enter the second fraction:" << endl;
    fraction2.inputFraction();

    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction product = fraction1 * fraction2;
    Fraction quotient = fraction1 / fraction2;

    cout << "Sum: ";
    sum.display();
    cout << endl;

    cout << "Difference: ";
    difference.display();
    cout << endl;

    cout << "Product: ";
    product.display();
    cout << endl;

    cout << "Quotient: ";
    quotient.display();
    cout << endl;

    Fraction intSum = fraction1 + 5;
    Fraction intDifference = fraction1 - 3;
    Fraction intProduct = fraction1 * 2;
    Fraction intQuotient = fraction1 / 4;

    cout << "Sum with int: ";
    intSum.display();
    cout << endl;

    cout << "Difference with int: ";
    intDifference.display();
    cout << endl;

    cout << "Product with int";
    intProduct.display();
    cout << endl;

    cout << "Quotient with int";
    intQuotient.display();
    cout << endl;

    Fraction intSum2 = 7 + fraction1;
    Fraction intDifference2 = 4 - fraction1;
    Fraction intProduct2 = 3 * fraction1;
    Fraction intQuotient2 = 10 / fraction1;

    cout << "Sum with int as the first argument: ";
    intSum2.display();
    cout << endl;

    cout << "Difference with int as the first argument: ";
    intDifference2.display();
    cout << endl;

    cout << "Product with int as the first argument: ";
    intProduct2.display();
    cout << endl;

    cout << "Quotient with int as the first argument: ";
    intQuotient2.display();
    cout << endl;

    return 0;
}