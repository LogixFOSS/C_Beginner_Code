// all words after "//" are just comments and are only used to provide descriptions for the codes
#include<stdio.h> //library for input and output functions
#include<stdlib.h> // library for functions like system("PAUSE"),etc.

main()
{
    int number;
    printf("Enter a number between 1 - 10: ");
    scanf("%i",&number);
    // use "if-else" to manipulate the program depending on the value that the user has entered
    if (number<1) //use "<" for less than, ">" for greater than,"=" equals,"<=" less than or equal, ">=" greater than or equal
    {
        printf("The number is less than the range!\n");
    }
    else if (number>10)// use "else if" to add another "if" for your program
    {
        printf("The number is greater than the range!\n");
    }
    else // the "else" will be excecuted if none of the "ifs" and "else ifs" are satisfied
    {
        printf("The number is %i\n", number);
    }
    system("PAUSE");
}
