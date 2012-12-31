// all words after "//" are just comments and are only used to provide descriptions for the codes
#include<stdio.h> //library for input and output functions
#include<stdlib.h> // library for functions like system("PAUSE"),etc.
// there are three way to make a loop in C or C++ and these are "while", "do-while", and "for"

main()
{
    int number;
    int numberOfA;
    int n;//will only be used for counting of loops made
    printf("Input the number of A to be printed: ");
    scanf("%i",&numberOfA);
    // "for" loop is a more complicated loop than "do-while" and "while".However, it provides
    // more flexibility on your loop.
    // for loop basically consists of three parts which are separated by semicolon (:)
    // the first part "n=0" second part "n<numberOfA" and the third part "n++"
    // the first part is where you initialize or placed the variable that you will be using for counting the loops
    // the second part is the comparison of the counter of loops "n" and the value to be achieved before the loop stops which is the value of "numberOfA"
    // the third part is what will be done to the counter variable "n" on every successful loop made. n++ is called increment. It basically
    // means that the value of "n" would be added by 1 on every successful loop made. It is just the shortcut of the expression "n=n+1".
    // The for loop would be executed while the value of "n" is still less than the value of "numberOfA" and on every successful loop the value of n is increased by 1
    // In general, the "for" loop will be executed while the expression on the second part is true.

    // example : if you enter the value of numberOfA to be 5, since the initial value of n is 0 and it is less than 5 which is the value of numberOfA, the loop will be executed and will print "A"
    // after the printing of "A", since it has already reached the end of the codes to be looped, the value of "n" will then be increase by 1 so "n" is now equal to 1
    // the "for" loop will then check again if "n" is less than "numberOfA". Since the value of "n" is still less than the "numberOfA" the code will be executed again
    // and this will repeat until the value of "n" is 5. Since 5 is not less to 5, the loop will now stop.
    for (n=0 ;n<numberOfA;n++)
    {
        printf("A");
    }
    system("PAUSE");
}
