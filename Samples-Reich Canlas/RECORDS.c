#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define DELIM "_"

typedef struct record
{   //Structure definition
    int qty;
    char name[100];
    int itemnum;

}record;

record recordAdd(int size, char input[100], record list[size])
{   //"a_[nameofitem]_[quantity]": Adding a product to the list

    char * pch;
    char nameofitem[30];
    int quantity;
    pch = strtok (input,DELIM);
    input[0]=DELIM;
    while (pch != NULL)
    {
        list[size].name=pch;
        pch = strtok(NULL,DELIM);
        list[size].qty=pch;
        pch = strtok(NULL,DELIM);
    }

    return(list[size]);

    /*What it must do:
    1. Take these arguments:
        a. user input in the form "a_[nameofitem]_[quantity]"
        b. the dynamically allocated array of records (list[size])
    2. Extract the nameofitem token and place it in the list[size].name property (see the struct "record")
    3. Extract the quantity token and place it in the list[size].qty property
    4. Return the modified list
    */
}

record recordDelete(int size,char input[100],record list[size])
{   //"d_[nameofitem]": Deleting a product from list

    char *pch;
    char itemName[30];
    int cnt; //counter
    pch = strtok (input,DELIM);
    input[0]=DELIM;
    while (pch != NULL)
    {
        itemName = pch;
        pch = strtok(NULL,DELIM);
    }

    while (cnt<=size)
    {
        pch = strstr (list[cnt],itemName);
        cnt++;
    }

    /*What it must do:
    1. Take these arguments:
        a. user input in the form "d_[nameofitem]"
        b. the dynamically allocated array of records (list[size])
    2. Extract the nameofitem token and search it among the members of list[size].name
    3. Replace the item to be deleted with " " and its corresponding quantity with 0
    4. Return the modified list
    */
}

void recordView(int size,record list[size])
{   //"V": View list
    int cnt=0;
    printf("The list:\n");
    printf("Item #       Name       Quantity");
    while (cnt<=size)
    {
        printf("\n   %i       %s       %i",list[cnt].itemnum,list[cnt].name,list[cnt].qty);
    }
}

record recordEditName()
{   //"N_[itemnumber]_[newname]": Edit the name

}

record recordEditQty()
{   //"Q_[itemnumber]_[newquantity]": Edit the quantity

}

char toUppercase(char lowercase)
{
    return(lowercase-32);
}

int main()
{
    int recordnum;
    //char choice;
    char stringInput[100];
    int arraySize;
    //char underscore = '_';
    char choice[]={'E','O','S','V','A','D','N','Q'};
    record* recordArray;

    recordArray = new record[arraySize]; //+10 if there is no limit as to the number of lists

    printf("\nRecord manipulator");
    printf("\nO: Open");
    printf("\nS: Save");
    printf("\nV: View List\n");
    printf("\nE: Exit");

    printf("Enter input: ");

    while(stringInput[0] != 'E') //Program will ask for input continuously until user selects "E"
    {
        scanf("%s",&stringInput);
        stringInput[0]=toUppercase(stringInput[0]);

        switch(choice)
        {
            case 65:
                recordAdd(arraySize,stringInput,recordArray);
                break;
            case 68:
                recordDelete(stringInput);
                break;
            case 86:
                recordView();
                break;
            case 78:
                recordEditName();
                break;
            case 81:
                recordEditQty();
                break;
            default:
                printf("\nEnter a valid choice:");
                break;
        }
        arraySize++;
    }
    delete [] recordArray;
    return(0);
}

/*
RULES:
1. Each row/ entry should be in a structure
2. Input should be in 1 line
3. Each feature/ command should be in one function
4. Program will ask for input continuously until user selects "E"
5. There should be no printf and scanf and other I/O commands inside the functions
6. +10 if there is no limit as to the number of lists
7. Global variables are not allowed

GRADING:
5- Structure definition
10- "E": Exit
10- "O": Open
10- "S": Save
10- "V": View list
15- "a_[nameofitem]_[qty]": Adding a product to the list
15- "d_[nameofitem]": Deleting a product from list
10- "N_[itemnumber]_[newname]": Edit the name
10- "Q_[itemnumber]_[newquantity]": Edit the quantity
*/
