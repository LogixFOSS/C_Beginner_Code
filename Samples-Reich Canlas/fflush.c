#include<stdio.h>

main()
{
      int x;
      float y,answer;
      printf("Enter integer");
      scanf("%i",&x);
      fflush(stdin);
      printf("Enter float");
      scanf("%f",&y);
      answer=x*y;
      printf("%f",answer);
      getch();
      }
