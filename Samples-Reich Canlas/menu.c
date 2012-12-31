#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void main()
{
           int i=0, menu = 0, price[20], tempPrice,x;
           char dish[20];
           char option, tempDish[100];
           int cnt1,cnt2; //counter
           char orderlist[20]; //list of items to be ordered
           char choice; //decision character
	while (i<20)
    {
	dish[i]="unavailable";
    price[i]=0;
    i++;
    }
        i=0;
        while(1)
        {
         /*loop*/system("cls")

                  printf("\nMAIN MENU\n\n");
                  printf("    [a] Store Owner\n");
                  printf("    [b] Guest\n\n");
                  printf("Are you the store owner or a guest? ");
                  scanf("%s",&option);

                  if (option == 'a') /*owner*/
                  {
                             printf("\n\nOWNER's CHOICES\n\n");
                             printf("      [1] Add\n");
                             printf("      [2] Edit\n");
                             printf("      [3] Delete\n");
                             printf("      [4] Display Menu\n");
                             printf("      [5] Back to MAIN MENU");
                             printf("\n\nChoose action: ");
                             scanf("%d",&menu);

             switch (menu)
             {
             case 1: /*add*/
                                    printf("\n\nAdd dish: ");
                                    scanf("%s",tempDish);
                                    printf("\nDish Price: ");
                                    scanf("%d",&tempPrice);

             while(i<20)
             {
                        if(dish[i] == "unavailable")
                        {
                                   dish[i] = tempDish;
                                   price[i] = tempPrice;
                                   break;
                        }
             i++;

             }
                         printf("\n\nDish added %s, price Php. %d.",dish[i],price[i]);
                         break;

             case 2: /*select*/
             i=0;

                 printf("Menu List:\n");

             while(i<20)
             {
                        printf("%d Dish: %s Price: %d \n", i,dish[i],price[i]);
                        i++;
             }

                        printf("Edit dish number: ");
                        scanf("%d", &i);
                        printf("\nReplace dish name with: ");
                        scanf("%s",tempDish);
                        printf("\nReplace price with: ");
                        scanf("%d", &tempPrice);

                        dish[i] = tempDish;
                        price[i] = tempPrice;

                        printf("Dish was successfully updated");

             break;

             case 3: /*delete*/
             i=0;

                         printf("Menu List:");

             while(i<20)
             {
                        printf("%d Dish: %s Price: %d \n", i,dish[i],price[i]);
                        i++;
             }

                        printf("Delete dish number: ");
                        scanf("%d", &i);

                        dish[i] = "unavailable";
                        price[i] = 0;

             break;

             case 4: /*display*/
             i=0;
                        printf("Menu List:");

             while(i<20)
             {
                        printf("     \n%d  Dish:  %s          Price:  %d \n", i,dish[i],price[i]);
                        i++;
             }

             break;
                        default:

             break;
                   }

                   }

             else if(option == 'b')/*costumer*/
             {
                 printf("\n\nGUEST's CHOICES\n\n");
                             printf("      [1] Display\n");
                             printf("      [2] Select\n");
                             printf("      [3] Delete\n");
                             printf("      [4] Compute\n");
                             printf("      [5] Back to MAIN MENU");
                             printf("\n\nChoose action: ");
                             scanf("%d",&menu);
             switch (menu)
             {
              case 1: /*display*/
               i=0;
                        printf("Menu List:");

             while(i<20)
             {
                        printf("     \n%d  Dish:  %s          Price:  %d \n", i,dish[i],price[i]);
                        i++;
             }

             break;

              case 2: /*select*/
              i=0;

             while (cnt1==0)
             {
                 printf("Menu List:\n");

             while(i<20)
             {
                        printf("%d Dish: %s Price: %d \n", i,dish[i],price[i]);
                        i++;
             }




                        printf("\nSelect dish number: ");
                        scanf("%d",&i);
            while(cnt2<20)
             {

                        orderlist[cnt2]=dish[i];


                        printf("\nEnter quantity");
                        scanf("%d", &x);


                        printf("\nDish was successfully ordered");

                        //if (choice==67 || choice==99)
                        //cnt1=1;
             }

             break;
             }
             }
             else

             {

             break;

             }



             }
getch();
}

