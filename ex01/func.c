/***************************************************************
 *                                                             *
 *               Function Declaration & Definition             *
 *                                                             *
 *    This we are going to learn:                              *
 *                                                             *
 *    - Function declaration                                   *
 *    - Function definition                                    *
 *                                                             *
 ***************************************************************/

/*
===============================
  Function Declaration
===============================

Syntax for Declaring a Function

To declare a function, we should specify:

    - The function return type
    - The function name
    - Function parameters within parenthesis
    - At last, a semicolon

---------------------------------------------------------------
Example: Function Declaration in C
---------------------------------------------------------------

int add(int num1, int num2);

---------------------------------------------------------------
Return Type
---------------------------------------------------------------
The return type can be selected according to what type of data the function is returning

It can be char, int, float, double, etc.

It can even be void if the function does not return anything

// Example:
void greet(void);

---------------------------------------------------------------
Function Name
---------------------------------------------------------------
The function name should be meaningful

For example: If we want to write a program to add two numbers, we can declare the function name as add or sum

---------------------------------------------------------------
Function Parameters
---------------------------------------------------------------
Function parameters refer to the input which are passed while calling the function

We have to specify the parameters inside the parenthesis

For example: If we want to declare a function which will have 2 integer input parameters num1 and num2, then write:

    int num1, int num2

Like this

---------------------------------------------------------------
Example: Function Declaration with Parameters
---------------------------------------------------------------

int sum(int a, int b);

The parameter name is actually optional here, but datatype of parameter is mandatory

// You can also declare:
int sum(int, int);

---------------------------------------------------------------
Other Declarations
---------------------------------------------------------------
We can also declare functions without any parameters and return type

Just don't write anything in place of parameters

Give a name to the function and write void as the return type

// Example:
void printHello(void);

===============================
  Function Definition
===============================

This is where we actually implement the task

For example: We are going to write a function to add two numbers and return their sum

---------------------------------------------------------------
Implementation Example: Function Definition in C
---------------------------------------------------------------

int add(int num1, int num2) {
    int result = num1 + num2;
    return result;
}

// Or, return directly:
int sum(int a, int b) {
    return a + b;
}

---------------------------------------------------------------
Example: Function with no return value and no parameters
---------------------------------------------------------------

void greet(void) {
    printf("Hello, world!\n");
}

===============================
  Difference Between Function Declaration and Function Definition
===============================

In the function declaration, we are giving information about the function to the compiler:

For example: This function will be returning an integer value and it will take two parameters, both of integer type, etc.

In function definition, we're actually implementing the function using a group of statements

The objective here is to find the sum of A and B and return it

It can be done in any way:

Here we are creating a variable and storing sum to it, and then returning

It can also be directly returned like this

*/

/***************************************************************
 *                                                             *
 *                     Example: Using Functions                *
 *                                                             *
 ***************************************************************/

#include <stdio.h>

// Function declaration (prototype)
int add(int num1, int num2);
void greet(void);

int main(void)
{
    int a = 5, b = 3;
    int result = add(a, b);
    printf("Sum = %d\n", result);

    greet();

    return 0;
}

// Function definition
int add(int num1, int num2)
{
    return num1 + num2;
}

// Function with no parameters and no return value
void greet(void)
{
    printf("Hello, world!\n");
}
