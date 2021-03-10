// illustration of different operators

#include <iostream>
using namespace std;

int main()
{
    int a =5 , b = 3, c = 7, d = 2, e =3, x, y;
    bool result = true;
    // arithmetic expression using arithmetic operators
    cout << "\n sum of a and b is " << a + b;
    cout << "\n difference between a and c is " << c - a;
    cout << "\n product of d and e is " << d * e;
    cout << "\n Quotient when c  divided by d is " << c / d; //returns quotient as integer
    cout << "\n Remainder when c  divided by d is " << c % d; // returns reaminder


    //relational express using relation operators
    // expression is a combination of operators and operands
    // operands could be a constant or variable

    std::cout << std::boolalpha;//converts 1 and 0 to true and false respectively
    x = (a > b) && (e >= a);
    y = (a > b) || (e >= a);
    cout << "\n Is a greater than b? " << (a > b);
    cout << "\n Is e is greater than or equal to a ? " << (e >= a);
       
    cout << "\n x= " << x;

    cout << "\n y= " << y;


}

