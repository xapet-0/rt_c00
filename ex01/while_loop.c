/***************************************************************
 *                                                             *
 *                Understanding the While Loop                 *
 *                                                             *
 ***************************************************************/

/*
===============================
  When to Use While Loop
===============================

The while loop can be used in situations where we don't know the exact number of iterations.

Here, the number of iterations actually depends on the input.

-------------------------------
Example Scenario
-------------------------------

Let's say we get an input and have a block of code.

We want to execute this block of code until the input value divided by two becomes one.

If the input is 2, the block will execute one time (since 2/2 = 1).

If the input is 8, the block of code will execute three times:

    8/2 = 4
    4/2 = 2
    2/2 = 1

Here, the number of iterations depends on the value of input.

There is this undeterminism, and in such cases, we cannot use a for loop.

-------------------------------
Syntax of While Loop
-------------------------------

while(condition)
{
    // statements
}

-------------------------------
How the While Loop Works
-------------------------------

The working is very simple:

As long as the condition is true, the statements inside while will be executed.

The moment the condition becomes false, the control comes out of the while loop.

-------------------------------
Example Walkthrough
-------------------------------

Variable Initialization

We have a variable initialization.

Then, we have the while loop where we have some statements, including increment/decrement of the variable.

Loop Execution Flow

First, initialization will be done.

The condition will be checked.

If it is satisfied (true), the inner statements will be executed, including the increment/decrement.

The first iteration is completed.

Now it goes and checks the while condition again.

If it is still true, it will go inside again and execute the statements.

The second iteration is completed.

Again, the while condition is checked.

If it returns false, the control comes out of the while loop and executes the remaining statements.

-------------------------------
Summary of While Loop
-------------------------------

Basically, while loop will execute this block inside as long as the condition is true.

==================================================
Sample Programme
==================================================

Problem Statement

Get an integer number from the user and display how many times it can be divided by two until it becomes 1.

Step-by-Step Example

Main Function & Variable Declaration

Declare 2 integer variables num and count, and initialize to 0.

Ask the user to enter a number and store it in num.

Suppose it was 20.

While Loop

While the condition (num > 1) is true, statements inside while will be executed.

First Iteration:

    num = 20, which is greater than 1 (condition true).
    Increment count (count becomes 1).
    num = num right shift 1 (equivalent to num / 2), so num becomes 10.

Second Iteration:

    Check condition: num = 10 (greater than 1), condition true.
    Increment count (count becomes 2).
    Right shift num, num becomes 5.

Third Iteration:

    Check condition: num = 5 (greater than 1), condition true.
    Increment count (count becomes 3).
    num = num/2, num becomes 2.

Fourth Iteration:

    Check condition: num = 2 (greater than 1), condition true.
    Increment count (count becomes 4).
    Right shift num, num becomes 1.

Exit Condition:

    Check condition: num = 1 (not greater than 1), condition false.
    Comes out of the while loop.

Output

Print the value of count.

Here, count = 4 which will be printed.
*/

/***************************************************************
 *                  Example: While Loop in C                   *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int num = 0, count = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    while (num > 1)
    {
        count++;
        num = num / 2; // Or: num >>= 1;
    }

    printf("Number of times it can be divided by 2 until it becomes 1: %d\n", count);

    return 0;
}
