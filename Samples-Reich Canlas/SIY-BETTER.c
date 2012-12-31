#include <stdio.h>
//#include <math.h>
#include <conio.h>
//#include <string.h>
#include <stdlib.h>

int Y,C,G,I,NX,M,V,P,T,doExit;

//Clears Screen
void clearScreen()
{
  system("cls");
}

void GDP()
{
     clearScreen();
     printf("\nYour finding the value for Y/n");
     printf("\nInput the value for C:   \n");
     scanf("%d",&C);
     printf("\nInput the value for G:   \n");
     scanf("%d",&G);
     printf("\nInput the value for I:   \n");
     scanf("%d",&I);
     printf("\nInput the value for NX:   \n");
     scanf("%d",&NX);

     Y=C+G+I+NX;
     printf("\nYour GDP is: %d\n",Y);
     system("pause");
}

void consumer_spending()
{
     clearScreen();
     printf("\nYour finding the value for C\n");
     printf("\nInput the value for Y:   \n");
     scanf("%d",&Y);
     printf("\nInput the value for G:   \n");
     scanf("%d",&G);
     printf("\nInput the value for I:   \n");
     scanf("%d",&I);
     printf("\nInput the value for NX:   \n");
     scanf("%d",&NX);

     C=Y-G-I-NX;
     printf("\nYour consumer spending is: %d\n",C);
     system("pause");
}

void investment()
{
     clearScreen();
     printf("\nYour finding the value for I\n");
     printf("\nInput the value for Y:   \n");
     scanf("%d",&Y);
     printf("\nInput the value for G:   \n");
     scanf("%d",&G);
     printf("\nInput the value for C:   \n");
     scanf("%d",&C);
     printf("\nInput the value for NX:   \n");
     scanf("%d",&NX);

     I=Y-G-C-NX;
     printf("\nYour total investment is: %d\n",I);
     system("pause");
}

void government_spending()
{
     clearScreen();
     printf("\nYour finding the value for G\n");
     printf("\nInput the value for Y:  \n");
     scanf("%d",&Y);
     printf("\nInput the value for I:   \n");
     scanf("%d",&I);
     printf("\nInput the value for C:   \n");
     scanf("%d",&C);
     printf("\nInput the value for NX:   \n");
     scanf("%d",&NX);

     G=Y-I-C-NX;
     printf("\nYour total government spending is: %d\n",G);
     system("pause");
}

void netexport()
{
     clearScreen();
     printf("\nYour finding the value for NX/n");
     printf("\nInput the value for Y:   \n");
     scanf("%d",&Y);
     printf("\nInput the value for G:   \n");
     scanf("%d",&G);
     printf("\nInput the value for C:   \n");
     scanf("%d",&C);
     printf("\nInput the value for I:   \n");
     scanf("%d",&I);

     NX=Y-G-C-I;
     printf("\nYour total net export is: %d\n",NX);
     system("pause");
}

void money_supply()
{
     clearScreen();
     printf("\nYour finding for the value of M\n");
     printf("\nInput the value for P:  \n");
     scanf("%d",&P);
     printf("\nInput the value for T:  \n");
     scanf("%d",&T);
     printf("\nInput the value for V:  \n");
     scanf("%d",&V);

     M=(P*T)/V;
     printf("The value of M is:  %d\n",M);
     system("pause");
}

void velocity_money()
{
     clearScreen();
     printf("\nYour finding for the value of V\n");
     printf("\nInput the value for P:  \n");
     scanf("%d",&P);
     printf("\nInput the value for T:  \n");
     scanf("%d",&T);
     printf("\nInput the value for M:  \n");
     scanf("%d",&M);

     V=(P*T)/M;
     printf("The value of V is:  %d\n",V);
     system("pause");
}

