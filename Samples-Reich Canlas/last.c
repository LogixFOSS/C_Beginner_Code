#include <stdio.h>
#include <conio.h>

/*
a: ask for 1 num (then display what letter it corresponds to in the alphabet)
b: ask for 5 num (then display which among them are even)
c: ask for 5 num (the display odd)
d: exit

"wrong input"
*/

main()
{
	char choice;
	int alpha;
	int array[5];
	int even[5],odd[5];
	int loop;
	int cnt1;
	
	while(loop!=1)
	{
	
	printf("\na: display what letter it corresponds to in the alphabet");
	printf("\nb: ask for 5 num (then display which among them are even)");
	printf("\nc: ask for 5 num (the display odd)");
	printf("\nd: exit");
	
	
	printf("\nEnter choice ");
	choice=getch();
	system("cls");
	
	switch(choice)
	{
		case 'a':
		case 'A':
			printf("\nEnter a number: ");
			scanf("%d",&alpha);
			if (alpha>0 && alpha<27) printf("\nThe letter that corresponds to %d is %c.\n",alpha,alpha+64);
			else printf("\nNo letter corresponds to %d\n",alpha);
			//system("cls");
			break;
		
		case 'b':
		case 'B':
			while (cnt1<5)
			{
				printf("\nEnter number %d: ",cnt1+1);
				scanf("%d", &array[cnt1]);
				//if((array[cnt1]%2)==0) even[cnt1]=array[cnt1];
				//else even[cnt1]=1;
				cnt1++;
			}
			cnt1=0;
			
			printf("The even numbers are: ");
			while (cnt1<5)
			{
				if((array[cnt1]%2)==0) printf("%d ",array[cnt1]);
				cnt1++;
			}
			cnt1=0;
			printf("\n");
			//system("cls");
			break;
			
		case 'c':
		case 'C':
			while (cnt1<5)
			{
				printf("\nEnter number %d: ",cnt1+1);
				scanf("%d", &array[cnt1]);
				//if(array[cnt1]%2!=0) odd[cnt1]=array[cnt1];
				//else odd[cnt1]=0;
				cnt1++;
			}
			cnt1=0;
			
			printf("The odd numbers are: ");
			while (cnt1<5)
			{
				if((array[cnt1]%2)!=0) printf("%d ",array[cnt1]);
				cnt1++;
			}
			cnt1=0;
			// system("cls");
			break;
			
			printf("\n");
		
		case 'd':
		case 'D':
			loop=1;
			break;
		
		default:
			printf("\nWrong input\n");
	}
	
	}
}	