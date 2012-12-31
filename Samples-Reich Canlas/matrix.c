#include<stdio.h>
//#include<stdlib.h>
#include<conio.h>


//int answer(char oper);
int result(char chtr[20]);

int main()
{
      int i; //num of matrices
      int dimrow, dimcol; //row by column dimension

      int x[5][5];
      //int count1=0;
      int row=0;
      int col=0;
      int count=1;
      char ch[20],choice;


      //printf("Enter number of matrices:");
      //scanf("%d",&i);

//      printf("Add/Subtract matrices\n");
//      printf("Enter your choice:\n\n");
//      printf("1: Add");
//      printf("2: Subtract");

//     switch(oper)
//    {
//        case 97:
//
//        break;
//
//        case 115:
//
//        break;
//
//        case 109:
//
//        break;
//    }

while (count<3)
      {
      printf("Enter your matrices:\n");
      printf("Enter 25 integers:\n");




      while (row<5)
      {
            while (col<5)
            {
                  //ch=getch();

                  printf("%d",x[row][col]);
                  printf(" ");
                  col++;
            }
            col=0;
            printf("\n");
            row++;
      }

      printf("The integers: \n");

      if (row=5)
      {
       row=0;

       while (row<5)
       {
            printf("Row %d:   ",row);
            while (col<5)
            {
                  printf("%d  ",x[row][col]);
                  col++;
            }
            col=0;
            printf("\n\n");
            row++;

       }
       printf("\n");
       getch();
      }
      count++;
      row=0;
      col=0;
      }


}

int answer(char oper)
{

};
int result(char chtr[20])
{
    int i; //loop counter
    for(i=0;i<21;i++){


    }


    //return(chtr-48);
};