void average_price()
{
     clearScreen();
     printf("\nYour finding for the value of P\n");
     printf("\nInput the value for V:  \n");
     scanf("%d",&V);
     printf("\nInput the value for T:  \n");
     scanf("%d",&T);
     printf("\nInput the value for M:  \n");
     scanf("%d",&M);

     P=(M*V)/T;
     printf("The value of P is:  %d\n",P);
     system("pause");
}

void index_expenditure()
{
     clearScreen();
     printf("\nYour finding for the value of T\n");
     printf("\nInput the value for V:  \n");
     scanf("%d",&V);
     printf("\nInput the value for P:  \n");
     scanf("%d",&P);
     printf("\nInput the value for M:  \n");
     scanf("%d",&M);

     T=(M*V)/P;
     printf("The value of T is: %d\n",T);
     system("pause");
}

void subformula_2()
{
     int choicesubformula2;

     //subformula2();

     while(choicesubformula2<5 || choicesubformula2>6)
     {
     clearScreen();
     printf("\n[1]M=(P*T)/V\n");
     printf("\n[2]V=(P*T)/M\n");
     printf("\n[3]P=(M*V)/T\n");
     printf("\n[4]T=(M*V)/P\n");
     printf("\n[5]Back to main menu\n");
     printf("\n[6]Quit\n");
     printf("\nWhat variable do you want to solve? ");
     fflush(stdin);
     scanf("%d",&choicesubformula2);

     switch (choicesubformula2)
     {
     case 1 : money_supply();
     break;
     case 2 : velocity_money();
     break;
     case 3 : average_price();
     break;
     case 4 : index_expenditure();
     break;
     case 5:
     break;
     case 6:  doExit=1;
     break;
     default:
     printf("Invalid choice.\n");
     system("pause");
     break;
     }

     }
}

void subformula_1()
{
    int choicesubformula1;

    while(choicesubformula1<6 || choicesubformula1>7)
    {
    clearScreen();
    printf("\n[1]Y=C+G+I+NX\n");
    printf("\n[2]C=Y-G-I-NX\n");
    printf("\n[3]G=Y-C-I-NX\n");
    printf("\n[4]I=Y-G-C-NX\n");
    printf("\n[5]NX=Y-G-I-C\n");
    printf("\n[6]Back to main menu\n");
    printf("\n[7]Quit\n");
    printf("\nWhat variable do you want to solve? ");

    fflush(stdin);
    scanf("%d",&choicesubformula1);

    switch(choicesubformula1)
      {
        case 1:GDP();
        break;
        case 2:consumer_spending();
        break;
        case 3:investment();
        break;
        case 4:netexport();
        break;
        case 5:government_spending();
        break;
        case 6: break;
        case 7: doExit=1;
        break;
        default:
        printf("Invalid choice.\n");
        system("pause");
        break;
      }
    }
}

void main_menu()
{
     int mainformula;
     do
     {
         clearScreen();
         printf("\nWhat formula do you want to use?\n");
         printf("\n[1]Y=C+G+I+NX\n");
         printf("\n[2]M x V = P x T\n");
         printf("\n[3]Quit\n");

         printf("\nType in the number of the formula you want to use:  ");
         scanf("%d",&mainformula);


     switch(mainformula)
     {
         case 1:
            printf("\n\n");
            subformula_1();
            if (doExit==1) mainformula=3;
            break;
         case 2:
            printf("\n\n");
            subformula_2();
            if (doExit==1) mainformula=3;
            break;
         case 3: break;
         default:
         printf("\nInvalid input\n");
         system("pause");
         break;
     }
     }while(mainformula != 3);
}

int main()
{
     int start;
     char confirm;

     clearScreen();
     printf("\nThis is program that solve for\n 1.GDP value\n 2.Equation of Change\n");
     printf("\nDo you want to continue?\n[1]Yes [2]No  ");
     scanf("%d",&start);

     switch(start)
     {
        case 1:
            main_menu();
            if (doExit!=1) break;
            else
        case 2:break;
     }
     return(0);
}
