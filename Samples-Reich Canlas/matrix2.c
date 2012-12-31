#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//int dimensioner(int usrrow,usrcol);

//int input(char ch); //ch gets the number from input
//int output();

typedef struct matrix
{
       int row,col; //dimensions
       int values[5/*row*/][5/*col*/];//data
       int elem;//number of elements

}matrix;

int result(char chtr);
//int matrixscan(char chtr[20]);

matrix matrixformer(matrix mat);
matrix matrixshow (matrix mat);
matrix matrixadd (matrix mat1,matrix mat2);
matrix matrixsubtract (matrix mat1, matrix mat2);
matrix matrixmultiply (matrix mat1, matrix mat2);

main()
{

matrix m1,m2; //two matrices to be operated on
matrix sum,diff,prod; //answer
char ch;
//int elem; //number of elements
//printf("Enter number of rows: ");
//scanf("%d",m1.row);
//printf("Enter number of columns: ");
//scanf("%d",m1.col);

m1.row=5;
m1.col=5;

m2.row=5;
m2.col=5;

//m2.values[0][1]=0;
//m1.values[1][1]=1;
//printf("%i\n",m2.values[0][1]);
//printf("%i",m1.values[1][1]);

    printf("Matrix Arithmetic\n");
    printf("Adds, subtracts, and multiplies 5x5 matrices.\n\n");
    printf("Enter an operation:\n");
    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Multiply\n");
    printf("4: Exit\n\n");
    printf("Enter your choice: ");
    ch=getch();
    printf("\n");
    switch(ch){
        case 49:
            m1=matrixformer(m1);
            matrixshow(m1);
            m2=matrixformer(m2);
            matrixshow(m2);
            sum=matrixadd(m1,m2);
            matrixshow(sum);
            break;
        case 50:
            m1=matrixformer(m1);
            matrixshow(m1);
            m2=matrixformer(m2);
            matrixshow(m2);
            diff=matrixsubtract(m1,m2);
            matrixshow(diff);
            break;
        case 51:
            m1=matrixformer(m1);
            matrixshow(m1);
            m2=matrixformer(m2);
            matrixshow(m2);
            prod=matrixmultiply(m1,m2);
            matrixshow(prod);
            break;
        case 52:
            system("pause");
            break;
    }

}


int result(char chtr)
{
  return(chtr-48);
};

matrix matrixformer(matrix mat){
    int rowcount=0,colcount=0; //for looping purposes only
    printf("Enter 25 single-digit integers:\n"/*,m1.elem*/);
    mat.elem=mat.row*mat.col;
    char ch;
while (rowcount<mat.row)
      {
            while (colcount<mat.col)
            {

                  //printf("%c %d",ch,ch);
                  ch=getch();
                  mat.values[rowcount][colcount]=result(ch);
                  printf("%d",mat.values[rowcount][colcount]);
                  printf(" ");
                  colcount++;
            }
            colcount=0;
            printf("\n");
            rowcount++;
      }
return(mat);
};

matrix matrixshow (matrix mat){
    int rowcount=0,colcount=0; //for looping purposes only

      if (rowcount=mat.row)
      {
       rowcount=0;

       while (rowcount<5)
       {
            printf("Row %d:   ",rowcount);
            while (colcount<5)
            {
                  printf("%d  ",mat.values[rowcount][colcount]);
                  colcount++;
            }
            colcount=0;
            printf("\n\n");
            rowcount++;

       }
      }
return(mat);
};

matrix matrixadd(matrix mat1, matrix mat2){
    int rowcount=0,colcount=0; //for looping purposes only
    matrix sum; //result of addition

while (rowcount<mat1.row)
      {
            while (colcount<mat1.col)
            {

                  sum.values[rowcount][colcount]=mat1.values[rowcount][colcount]+mat2.values[rowcount][colcount];
                  //printf("%d",sum[rowcount][colcount]);
                  //printf(" ");
                  colcount++;
            }
            colcount=0;
            printf("\n");
            rowcount++;
      }
printf("The sum is: \n");
return (sum);
//matrixshow()
};


matrix matrixsubtract(matrix mat1, matrix mat2){
    int rowcount=0,colcount=0; //for looping purposes only
    matrix diff; //result of each addition

while (rowcount<mat1.row)
      {
            while (colcount<mat1.col)
            {
                  diff.values[rowcount][colcount]=mat1.values[rowcount][colcount]-mat2.values[rowcount][colcount];
                  //printf("%d",sum[rowcount][colcount]);
                  //printf(" ");
                  colcount++;
            }
            colcount=0;
            printf("\n");
            rowcount++;
      }
printf("The difference is: \n");
return(diff);
};

matrix matrixmultiply(matrix mat1, matrix mat2){
    int rowcount=0,colcount=0; //for looping purposes only
    matrix prod; //result of each addition

while (rowcount<mat1.row)
      {
            while (colcount<mat1.col)
            {
                  prod.values[rowcount][colcount]=mat1.values[rowcount][colcount]*mat2.values[colcount][rowcount]+mat1.values[rowcount+1][colcount]*mat2.values[colcount][rowcount]+mat1.values[rowcount+2][colcount]*mat2.values[colcount][rowcount]+mat1.values[rowcount+3][colcount]*mat2.values[colcount][rowcount]+mat1.values[rowcount+4][colcount]*mat2.values[colcount][rowcount];
                  //printf("%d",sum[rowcount][colcount]);
                  //printf(" ");
                  colcount++;
            }
            colcount=0;
            printf("\n");
            rowcount++;
      }
printf("The product is: \n");
return(prod);
};

//int matrixscan(char chtr[20]){
//    int i,j;
//    char final[20];
//
//    for(i=0;i<20;i++){
//        chtr[i]=getch();
//        printf("%c",chtr[i]);
//        if (chtr[i]==13){
//            for(j=0;j==i;j++){
//                final[j] = chtr[j]-48;
//                printf("%d ",final);
//            }
//            i=20;
//        }
//    }
//
//};
