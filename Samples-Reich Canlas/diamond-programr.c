#include <stdio.h>

int main()
{
	int Num;
	int Y,X;

	printf("Enter any number in the range of 1 to 9 : ");
	scanf("%d",&Num) ;
	if(Num >= 1 && Num <= 9)
	{
		for(Y=-Num;Y!=Num;Y++)
		{
		   if(Y!=0)
			{
				for(X=1;X!=(Y<0?-Y:Y+1);X++)
					printf(" ");
				for(X=-(Y<0?Num+Y+1:Num-Y);X!=(Y<0?Num+Y+1:Num-Y);X++)
					if(X!=0)
						printf("%d",(X<0?-X:X+1));
				printf("\n");
			}
		}
	}
	else
		printf("Sorry, limit exceeded. Try again.");

	system("PAUSE");
}
