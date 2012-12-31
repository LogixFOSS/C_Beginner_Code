//char2int v1.2
//Created by Reich Canlas 6/23/2012 14:30
//This utility determines the ASCII integer value for a certain character.
//Helps when using the getch(); function.
//Now compiled with CodeBlocks 10.05.
//Tooth Less, does the Ctrl key on a PC have the same ASCII value as the Cmd key on a Mac?

//Feature added:
//*Quit the program using Ctrl-X


#include <stdio.h>
#include <conio.h>

main()
{
    char ch;
    int loop=0;

    printf("char2int v1.2\n");
    printf("Created by Reich Canlas 6/23/2012 14:30\n");
    printf("A C program that determines the ASCII integer value for a certain character.\n");
    printf("Helps when using the getch(); function.\n\n");
    printf("Press Ctrl-X to quit the program.\n\n");
    printf("Hit any key to start.\n\n");

    do
    {
    ch=getch();

    switch(ch)
    {
    case 13:
         printf("\"Enter\" in integer is %d\n",ch);
         break;
    case 32:
         printf("\"Space\" in integer is %d\n",ch);
         break;
    case 8:
         printf("\"Backspace\" in integer is %d\n",ch);
         break;
    case 9:
         printf("\"Tab\" in integer is %d\n",ch);
         break;
    case 27:
         printf("\"Escape\" in integer is %d\n",ch);
         break;
    case -32:
         printf("\"Delete\" in integer is %d\n",ch);
         break;
    case 24:
        printf("Ctrl-X in integer is 24. Press any key to quit.");
        getch();
        loop++;
        break;
    default:
         printf("%c in integer is %d\n",ch,ch);
    }

    }while(loop<1);

}
