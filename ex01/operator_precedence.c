/***************************************************************
 *                                                             *
 *               Operator Precedence in C                      *
 *                                                             *
 ***************************************************************/

/*
===============================
  Understanding Operator Precedence
===============================

Expression Example

    Consider the expression:
        20 + 10 * 10 / 2

-------------------------------
Order of Evaluation
-------------------------------

How do we evaluate this expression?

Do we perform the operations from left to right and exactly in that order?

If we do:
    20 + 10 = 30
    30 * 10 = 300
    300 / 2 = 150

But is this the right method?

    150 is not the result of this expression.

This method is not correct because we must consider the priority (precedence) of each operator.

-------------------------------
Correct Precedence Evaluation
-------------------------------

Same expression: 20 + 10 * 10 / 2

The operators present:
    Addition
    Multiplication
    Division

Addition has lower priority.
Multiplication and division have the same, higher priority than addition.

Applying Precedence and Associativity

    Multiplication and division have the same priority, so consider associativity (left to right).

Step-by-step:

    Perform 10 * 10 = 100
    Next, perform 100 / 2 = 50
    Finally, perform 20 + 50 = 70

The result of the expression is 70.

-------------------------------
Operator Precedence Order
-------------------------------

Highest precedence: Parentheses ()
Next: Multiplication and division (same precedence)
Next: Addition and subtraction (same precedence)

-------------------------------
More Examples
-------------------------------

Example 1

    5 + 4 * 3

    Multiplication has higher precedence.
    Calculate 4 * 3 = 12
    Then 5 + 12 = 17

Example 2

    If you want to calculate 5 + 4 first, use parentheses:
        (5 + 4) * 3

    Parentheses have higher precedence.
    Calculate 5 + 4 = 9
    Then 9 * 3 = 27

-------------------------------
Operators with Same Precedence
-------------------------------

Example: Multiplication and division have the same precedence.

Apply associativity (left to right).

    For parentheses: left to right
    For multiplication/division: left to right
    For addition/subtraction: left to right

Example:

    10 * 3 / 2

    Multiply first: 10 * 3 = 30
    Divide next: 30 / 2 = 15
*/

/***************************************************************
 *        Example: Operator Precedence in C                    *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    printf("20 + 10 * 10 / 2 = %d\n", 20 + 10 * 10 / 2); // 70

    printf("5 + 4 * 3 = %d\n", 5 + 4 * 3);               // 17
    printf("(5 + 4) * 3 = %d\n", (5 + 4) * 3);           // 27

    printf("10 * 3 / 2 = %d\n", 10 * 3 / 2);             // 15

    return 0;
}
