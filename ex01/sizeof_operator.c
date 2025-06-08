/***************************************************************
 *                                                             *
 *                   The sizeof Operator in C                  *
 *                                                             *
 ***************************************************************/

/*
===============================
  What is the sizeof Operator?
===============================

Using the sizeof operator, we can get the size of a variable or a datatype.

In GCC:

    sizeof(int)    = 4   // The integer datatype allocates 4 bytes to store the value.
    sizeof(char)   = 1   // The character datatype allocates 1 byte to store the value.
    sizeof(float)  = 4   // The float datatype allocates 4 bytes to store the value.
    sizeof(double) = 8   // The double datatype allocates 8 bytes to store the value.

===============================
  Example Programme
===============================

Step-by-Step Execution
----------------------

Variable Declarations

    Declare a character variable c
    Declare a double precision floating point variable d

Print Statements

    Print: size of variable c = sizeof(c)
        Finds the size of variable c (character type), prints 1

    Print: size of variable d = sizeof(d)
        Finds the size of variable d (double type), prints 8

    Print: sizeof(10)
        10 is an integer, so size of 10 will return 4
*/

/***************************************************************
 *             Example: sizeof Operator in C                   *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    char c;
    double d;

    printf("size of variable c = %zu\n", sizeof(c));     // Typically 1
    printf("size of variable d = %zu\n", sizeof(d));     // Typically 8
    printf("size of 10         = %zu\n", sizeof(10));    // Typically 4 (int literal)

    // You can also print directly for datatypes:
    printf("size of int        = %zu\n", sizeof(int));
    printf("size of char       = %zu\n", sizeof(char));
    printf("size of float      = %zu\n", sizeof(float));
    printf("size of double     = %zu\n", sizeof(double));

    return 0;
}
