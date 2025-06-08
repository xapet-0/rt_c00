/***************************************************************
 *                                                             *
 *                Relational Operators in C                    *
 *                                                             *
 ***************************************************************/

/*
===============================
  What Are Relational Operators?
===============================

The relational operators are used to compare two variables.

They will return one if the comparison or relation is true; otherwise, they will return zero.

===============================
  Major Relational Operators
===============================

1. Equal to (==)
    Checks if both left and right operands are the same.

    Example:
        10 == 10 → comparison is true, returns 1
        10 == 7  → comparison is false, returns 0

2. Not Equal to (!=)
    Checks if the left and right operands are not equal to each other.

    Example:
        10 != 20 → returns true
        10 != 10 → returns false

3. Less Than (<)
    Checks if the left operand is less than the right operand.

    Example:
        5 < 10   → returns true
        10 < 10  → returns false

4. Less Than or Equal to (<=)
    Checks if the left operand is less than or equal to the right operand.

    Example:
        10 <= 10 → returns true
        20 <= 10 → returns false

5. Greater Than (>)
    Checks if the left operand is greater than the right operand.

    Example:
        50 > 10  → returns true
        5 > 10   → returns false

6. Greater Than or Equal to (>=)
    Checks if the left operand is greater than or equal to the right operand.

    Example:
        10 >= 10 → returns true
        5 >= 10  → returns false

===============================
  Example Programme
===============================

Step-by-Step Execution
----------------------

Main Function and Variable Declaration

    Declare two integer variables: a = 5 and b = 10

    Print functions are used to demonstrate relational operators

Output Demonstrations

    The first print function will print:
        (%d == %d) is %d
    First %d: corresponds to a
    Second %d: corresponds to b
    Third %d: corresponds to the expression a == b

    For a == b, it will return 1 if true, 0 if false.

    Here, 5 == 10 is false, so the output will be:
        5 == 10 is 0

    Next print functions:
        5 != 10 is 1
        5 < 10 is 1
        5 <= 10 is 1
        5 > 10 is 0
        5 >= 10 is 0
*/

/***************************************************************
 *           Example: Relational Operators in Action           *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 10;

    printf("(%d == %d) is %d\n", a, b, a == b);   // 5 == 10 is 0
    printf("(%d != %d) is %d\n", a, b, a != b);   // 5 != 10 is 1
    printf("(%d < %d) is %d\n",  a, b, a < b);    // 5 < 10 is 1
    printf("(%d <= %d) is %d\n", a, b, a <= b);   // 5 <= 10 is 1
    printf("(%d > %d) is %d\n",  a, b, a > b);    // 5 > 10 is 0
    printf("(%d >= %d) is %d\n", a, b, a >= b);   // 5 >= 10 is 0

    return 0;
}
