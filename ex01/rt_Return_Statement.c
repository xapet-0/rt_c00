/***************************************************************
 *                                                             *
 *         Learning About the Return Statement in C             *
 *                                                             *
 ***************************************************************/

/*
===============================
  How the Return Statement Works
===============================

Function Call and Control Flow
------------------------------
When the programme execution reaches a function call, the control goes to the function definition.

When the programme execution reaches the return statement, it:
    - Terminates execution of the function
    - Returns the control to the calling function

------------------------------
Syntax of Return Statement
------------------------------

If we write 'return;' just like this:
    - It will not return anything to the calling function
    - It will terminate the function execution and give control to the calling function

But if we specify any particular value, variable, or expression (for example return 10;, return a; or return a+b;):
    - The given value will be returned to the calling function
    - It then terminates the function execution and gives control to the calling function

==================================================
Example Programme
==================================================

Step-by-Step Execution
----------------------
1. Execution Begins from Main Function

    Integer variable ans will be created

2. Function Call

    ans = sum(10, 5);

    Control goes to function sum and the arguments 10 and 5 will be stored in parameters a and b

3. Sum Calculation

    a + b is calculated and stored in another integer variable result

    So there is 15 in result now

4. Return Statement

    Next we have return result;

    This value (15) will be returned to the calling function main

    Function execution is terminated and control comes to main

    15 is assigned to variable ans

5. Output

    Next we have a printf statement which will print 10 + 5 equal to value in variable ans which is 15

    And return zero

--------------------------------------------------
What Happens If There Are Statements Below Return?
--------------------------------------------------
If the programme execution reaches the return statement, the statements below that will not get executed

So this statement here will not be executed
*/

/***************************************************************
 *                Example: Return Statement                    *
 ***************************************************************/

#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main(void)
{
    int ans;

    // Function call
    ans = sum(10, 5);

    // Output
    printf("10 + 5 = %d\n", ans);

    return 0;
}

// Function definition
int sum(int a, int b)
{
    int result = a + b;

    return result; // Function terminates here, returns value to main

    // The below statement will NOT be executed
    // printf("This line will never be executed.\n");
}
