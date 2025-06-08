/***************************************************************
 *                                                             *
 *                 Variables in C Programming                  *
 *                                                             *
 ***************************************************************/

/*
===============================
  What is a Variable?
===============================

A variable is a real necessity in a programming language because data will be stored in computer memory locations.

These memory locations have addresses (which are hexadecimal values).

We often need to access memory to store and retrieve data.

-------------------------------
Example: Data Storage in Memory
-------------------------------

    Character h is stored in memory address 22fe53
    Character i is stored in memory address 22fe54
    Character j is stored in memory address 22fe55

If we want to change the values to a, b, and c respectively, we would need to use these addresses.

Remembering all memory addresses is difficult while programming.

-------------------------------
Solution: Variable Names
-------------------------------

We can map a meaningful variable name to a memory address.

This allows us to access the memory address using the variable name instead of the hexadecimal address.

Example:
    Memory address 22fe53 mapped to variable name letter1
    22fe54 mapped to letter2
    22fe55 mapped to letter3

Now, we can access 22fe53 using letter1, etc.

This way, we can easily manage the data at different locations.

===============================
  Rules for Valid Variable Names in C
===============================

1. Start with a Letter or Underscore
    Variable name should start with any letter (capital or small) or an underscore.
    Valid: _var, letter1
    Invalid: 1var (cannot start with a digit)

2. No Special Characters (Except Underscore)
    In the variable name, no special characters are allowed other than underscore.
    Underscore can be at any position, but no other special characters are allowed.

3. Case Sensitivity
    Variable names are case sensitive.
    age is not equal to Age.

4. Combination of Digits and Letters Allowed
    Variable names can be constructed as a combination of digits and letters.
    Examples: age1, age2, etc.

5. Cannot Use C Keywords
    Variable names should not be a C keyword (reserved word).
    Examples: int, main, return, char, etc.
    These are reserved words and have special meanings.
*/

/***************************************************************
 *         Example: Using Variables and Variable Names         *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    char letter1 = 'a'; // variable maps to some memory address
    char letter2 = 'b';
    char letter3 = 'c';

    printf("letter1 = %c\n", letter1);
    printf("letter2 = %c\n", letter2);
    printf("letter3 = %c\n", letter3);

    // Examples of valid variable names:
    int age1 = 25;
    int _score = 99;

    // int 1var = 5;      // Invalid: cannot start with digit
    // int int = 10;      // Invalid: cannot use C keyword

    printf("age1 = %d, _score = %d\n", age1, _score);

    return 0;
}
