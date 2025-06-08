/***************************************************************
 *                                                             *
 *                How a Function Works in C                    *
 *                                                             *
 ***************************************************************/

/*
========================================
  Working of a Function: Example Programme
========================================

Programme Overview
------------------
We have this programme here and we have a function called sum.

But we know that execution begins from the main function.

----------------------------------------
Step-by-Step Execution
----------------------------------------

1. Variable Creation and Initialization

   Three integer variables a, b, and result are created.

   a and b are initialized with values 10 and 20.

2. Function Call

   result = sum(a, b);

   We are calling the function sum by passing a and b.

----------------------------------------
Arguments and Parameters
----------------------------------------

The data passed to the function is called the arguments.

Here, a and b are the arguments.

The main function is calling the sum function.

It is called the calling function.

The function which contains the actual function call is called the calling function.

----------------------------------------
Control Transfer to the Function Definition
----------------------------------------

Now, the control will go to the function definition.

The values passed by the main function (a and b), that is 10 and 20, will be stored in x and y.

x and y are called the parameters of the function.

A parameter is a variable in the declaration of the function.

Here, x and y are the parameters.

----------------------------------------
Called Function
----------------------------------------

Here, the main function called the function sum.

So it is known as the called function.

The called function is the function which is being called.

Here, sum is the called function.

----------------------------------------
Function Execution Flow
----------------------------------------

When the main function calls the sum function:

- The execution of the main function will be stopped.

- The called function sum will be executed.

- Now, the sum function statement will get executed:

  x + y is calculated and stored in variable ans.

  ans is returned to the calling function main and will be stored in result.

----------------------------------------
Returning Control
----------------------------------------

Now the sum function's task is over.

Now it’s main function's turn to start executing the remaining statements.

Hence, the printf statement will be executed and it will print result equal to 30.

----------------------------------------
Summary
----------------------------------------

This is how the function is called and executed.
*/

/***************************************************************
 *                  Example Programme Code                     *
 ***************************************************************/

#include <stdio.h>

// Function declaration (prototype)
int sum(int x, int y);

int main(void)
{
    // 1. Variable Creation and Initialization
    int a = 10;
    int b = 20;
    int result;

    // 2. Function Call
    result = sum(a, b);

    // 3. Print the result
    printf("Result = %d\n", result);  // Output: Result = 30

    return 0;
}

// Function definition
int sum(int x, int y)
{
    int ans = x + y;   // x + y is calculated and stored in ans
    return ans;        // ans is returned to main
}
