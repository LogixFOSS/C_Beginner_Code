#include <stdio.h>
#include <math.h>

main()
{

    float rate;
    int annualPop;
    int years=0;
    int until;

    printf("Enter original population: ");
    scanf("%i",&annualPop);
    printf("\nEnter rate of increase in percent: ");
    scanf("%f",&rate);
    printf("Enter population number to surpass: ");
    scanf("%i",&until);

    do
    {
            annualPop=annualPop+annualPop*(rate/100);
            printf("%i\n",annualPop);
            years++;

    }while (annualPop<until);

    printf("\nThe number of years to surpass %i is: %i\n",until,years);

    system("PAUSE");

}
