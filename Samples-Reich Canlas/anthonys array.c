#include <stdio.h>


int* manipulate(int* somearray);

main()
{
    int array[5];
    *array=manipulate(array);
    system("pause");
    return (0);

}

int* manipulate(int* somearray)
{
    //pass an array into this function, then change the values of the elements
    //of this array somearray[0]
    int cnt;

    for (cnt=0;cnt<5;cnt++)
    {
        printf("\nEnter integer %d: ",cnt+1);
        scanf("%d",somearray+cnt);
        //scanf("%d",&somevar)
    }

    for (cnt=0; cnt<5;cnt++)
    {
        printf("%d\n",*(somearray+cnt));
    }


}
