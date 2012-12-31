#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>



void add();//global parameters
void rem();//global parameters
void display();//global parameters
void search();//global parameters

int a, b, x, y ,z;//global variables
typedef char string[128];
string c, d[16]; //global variables

int main()
{
    do{
    system("cls");
    printf("Choose an option for Strings\n1.) Insert String\n2.) Remove\n3.) Display\n4.) Search\n5.) Close\n\nChoice: ");
    scanf("%i", &a);
    switch (a)
    {
           case 1:
                add();
                break;

           case 2:
                rem();
                break;

           case 3 :
                display();
                break;

           case 4:
                search();
                break;

           case 5:
                system("pause");
                exit(0);
                break;

           default:
                printf("Type a vaild choice");
                Sleep(2000);
                main();
                break;
    }//end switch
    //main();
    }while(a!=5);

    return 0;
}// end of main


void add()
{
    system("cls");
    printf("Enter number of strings you want to input (1-16 only)");
    scanf("%i", &z);
    if (z>0 && z<17)
    {
            for (x=0; x<z; x++)
            {
                b=x+1;
                printf(" Enter string number %i ", b);
                scanf("%s", &d[x]);
            }//end loop
    }//end if
    else
    {
            printf("Please enter a valid choice");
            Sleep(2000);
            add();
    }//end else
    //main();
}//end of insert

void rem()
{
    system("cls");
    printf("Enter number of the string you want to remove: ");
    scanf("%i", &z);
    d[z-2][128]='\0';
    printf("Remove successful!");
    Sleep(2000);
    //main();
}// end of remove

void display()
{
    system("cls");
    printf("Your Strings:\n");
    for(x=0;x<16;x++)
    {
            b = x+1;
            printf("String #%i : %s\n" , b, d[x]);
    }//end loop
    system("pause");
    //main();
}// end of display

void search()
{
    system("cls");
    printf("Enter the string to search for: ");
    scanf("%s",&c);
    for(x=0;x<16;x++)
    {
            if(strcmp(c,d[x])==0)
            {
                    b=x+1;
                    printf(" String #%i : Found here\n", b);
            }//end if
            /*else
            {
                    b=x+1;
                    printf(" String #%i : Not here\n", &b);
            }//end else*/

            //main();
    }//end for
    system("pause");
}//end of search
