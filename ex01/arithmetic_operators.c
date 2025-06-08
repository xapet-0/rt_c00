/***************************************************************
 *                                                             *
 *           Arithmetic Operators in C Programming             *
 *                                                             *
 ***************************************************************/

/*
===============================
  Arithmetic Operators in C
===============================

An arithmetic operator is used to perform the basic mathematical calculations.

The arithmetic operators are:

    +  for addition
    -  for subtraction
    *  for multiplication
    /  for division
    %  for modulo operation

===============================
  Example Programme: Working of Arithmetic Operators
===============================

Step-by-Step Execution
----------------------

Main Function and Variable Declaration

    Declare 2 integer variables a and b

    Initialize a to 100 and b to 10

Addition

    Print function: a + b = %d

    For that integer value, you have a + b

    It will print 100 + 10 which is 110

Subtraction

    Another print function will print a - b

    a - b will be calculated and returned, which will be 90

Multiplication

    Next is another print function and it will print a * b

    a * b will be calculated, and 1000 will be printed

Division

    Another print function will print a / b

    a / b will be calculated and the quotient 10 will be returned

Modulo Operation

    Next print function: a %% b

    There are 2 % symbols here because:
        In format specifiers, we use % character
        To print % as a character, you can type %%

    This statement will print a % b (a modulo b)
    a % b will be calculated and:
    a will be divided by b and the remainder zero will be printed
*/

/***************************************************************
 *        Example: Arithmetic Operators in Action              *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int a = 100, b = 10;

    // Addition
    printf("a + b = %d\n", a + b); // 100 + 10 = 110

    // Subtraction
    printf("a - b = %d\n", a - b); // 100 - 10 = 90

    // Multiplication
    printf("a * b = %d\n", a * b); // 100 * 10 = 1000

    // Division
    printf("a / b = %d\n", a / b); // 100 / 10 = 10

    // Modulo Operation
    printf("a %% b = %d\n", a % b); // 100 % 10 = 0

    return 0;
}
