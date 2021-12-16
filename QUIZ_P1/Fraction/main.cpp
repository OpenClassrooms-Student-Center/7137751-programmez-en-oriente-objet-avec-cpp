//
//  main.cpp
//  Fraction
//
//  Created by Ranga Gonnage on 16/12/2021.
//

#include <iostream>
#include "Fraction.hpp"
using namespace std;

int main()
{
    Fraction a(4,5);      //Déclare une fraction valant 4/5
    Fraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
    Fraction c;         //Déclare une fractions valant 0

    c = a*b;               //Calcule 4/5 * 2/1 = 8/5

    cout << a << " * " << b << " = " << c << endl;

    if(a == b)
        cout << "a est egal a b." << endl;
    else
        cout << "a n’est pas egal a b." << endl;

    return 0;
}
