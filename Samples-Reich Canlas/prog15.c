#include <stdio.h>
#include <conio.h>
#include <string.h>

main(){
    int midline;//num of chars @ midline
    int i=0,j=16;//loop counters
    char character; //the character to display
    char lines[128]; //the lines of the diamond

    printf("Char2Diamond\n");
    printf("Enter number of chars at the middle line: ");
    scanf("%d",&midline);
    printf("Enter your desired character: ");
    scanf("%c",&character);
    printf("\n\n\n");


    while(i<(midline*2-2)){

        if (i<midline){
            for(j=16;j=0;j--){
            printf(" ");
            }
            printf("%c",character);
        }

        else if (i=midline){
            while(i=)
        printf("       %c",character);
        }

        else if (i>midline){



        continue;
        }

    printf("\n");


    }




}
