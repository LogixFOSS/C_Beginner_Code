#include <stdio.h>

main()

{
    int one,two,five,ten; //denominations
    int amt; //amount to be withdrawn
    int rem[4]; //remainder after every division

    printf("Withdraw amount: ");
    scanf("%i",&amt);

    ten=amt/1000;
    rem[0]=amt%1000;

    five=rem[0]/500;
    rem[1]=rem[0]%500;

    two=rem[1]/200;
    rem[2]=rem[1]%200;

    one=rem[2]/100;
    rem[3]=rem[2]/100;

    printf("\nThe number of 1000 peso bills is: %i",ten);
    printf("\nThe number of 500 peso bills is: %i",five);
    printf("\nThe number of 200 peso bills is: %i",two);
    printf("\nThe number of 100 peso bills is: %i",one);






}
