// all words after "//" are just comments and are only used to provide descriptions for the codes
#include<stdio.h> //library for input and output functions
#include<stdlib.h> // library for functions like system("PAUSE"),etc.
// there are three way to make a loop in C or C++ and these are "while", "do-while", and "for"

main()
{
  int number;
  //the "do-while" loop is very much similar to "while" loop. The only difference is
  //the "do-while" will execute the codes first without checking the conditions first which is
  //"while number is not equal to 5" so if number is equals 5 the loop would still execute once
  //and this can be test by initializing the value of the variable number
  //initializing example - "int number = 5" in this case the variable number has an initial value of 5
  printf("Enter 5 to exit the program\n");
  do
  {
    scanf("%d",&number);
  }while (number!=5);//the loop would continue until number is equal to 5
}
