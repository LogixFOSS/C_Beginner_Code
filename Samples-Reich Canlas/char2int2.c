//char2int v1.1
//Created by Reich Canlas 6/22/2012 14:56
//This utility determinnes the integer value for a certain character.
//Helps when using the getch(); function.

//#include <stdio.h>
//#include <conio.h>

main()
{
    char ch;
    int neverending=0;
        
    printf("char2int v1.1\n");
    printf("Created by Reich Canlas 6/22/2012 14:56\n");
    printf("A C program that determinnes the integer value for a certain character.\n");
    printf("Helps when using the getch(); function.\n\n");
    printf("Click on the exit button to close the program.\n\n");
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
    default:
         printf("%c in integer is %d\n",ch,ch);
    }
     
    }while(neverending<1);
    getch();
}
