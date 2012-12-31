#include <stdio.h>
#include <conio.h>
#include <string.h>

void display (long);

main()
{
    void (*ptr) (long) = &display;
    ptr (8);
    getch();

}

void display (long num)
{
    long newnum = num+=4;
    printf ("%d", newnum);
}









