// Example: Reading values from the user and using if statement in C

#include <stdio.h>

int main(void)
{
    // 1. Declare variables
    int a; // Variable to store user's input (not initialized yet!)
    int x; // Another variable to store user's input

    // 2. Print instructions for the user
    // You should always use printf to display messages to the user.
    printf("Please enter a value for a: "); // Good practice: clear prompt message

    // 3. Read input from user
    // ERROR 1: The wrong way would be: scanf("give a %i",&a);
    // This is incorrect because the format string should only contain format specifiers like "%d", not extra text!
    // CORRECT way:
    scanf("%d", &a); // Reads an integer from the user and stores it in variable 'a'

    // 4. (Optional) Read another value for x
    printf("Please enter a value for x: ");
    scanf("%d", &x); // Reads another integer for variable 'x'

    // 5. Use if statement with the value of a
    // At this point, 'a' is guaranteed to have a value
    if(a < x)
    {
        printf("a is less than x\n"); // This will print only if 'a' is less than 3
    }

    // 6. (Optional) Use x for something, so we don't get 'unused variable' warning
    // If you don't use x, you will see: warning: unused variable 'x' [-Wunused-variable]
    printf("You entered x = %d\n", x);

    // 7. Always return 0 at the end of main (good style)
    return 0;
}
