// all words after "//" are just comments and are only used to provide descriptions for the codes
#include<stdio.h> //library for input and output functions
#include<stdlib.h> // library for functions like system("PAUSE"),etc.
// there are three way to make a loop in C or C++ and these are "while", "do-while", and "for"
main()
{
    int number;
    printf("Enter 5 to exit the program\n");
    //the codes that are on the scope of while (which are the codes inside the bracket just under the while)
    // will be executed repeatedly until the value of number is 5
    // the "!=" operation means "not equal to" so the loop basically means that "the loop will execute while the number is not equal to 5"
    while (number!=5)
    {
    scanf("%i",&number);
    }
}
