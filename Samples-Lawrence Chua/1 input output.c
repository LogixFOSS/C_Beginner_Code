// all words after "//" are just comments and are only used to provide descriptions for the codes
#include<stdio.h> //library for input and output functions
#include<stdlib.h> // library for functions like system("PAUSE"),etc.

main() //this is where the program starts to execute the codes.
{      // The bracket (" ") is where the scope of your codes belongs to
    int number; //declare a variable with a type of int (integer)
    printf("Input a number: "); //printf function is used to print message on the program
    scanf("%i",&number); //scanf function is used to input a value for the variable on program execution
                         //"%i" means the value to be placed on the variable is integer. "i" for integer and it can also be "%c" for char, etc.
    printf("The number is: %i\n",number); //the %i in the string to be printed on the program will be replaced by the value of number
                                            //"\n" means to skip a line
    system("PAUSE"); //this function is for the program to pause and will just continue after the user pressed any key.
}
