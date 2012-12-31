#include<stdio.h>
#include<stdlib.h>

main()
{
      int choice;
      float num1,num2,result;
      printf("MDAS\n");
      printf("Select an operation:\n");
      printf("1: Multiply\n");
      printf("2: Divide\n");
      printf("3: Add\n");
      printf("4: Subtract\n\n");
      printf("Enter your choice:");
      scanf("%d",&choice);
      
      switch(choice)
      {
         case 1:
              printf("Enter a number: ");
              scanf("%f",&num1);
              printf("Enter another one: ");
              scanf("%f",&num2);
              result=num1*num2;
              printf("The result is: %.3f",result);
              getch();
              break;
         case 2:
              printf("Enter a number: ");
              scanf("%f",&num1);
              printf("Enter another one: ");
              scanf("%f",&num2);
              result=num1/num2;
              printf("The result is: %f",result);
              getch();
              break;
         case 3:
              printf("Enter a number: ");
              scanf("%f",&num1);
              printf("Enter another one: ");
              scanf("%f",&num2);
              result=num1+num2;
              printf("The result is: %f",result);
              getch();
              break;
         case 4:
              printf("Enter a number: ");
              scanf("%f",&num1);
              printf("Enter another one: ");
              scanf("%f",&num2);
              result=num1-num2;
              printf("The result is: %f",result);
              getch();
              break;
          default:
              printf("Invalid choice. Enter a number from 1-4:");
              getch();
              break;    
      }
}
