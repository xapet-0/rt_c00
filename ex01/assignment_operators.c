/***************************************************************
 *                                                             *
 *                  Operators and Operands in C                *
 *                                                             *
 ***************************************************************/

/*
===============================
  What Are Operators and Operands?
===============================

Operators are used to perform mathematical and logical calculations in a programme.

When we talk about operators, we definitely need to know about operands as well.

-------------------------------
Operand Definition
-------------------------------

What is an operand?

If you have an expression A + B:

    The operands in this expression are A and B.
    The + here is the operator.

Basically, you have an operator which performs an operation on the operands.

===============================
  Classification of Operators
===============================

We have:

    Unary operators
    Binary operators
    Ternary operators

-------------------------------
Unary Operator
-------------------------------

We just need a single operand for this operation to work.

Examples:

    The increment operator (++)
    The decrement operator (--)

Example usage: ++a

In this expression, you have an operator ++ and an operand which is a.

A single operand is needed here.

-------------------------------
Binary Operator
-------------------------------

Here we need 2 operands.

Examples:

    +, -, *, %, etc.

Example: a + b

You have 2 operands (A and B) and one operator (+).

-------------------------------
Ternary Operator
-------------------------------

To perform calculation, you need three operands.

Example:

    This is called the Conditional Operator in C.

Example usage: a > b ? print a : print b;

It works like: if a greater than b, then print a; else, print b.

===============================
  Summary
===============================

These are the three types of operators.
*/

/***************************************************************
 *                  Examples: C Operators                      *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 3, result;

    // Unary Operator Example
    ++a; // a becomes 6
    printf("After ++a, a = %d\n", a);

    // Binary Operator Example
    result = a + b; // Adds a and b
    printf("Result of a + b = %d\n", result);

    // Ternary Operator Example
    int max = (a > b) ? a : b;
    printf("The greater value is: %d\n", max);

    return 0;
}
