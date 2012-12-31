#include <stdio.h>

main()
{
      char listahan[6][10];
      int x,y,z=0;
      int cnt;

      while (z==0)
      {

      printf("Please choose:\n1. add\n2.delete\n");
      scanf("%i",&y);
      switch(y)
      {
               case 1:
                      for(x=1; x<5; x++)
                      {

                      printf("add name: ");
                      scanf("%s",&listahan[x]);
                      }
                      printf(" %d. %s\n",x,listahan[x]);
                      break;
                case 2:

                       printf("Choose a number to delete: ");
                       scanf("%d",&x);
                       while (cnt<10)
                       {
                       listahan[x][cnt]=' ';
                       }
                       listahan[x][10]='\0';
                       break;
        }
/*     printf("Choose a number to delete");
      scanf("%d",&x);
      listahan[x] = 0;
      }
*/
    }
      getch();
}
