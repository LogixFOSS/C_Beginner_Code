#include <stdio.h>
#include <conio.h>

typedef struct ROCHA
{
    int itemnumber; //Item number of the record
    char name[20]; //Name w/ 20 char max
    int qty; //number of items
}ROCHA;

void adddata(int itemnum,ROCHA customstruct[10]);
void deletedata(int itemnum,ROCHA customstruct[10]);
void printdata(ROCHA customstruct[10]);

main(){

    ROCHA array[10];
    int i=0; //arbitrary, for looping only
    char choice;
    int recordnumber; //itemnumber in the struct array
    //int recordname; //name in struct array
    //int recordqty; //qty in struct array

    while (i<1){
        choice=getch();

        switch(choice){
            case 49:
            printf("Enter record number from 1 to 10: ");
            fflush(stdin);
            scanf("%d",&recordnumber);
            adddata(recordnumber,array);
            printf("\nSuccessfully added.");


            break;

            case 50:
            printf("Enter record number to delete: ");
            fflush(stdin);
            scanf("%d",&recordnumber);
            deletedata(recordnumber,array);
            printf("\nDeleted successfully.");

            break;

            case 51:
            printf("The records:");
            printdata(array);
            break;

            case 52:
            i=1;
            break;

            default:
            printf("Enter a valid choice from 1-4.");
            break;

        }

    }

}

void adddata(int itemnum,ROCHA customstruct[10]){
    char recordname[20];
    int qty;


    printf("Enter name of item (max 20 chars):");
    scanf("%s",&recordname);
    printf("\nEnter quantity:");
    scanf("%d",&qty);
    customstruct[itemnum].name=recordname;
    customstruct[itemnum].qty=qty;



};

void deletedata(int itemnum,ROCHA customstruct[10]){
    customstruct[itemnum].name=" ";
    customstruct[itemnum].qty=0;

};

void printdata(ROCHA customstruct[10]){
    int i=0; //counter again
    printf("#            Name           Qty");
    while (i<10){
        printf("%d           %s           %d\n",customstruct[i].itemnumber,customstruct[i].name,customstruct[i].qty);
        i++;
    }

};
