/*
@ Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter 'a'.
@ A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.

@ Predefined Functions
So it turns out you already know what a function is. You have been using it the whole time while studying this tutorial!

For example, main() is a function, which is used to execute code, and printf() is a function; used to output/print text to the

@ Create a Function
To create (often referred to as declare) your own function, specify the name of the function, followed by parentheses () and curly brackets {}:
Example Explained
myFunction() is the name of the function
void means that the function does not have a return value. You will learn more about return values later in the next chapter
Inside the function (the body), add code that defines what the function should do

@ data type 
The data type specifies the size and type of information the variable will store.
char	1 byte	Stores a single character/letter/number, or ASCII values	'A'


@ Operators
Operators
Operators are used to perform operations on variables and values.  In the example below, we use the + operator to add together two values:

Operators refer to the mathematical operations that are supported by your compiler. In C, these mathematical operators include:

+ for addition
- for subtraction
* for multiplication
/ for division
% for remainder

@ Variables
In C, you can assign a value to an int or integer as follows:

int counter = 0;
Notice how a variable called counter of type int is assigned the value 0.

C can also be programmed to add one to counter as follows:

counter = counter + 1;
Notice how 1 is added to the value of counter.

This can be also represented as:

counter += 1;
This can be further simplified to:

counter++;
Notice how the ++ is used to add 1.

You can also subtract one from counter as follows:

counter--;
Notice how 1 is removed from the value of counter.

@  // +, -, *, /, (), %
    // Declare and initialise variable x with 13
    int x = 13; 
    // Declare and initialise varaible y with 40
    int y = 40;
    // Declaring a variable called result
    //int result;

    // Declare and Assignng the sum of x and y to variable result
    int result = y % x;
    
    // Some char maths for funsies
    char letter = 'S';
    char next_letter = letter + 1;
    printf("Letter %c, next letter = %c and %d", letter, next_letter, next_letter);

    printf("The result is: %d\n", result);

*/

// This line includes the standard C library to let us
// print out to terminal
#include <unistd.h>

// Create a Function (often referred to as declare) or (prototype)
// The initial void means that the function does not return any values. The (void) means that no values are being provided to the function.
// void ft_print_alphabet(void);

void ft_print_alphabet(void)
{
    // code to be executed
    /*
    printf("a\n");
    printf("b\n");              
    printf("b\n");
    Notice this does as intended but has an opportunity for better design. Code is repeated over and over.
     Loops : Loops can execute a block of code as long as a specified condition is reached.
     Loops are handy because they save time, reduce errors, and they make code more readable.
      While Loop :
The while loop loops through a block of code as long as a specified condition is true:
*/
    // Variables are containers for storing data values, like numbers and characters.
    // Declaring (Creating) Variables

    // To create a variable, specify the type and assign it a value:
    //  type variableName = value;
     //Declare a variable
    // int number;

    //Initialise a variable
    // number = 42;

    // Declare and initialise all at once
    // int number_two = 13;

    // Declare and initialise a double
    /// double decimal = 3.5;

    // Declare and initialise a char
    // char character = 'S';

    //Declare a variable
    // You can also declare a variable without assigning the value, and assign the value later:

    char x;         // Notice that we create an char called x 
    //Initialise a variable
    x = 'a'; // and assign it the value 'a'

    while(x <= 'z') // Then, we create a while loop that will run as long as i <= 0. Then, the loop runs Every time 1 is subtracted to a using the z++ statement.
    {
        write(1, &x, 1); 
        x++;  // Notice how our counter x is started at 'a'. Each time the loop runs, it will increment the counter by 1. Once the counter is greater than 'z', it will stop the loop.

    }

}

// Predefined Functions
int main(void) 
{
    /*
    @  Declared functions are not executed immediately. They are "saved for later use", and will be executed when they are called.
    @  To call a function, write the function's name followed by two parentheses () and a semicolon ;
    @  In the following example,( myFunction() ft_print_alphabet() ) is used to print a text (the action), when it is called:
    Inside main, call myFunction()
    */
    ft_print_alphabet(); // Call a Function



}


/*learn from error  
error :    void ft_print_alphabet()  || semicolon 
xapet@xapet-leah:~/c00$ gcc  test.c
test.c: In function ‘main’:
test.c:81:24: error: expected ‘;’ before ‘}’ token
   81 |     ft_print_alphabet()
      |                        ^
      |                        ;
   82 | }
      | ~                       
xapet@xapet-leah:~/c00$ 
@xapet@xapet-leah:~/c00$ make  test.c
make: Nothing to be done for 'test.c'.
xapet@xapet-leah:~/c00$ gcc  test.c
test.c:32:1: error: expected identifier or ‘(’ before ‘{’ token
   32 | {
      | ^
test.c: In function ‘ft_print_alphabet’:
test.c:82:1: error: expected declaration specifiers before ‘}’ token
   82 | }
      | ^
test.c:85: error: expected ‘{’ at end of input
test.c: In function ‘main’:
test.c:82:1: error: expected declaration or statement at end of input
   82 | }
      | ^
xapet@xapet-leah:~/c00$ gcc test.c 
test.c: In function ‘ft_print_alphabet’:
test.c:82:1: error: expected declaration specifiers before ‘}’ token
   82 | }
      | ^
test.c:85: error: expected ‘{’ at end of input
test.c: In function ‘main’:
test.c:82:1: error: expected declaration or statement at end of input
   82 | }
      | ^
xapet@xapet-leah:~/c00$ gcc test.c 
test.c: In function ‘ft_print_alphabet’:
test.c:82:1: error: expected declaration specifiers before ‘}’ token
   82 | }
      | ^
test.c:85: error: expected ‘{’ at end of input
test.c: In function ‘main’:
test.c:82:1: error: expected declaration or statement at end of input
   82 | }
      | ^
xapet@xapet-leah:~/c00$ gcc  test.c
xapet@xapet-leah:~/c00$ ./a.out
xapet@xapet-leah:~/c00$ ls
README.md  a.out  ex00  functions.c  test.c
xapet@xapet-leah:~/c00$ ./a.out
xapet@xapet-leah:~/c00$ gcc  test.c
xapet@xapet-leah:~/c00$ ./a.out
xapet@xapet-leah:~/c00$ 
@ error 
    ft_print_alphabet();
    ft_print_alphabet("\n");
xapet@xapet-leah:~/c00$ ls
README.md  a.out  ex00  functions.c  test.c
xapet@xapet-leah:~/c00$ gcc  test.c
xapet@xapet-leah:~/c00$ ./a.out
abcdefghijklmnopqrstuvwxyzxapet@xapet-leah:~/c00$ gcc  test.c
test.c: In function ‘main’:
test.c:82:5: error: too many arguments to function ‘ft_print_alphabet’
   82 |     ft_print_alphabet("\n");
      |     ^~~~~~~~~~~~~~~~~
test.c:31:6: note: declared here
   31 | void ft_print_alphabet(void)
      |      ^~~~~~~~~~~~~~~~~
xapet@xapet-leah:~/c00$ 
@

    */