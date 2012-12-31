#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

main()
{
      int row = 0, column = 0, rownum, colnum;
      float total = 0, ave, totalave = 0, matrixave;
      printf("I will give you an nxm matrix table: \n What will be your n?  ");
      scanf("%i", &rownum);
      printf("\n What will be your m?  ");
      scanf("%i", &colnum);
      
      int multtable[rownum][colnum];
      while (row < rownum)
      {
            while (column < colnum)
            {
                  multtable[row][column] = abs(abs(row - column)-5);
                  printf("%i   ", multtable[row][column]);
                  total = total + multtable[row][column];
                  column++;
            }
      row++;
      column = 0;
      ave = total/colnum;
      total = 0;
      printf("Row average = %.2f \n", ave);
      totalave = totalave + ave;
      }
      matrixave = totalave/colnum;
      printf("Matrix average = %.2f \n", matrixave);
      getch();    
} //end of main 
