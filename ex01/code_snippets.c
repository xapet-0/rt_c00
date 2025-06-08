/***************************************************************
 *                                                             *
 *             Assignment Operator in C Programming            *
 *                                                             *
 ***************************************************************/

/*
===============================
  Assignment Operator Overview
===============================

The assignment operator can be used to assign values to variables.

-------------------------------
Example Programme
-------------------------------

In the main function:

    Declare an integer variable a and initialize to 10.
    Declare another integer variable b and set b = a.

    That is the assignment operator.

    The = symbol is the assignment operator in C.

    The value of a is assigned to variable b.
    So 10 will be stored in b also.

    Now, printing the values of a and b, the output will be 10, 10.

    The value of the right side operand is assigned to the left side operand.

===============================
  Compound Assignment Operators
===============================

There are more compound assignment operators:

    +=
        Left and right operands will be added and the result will be assigned to the left operand.
        Equivalent to writing a = a + b

    -=
        Right operand will be subtracted from left operand and the result will be assigned to the left operand.
        Equivalent to writing a = a - b

    *=
        The product of left and right operand will be calculated and assigned to the left operand.
        Equivalent to writing a = a * b

    /=
        The left operand is divided by right operand and the quotient is assigned to the left operand.
        Equivalent to writing a = a / b

    %=
        After left and right operand division, the remainder will be stored in the left operand.
        Equivalent to writing a = a % b

-------------------------------
Examples of Compound Assignment Operators
-------------------------------

Let a = 10 and b = 5:

    a += b      // Equivalent to a = a + b     // Result: a = 15
    a -= b      // Equivalent to a = a - b     // Result: a = 5
    a *= b      // Equivalent to a = a * b     // Result: a = 50
    a /= b      // Equivalent to a = a / b     // Result: a = 2
    a %= b      // Equivalent to a = a % b     // Result: a = 0

===============================
  Sample Programme
===============================

Main function:

    Declare integer variables a = 10 and b = 5
    Calculate a += b
    Print the value of a as a + b
    The output will be 15
*/

/***************************************************************
 *       Example: Assignment and Compound Assignment           *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 5;

    // Simple assignment operator
    int c = a; // c = 10
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // Compound assignment operators
    a += b; // a = a + b => a = 15
    printf("After a += b, a = %d\n", a);

    a -= b; // a = a - b => a = 10
    printf("After a -= b, a = %d\n", a);

    a *= b; // a = a * b => a = 50
    printf("After a *= b, a = %d\n", a);

    a /= b; // a = a / b => a = 10
    printf("After a /= b, a = %d\n", a);

    a %= b; // a = a % b => a = 0
    printf("After a %%= b, a = %d\n", a);

    return 0;
}
