/***************************************************************
 *                                                             *
 *                 Logical Operators in C                      *
 *                                                             *
 ***************************************************************/

/*
===============================
  Logical Operators in C
===============================

Logical operators are used to perform logical operations in C.

There are three logical operators:

    Logical OR operator
    Logical AND operator
    Logical NOT operator

-------------------------------
Symbols
-------------------------------

    Logical OR:  ||  (double vertical bar)
    Logical AND: &&  (double ampersand)
    Logical NOT: !   (exclamation mark)

===============================
  Logical OR (||)
===============================

Operates like an OR gate:

    If both inputs are zero, the output is zero.
    If at least one input is one, the result is one.

Examples:
    a = 0, b = 0 → a || b = 0
    a = 0, b = 1 → a || b = 1
    a = 1, b = 0 → a || b = 1
    a = 1, b = 1 → a || b = 1

Functionality:
    If all inputs are zero, the result is zero.
    If at least one input is one, the result is one.

===============================
  Logical AND (&&)
===============================

Operates like an AND gate:

    If a = 0, b = 0, then a && b = 0
    If a = 0, b = 1, then a && b = 0
    If a = 1, b = 0, then a && b = 0
    If a = 1, b = 1, then a && b = 1

Functionality:
    If all inputs are one, the result is one.
    If at least one is zero, the result is zero.

===============================
  Logical NOT (!)
===============================

Works as a NOT gate (inverter):

    Whatever input you give, the NOT gate will invert it.

Example:
    If a = 0, the output is one (bulb glows)
    If a = 1, the output is zero (bulb does not glow)

Functionality:
    The NOT operator inverts the input.

===============================
  Example Programme
===============================

Step-by-Step Execution
----------------------

Variable Declaration

    Main function declares three integer variables: a, b, and ret
    a = 5, b = 10

Logical OR Example

    ret = ( (a <= b) || (a != b) );
    a <= b is true (5 < 10)
    a != b is true (5 ≠ 10)
    OR operator returns true (1), stored in ret
    Print: Return value of above expression is 1

Logical AND Example

    ret = ( (a < b) && (a == b) );
    a < b is true (5 < 10)
    a == b is false (5 = 10 is false)
    AND operator returns false (0), stored in ret
    Print: Return value of above expression is 0

Logical NOT Example

    ret = ! ( (a < b) && (a == b) );
    (a < b) && (a == b) is false (0)
    NOT operator inverts 0 to 1, stored in ret
    Print: Return value of above expression is 1
*/

/***************************************************************
 *            Example: Logical Operators in C                  *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 10, ret;

    // Logical OR Example
    ret = ( (a <= b) || (a != b) );
    printf("Return value of (a <= b) || (a != b) is %d\n", ret); // 1

    // Logical AND Example
    ret = ( (a < b) && (a == b) );
    printf("Return value of (a < b) && (a == b) is %d\n", ret); // 0

    // Logical NOT Example
    ret = !( (a < b) && (a == b) );
    printf("Return value of !((a < b) && (a == b)) is %d\n", ret); // 1

    return 0;
}
