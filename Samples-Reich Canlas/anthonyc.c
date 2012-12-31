#include <stdio.h>
#include <stdlib.h>


main()
{
    int cnt,x[5],dum,y;
    //while(y!=1)

    for (cnt=0;cnt<5;cnt++)
    {
        printf("\nEnter %d: ",cnt+1);
        scanf("%d", &x[cnt]);
    }

    if (x[0]>x[1]) dum=x[0];
    else if (x[0]<x[1]) dum=x[1];

    for (cnt=1;cnt<5;cnt++)
    {
        if (dum<x[cnt+1]) dum=x[cnt+1];
    }

    printf ("\nThe greatest is %i\n", dum);

    system("pause");
    return(0);

}
