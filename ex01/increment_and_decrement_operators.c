/***************************************************************
 *                                                             *
 *       Increment and Decrement Operators in C Programming    *
 *                                                             *
 ***************************************************************/

/*
===============================
  Increment Operator (++)
===============================

The increment operator (++) increments the value by one.

Example

    Declare an integer variable var and initialize it to 5.
    Print the value of var (will print 5).
    Apply var++ (increments the value of var to 6).
    Print the value of var again (will print 6).

===============================
  Decrement Operator (--)
===============================

The decrement operator (--) decrements the value by one.
Works just the opposite of increment.

Example

    Declare an integer variable var and initialize it to 5.
    Print the value of var (will print 5).
    Apply var-- (decrements the value of var to 4).
    Print the value of var again (will print 4).

===============================
  Using Increment/Decrement Operators in Two Ways
===============================

Increment and decrement operators can be used as:
    var++ and ++var
    var-- and --var

-------------------------------
Post-Increment Operation (var++)
-------------------------------

The value is returned first and then only incremented.

Example

    Expression: b = a++
    First, the value of a will be returned and stored in b.
    Then, a is incremented.
    If a = 10 initially, after b = a++:
        b = 10
        a = 11

-------------------------------
Pre-Increment Operation (++var)
-------------------------------

The value is incremented first and then only returned.

Example

    Expression: b = ++a
    First, a is incremented.
    Then, its value is returned and assigned to b.
    If a = 10 initially, after b = ++a:
        a = 11
        b = 11

-------------------------------
Post/Pre Decrement
-------------------------------

The decrement operator can also be used in these two ways:
    a-- and --a

===============================
  Summary
===============================

The difference between post-increment and pre-increment operators is the order of increment and return.
The same applies to post-decrement and pre-decrement operators.
*/

/***************************************************************
 *    Example: Increment and Decrement Operators in C          *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int var = 5;

    // Increment example
    printf("Initial value: %d\n", var); // 5
    var++;
    printf("After var++: %d\n", var);   // 6

    // Decrement example
    var = 5;
    printf("\nReset value: %d\n", var); // 5
    var--;
    printf("After var--: %d\n", var);   // 4

    // Post-Increment vs Pre-Increment
    int a = 10, b;
    b = a++; // Post-increment
    printf("\nAfter b = a++: a = %d, b = %d\n", a, b); // a=11, b=10

    a = 10;
    b = ++a; // Pre-increment
    printf("After b = ++a: a = %d, b = %d\n", a, b);   // a=11, b=11

    // Post-Decrement vs Pre-Decrement
    a = 10;
    b = a--; // Post-decrement
    printf("\nAfter b = a--: a = %d, b = %d\n", a, b); // a=9, b=10

    a = 10;
    b = --a; // Pre-decrement
    printf("After b = --a: a = %d, b = %d\n", a, b);   // a=9, b=9

    return 0;
}
