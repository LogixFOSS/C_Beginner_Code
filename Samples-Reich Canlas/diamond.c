#include <stdio.h>

int main()
{
    int midChars;
    int spaces=5;
    char space=' ';
    char design;
    int cnt1,cnt2,cnt3;

    printf("Enter character to use as design: ");
    scanf("%c",&design);
    printf("\nEnter how many characters you want at the middle: ");
    scanf("%d",&midChars);


    for(cnt1=0;cnt==midChars;cnt1++)
    {
        for (cnt2=0;cnt2==spaces+(midChars/2)-cnt1*2,cnt2++)
        {
            printf("%c",space);
        }

        for (cnt3=0;cnt3=cnt1;cnt3++)
        {
            printf("%c ",design);
        }

    }

    for(cnt1=0;cnt==midChars;cnt1++)
    {
        for (cnt2=0;cnt2==spaces+(midChars/2)+cnt1*2,cnt2++)
        {
            printf("%c",space);
        }

        for (cnt3=cnt1;cnt3=0;cnt3--)
        {
            printf("%c ",design);
        }

    }

    printf("\n");
    system("pause");
    return(0);

}
