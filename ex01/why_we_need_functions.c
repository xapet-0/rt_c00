/***************************************************************
 *                                                             *
 *            Understanding the Need for Loops in C            *
 *                                                             *
 ***************************************************************/

/*
===============================
  Example Situation
===============================

To really understand the need of loops, let's assume a situation where we need to print "good morning" 10 times.

-------------------------------
Manual Solution
-------------------------------

What can we do?

One thing we can do is write 10 printf statements separately to print each "good morning" like this.

The output will be "good morning" printed 10 times.

Now, it's fine because 10 is a small number.

But what if we want to print it 100 times or maybe 1000 times?

It's impractical to write the same statements again and again.

So this is not a great solution.

-------------------------------
The Real Solution: Looping Statements
-------------------------------

What is the real solution to this issue?

The real solution is looping statements.

Instead of printing it N times, we can use looping statements.

Looping statement allows us to execute a block of code repeatedly until the given condition is true.

When the condition becomes false, it will stop executing the statements.

-------------------------------
Remembering Loops: The Analogy
-------------------------------

We can easily remember loops using this:

See, we have: loop → energy → run

As long as the person has energy, he will run.

When he doesn't have energy, he'll stop running further.

This is exactly how loops work:

It will execute a block of code as long as the given condition is true.

Here, the condition is having energy and the block of code is run.


ASCII Analogy:
--------------
        +----------+
        |  energy  |
        +----------+
              |
          [has energy?]
             /     \
           yes      no
            |        |
         [run]    [stop]
            |
         (repeat)


-------------------------------
Types of Loops in C
-------------------------------

In C we have different kinds of loops:

    for loop

    while loop

    do while loop

We will be discussing each in the coming lessons.
*/

/***************************************************************
 *                 Example: Loop vs No Loop                    *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    // Manual solution (not recommended for large N)
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");
    printf("good morning\n");

    // Real solution: using a loop
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("good morning\n");
    }

    return 0;
}


/***************************************************************
 *                Examples: All Types of Loops                 *
 ***************************************************************/

#include <stdio.h>

int main(void)
{
    int i;

    // --- for loop ---
    printf("\nUsing for loop:\n");
    for (i = 0; i < 10; i++)
    {
        printf("good morning\n");
    }

    // --- while loop ---
    printf("\nUsing while loop:\n");
    i = 0;
    while (i < 10)
    {
        printf("good morning\n");
        i++;
    }

    // --- do while loop ---
    printf("\nUsing do while loop:\n");
    i = 0;
    do
    {
        printf("good morning\n");
        i++;
    }
    while (i < 10);

    return 0;
}