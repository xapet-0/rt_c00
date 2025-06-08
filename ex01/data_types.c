/***************************************************************
 *                                                             *
 *                   Data Types in C Programming               *
 *                                                             *
 ***************************************************************/

/*
===============================
  Importance of Data Types
===============================

To store or access any data in our programme, first we need to define its data type.

-------------------------------
Example: Choosing the Correct Data Type
-------------------------------

Suppose we want to use age in our programme:
    Age is always a whole number, so we choose the integer data type.
    Possible values: 20, 25, etc.
    You cannot have a decimal number for an integer data type.

Sometimes, we need to use decimal numbers:
    Example: Weight
    Weight may not always be a whole number (e.g., 52.3 kg, 70.5 kg).
    For this, we need a data type that can have decimal values: the floating point data type.

===============================
  Basic Data Types and Their Size (GCC)
===============================

1. Integer (int)
    Size: 4 bytes
    Used to store an integer value
    Examples: -5, -1, 0, 4, etc.

2. Float (float)
    Used to store a floating point number (number with a fractional part)
    Also called a single precision floating point number
    Size: 4 bytes
    Examples: 3.14, -2.5, 0.0

3. Double (double)
    Double or double precision floating point number
    Provides more space to store a number
    Size: 8 bytes
    Examples: 3.1415926, 1.0E+10

4. Char (char)
    Used to store a single character such as a, b, c, *, #, etc.
    Size: 1 byte

5. Void (void)
    Size: 1 byte
    An incomplete data type mainly used in functions as return type or argument type
    Example: void fun
    This means the function will not return anything
    Discussion of void type will be in later lessons
*/

/***************************************************************
 *              Example: Data Types and Their Size             *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int age = 20;
    float weight = 70.5f;
    double pi = 3.141592653589793;
    char grade = 'A';

    printf("Size of int:    %zu bytes, value = %d\n", sizeof(age), age);
    printf("Size of float:  %zu bytes, value = %.2f\n", sizeof(weight), weight);
    printf("Size of double: %zu bytes, value = %.8lf\n", sizeof(pi), pi);
    printf("Size of char:   %zu byte,  value = %c\n", sizeof(grade), grade);

    // Void type demonstration (mainly as return/argument type, not as a variable)
    printf("Size of void:   %zu byte\n", sizeof(void));

    return 0;
}
